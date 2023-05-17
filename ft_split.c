/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:14:16 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/17 18:15:23 by bsalgado         ###   ########.fr       */
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

		This function splits the string s into an array of substrings based 
		on the delimiter character c. It initializes variables i, j, and words. 
		The variable words is a pointer to a pointer (char**) that will store 
		the array of split words. It allocates memory for the words 
		array using malloc, 
		with the size calculated as the number of words in s (determined by 
		ft_count_words(s, c)) plus one (to accommodate the null terminator). 
		If the memory allocation fails or if s is null, it returns NULL.
		The function then enters a loop that continues until the end of the 
		string ('\0') is reached. Inside the loop, if the current character 
		s[i] is not equal to the delimiter c, it calls ft_word_splitter 
		with the address of s[i] to obtain the split word. It stores the 
		returned word in the words array at index j and increments j to 
		move to the next index. It then advances i until either the end 
		of the string or the delimiter is encountered. If the current 
		character is the delimiter, it simply increments i.
		Finally, the last element of the words array is set to NULL to mark 
		the end of the array, and the words array is returned.

		The function ft_split takes a string s and a character c as input 
		and splits the string into an array of words, where words are 
		delimited by the character c. Here's a breakdown of how the 
		function works:

    	1 - Declare integer variables i and j and initialize them to 0. 
		These variables will be used to keep track of the current 
		positions in the input string and the array of words, respectively.

    	2 - Declare a double pointer words to store the dynamically 
		allocated array of strings.

    	3 - Allocate memory for the words array using malloc. 
		The size of the allocated memory is calculated as 
		(ft_count_words(s, c) + 1) to accommodate the number 
		of words plus a null pointer at the end.

    	4 - Check if the memory allocation was successful or 
		if the input string s is null. If either condition 
		is true, return NULL to indicate an error.

    	5 - Start a loop that continues until the end of the 
		input string is reached (indicated by the null 
		character '\0').

    	6 - Check if the current character in the input string 
		s[i] is not equal to the delimiter character c. If it's 
		not equal, it means we have encountered a word.

    	7 - Assign the result of ft_word_splitter function, 
		passing the address of s[i] and the delimiter 
		character c, to words[j]. This will store the dynamically 
		allocated string for the current word in the array words.

    	8 - Enter a nested loop that continues until either the 
		end of the input string is reached or the delimiter 
		character c is encountered. This loop is used to 
		skip over the characters of the current word.

    	9 - Increment i to move to the next character in the input 
		string.

    	10 - After the nested loop exits, increment j to move 
		to the next position in the array words.

    	11 - If the current character in the input string is the 
		delimiter character c, increment i to move to the next 
		character in the input string.

    	12 - Repeat steps 6-11 until the end of the input string 
		is reached.

    	13 - Assign a null pointer to the last position in the 
		array words to indicate the end of the array.

    	14 - Return the array of strings words.

		In summary, the function ft_split splits a string into an 
		array of words by iterating over the characters, using 
		ft_word_splitter to extract each word and dynamically 
		allocating memory for each word. The resulting array 
		of words is returned as a dynamically allocated array 
		of strings.

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
		
		This function counts the number of words in a string 
		s using a delimiter character c. It initializes variables i and words 
		to 0. Then, it enters a loop that continues until the end of the string 
		('\0') is reached. Inside the loop, if the current character s[i] is not 
		equal to the delimiter c, it increments the words counter and advances i 
		until either the end of the string or the delimiter is encountered. 
		If the current character is the delimiter, it simply increments i. Finally, 
		the function returns the total number of words counted.

		The function ft_count_words takes a string s and a character c as input 
		and counts the number of words in the string, where words are delimited by 
		the character c. Here's a breakdown of how the function works:

    	1 - Initialize two variables, i and words, to 0. These variables 
		will be used to keep track of the current position in the string 
		and the count of words, respectively.

    	2 - Start a loop that continues until the end of the string is 
		reached (indicated by the null character '\0').

    	3 - Check if the current character in the string, s[i], is 
		not equal to the delimiter character c. If it's not equal, 
		it means we have encountered a word.

    	4 - Increment the words counter by 1 to indicate that a 
		word has been found.

    	5 - Enter a nested loop that continues until either the end of 
		the string is reached or the delimiter character c is encountered. 
		This loop is used to skip over the characters of the current word.

    	6 - Increment i to move to the next character in the string.

    	7 - Once the nested loop exits, either because the end of the 
		string or the delimiter character is encountered, the control 
		returns to the outer loop.

    	8 - If the current character in the string is the delimiter 
		character c, increment i to move to the next character in the string.

    	9 - Repeat steps 3-8 until the end of the string is reached.

    	10 - Return the final count of words.

		In summary, the function counts the number of words in a string by 
		iterating over the characters and incrementing the count whenever a 
		non-delimiter character is encountered. It skips over 
		the characters of each word by using nested loops.

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

		This function splits a word from a string s based on the delimiter 
		character c. It initializes variables word and i to store the split 
		word and the current index, respectively. It then enters a loop that 
		continues until the end of the string or the delimiter character 
		is encountered. Inside the loop, it checks if the current character 
		is not equal to the delimiter. If true, it copies the character to 
		the word array and increments i to move to the next character. 
		Once the loop ends, it adds the null terminator to word and 
		returns the split word.

		The function ft_word_splitter takes a string s and a character c as 
		input and returns a dynamically allocated string containing the 
		first word from the input string, delimited by the character c. 
		Here's a breakdown of how the function works:

    	1 - Declare a character pointer word to store the dynamically 
		allocated string.

    	2 - Declare an integer variable i and initialize it to 0. 
		This variable will be used to keep track of the current 
		position in the string.

    	3 - Start a loop that continues until either the end of 
		the string is reached (indicated by the null character '\0') 
		or the delimiter character c is encountered.

    	4 - Inside the loop, increment i to move to the next character 
		in the string.

    	5 - Allocate memory for the word string using malloc. The 
		size of the allocated memory is calculated as (i + 1) to 
		accommodate the characters of the word plus the null 
		character '\0' at the end.

    	6 - Check if the memory allocation was successful. 
		If not, return NULL to indicate an error.

    	7 - Reset i to 0 to start from the beginning of the string.

    	8 - Start another loop that continues until either the end of 
		the string is reached or the delimiter character c is encountered.

    	9 - Inside the loop, assign the current character from s to 
		the corresponding position in word.

    	10 - Increment both i and the pointer word to move to 
		the next character in s and word, respectively.

    	11 - After the loop exits, assign the null character '\0' 
		to the last position in word to terminate the string.

    	12 - Return the dynamically allocated word string.

		In summary, the function ft_word_splitter extracts the first 
		word from a string by iterating over the characters until 
		either the end of the string or the delimiter character is 
		encountered. It dynamically allocates memory for the word, 
		copies the characters from the input string, and returns 
		the resulting word as a dynamically allocated string.

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