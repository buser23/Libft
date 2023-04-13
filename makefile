NAME = libft.a
SRC = ft_isalpha.c
OBJS = ${SRC:.c=.o}
HEADER = libft.h
INCLUDE = -I .
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
AR = ar -rc

.c.o:   
	${CC} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o} 

$(NAME): ${OBJS} 
	ar rcs ${NAME} ${OBJS} ${HEADER}

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

tclean: clean
	${RM} teste

re: fclean all

teste:
	${CC} ${FLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean re