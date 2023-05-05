/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:14:16 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/04 16:52:12 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_split():
		This function takes a string "s" and a character "c" as input, 
		and returns an array of strings (i.e., an array of pointers to 
		characters), where each string is a substring of "s" that is 
		delimited by the character "c". Iterating through the input string "s" 
		and calling the ft_word_splitter function on each non-delimiter substring. 
		The function starts by allocating memory for an array of strings words 
		using malloc, with the size of the array set to the number of words in 
		the input string "s" (which is calculated using the ft_count_words function). 
		The function then iterates through the input string "s", checking each 
		character to see if it is a delimiter or not. If the character is not a 
		delimiter, the function calls ft_word_splitter on the current substring 
		(starting at the current index "i"), adds the resulting substring to the 
		words array at the current index "j", and increments "j". If the character 
		is a delimiter, the function simply increments the index "i" and continues 
		to the next character. Once all the substrings have been processed, the 
		function adds a null pointer to the end of the words array to indicate 
		the end of the array, and returns the array.

	ft_count_words:
		Takes a string "s" and a character "c" as input, and returns the 
		number of words (i.e., substrings) in "s" that are delimited by the 
		character "c". The function works by iterating through the string "s" 
		and counting the number of times it encounters a non-delimiter character 
		"c" followed by a delimiter character "c". This is done using a while 
		loop that checks whether the current character is a delimiter or not, 
		and increments a counter variable words accordingly. If the current 
		character is not a delimiter, the function advances the index "i" 
		until it reaches the next delimiter character or the end of the string.

	ft_word_splitter:
		Takes a string "s" and a character "c" as input, and returns a 
		substring of "s" that starts at the current index "i" and ends at 
		the next delimiter character "c" or the end of the string. The function 
		works by first calculating the length of the substring, and then 
		allocating memory for it using malloc. This is done using a while loop 
		that increments the index "i" until it reaches the next delimiter 
		character or the end of the string, and counting the number of 
		characters along the way. Once the length is known, the function 
		allocates memory for the substring using malloc, copies the 
		characters from the input string "s" to the substring using a 
		for loop, and adds a null terminator at the end.

*/

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}	
		else
			i++;
	}
	return (words);
}

static char	*ft_word_splitter(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words[j] = ft_word_splitter(&s[i], c);
			while (s[i] != '\0' && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

/*
int	main(void)
{
	int i;
	char **words = ft_split("Hello,world!How,are,you?", ',');
    if (words)
    {	
		i = 0;
		while (words[i])
		{
            printf("%s\n", words[i]);
			i++;
        // output:	
        	// Hello
        	// world!How
        	// are
        	// you?
		}
    }
	free(words);
    return 0;
}
*/