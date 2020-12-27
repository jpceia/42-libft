INCDIR		= .

SRCS		= \
			  ft_memset.c \
			  ft_bzero.c \
			  ft_memcpy.c \
			  ft_memccpy.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isascii.c \
			  ft_isprint.c \
			  ft_toupper.c \
			  ft_tolower.c \
              ft_calloc.c

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= gcc
AR			= ar rc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -I${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

so:
			${CC} -fPIC $(CFLAGS) -c $(SRCS)
			gcc -shared -o libft.so $(OBJS)

.PHONY:		all clean fclean re so
