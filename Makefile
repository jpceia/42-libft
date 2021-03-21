NAME		= libft.a

SRCS		= \
			ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memccpy \
			ft_memmove \
			ft_memchr \
			ft_memcmp \
			ft_strlen \
			ft_strlcat \
			ft_strlcpy \
			ft_strchr \
			ft_strrchr \
			ft_strnstr \
			ft_strncmp \
			ft_atoi \
			ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_toupper \
			ft_tolower \
			ft_calloc \
			ft_strdup \
			ft_substr \
			ft_strmapi \
			ft_strjoin \
			ft_strtrim \
			ft_split \
			ft_itoa \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd

BONUS_SRCS	= \
			ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap

OBJS		= $(SRCS:=.o)
BONUS_OBJS	= $(BONUS_SRCS:=.o)

CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -I.

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
			$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:		all clean fclean re bonus
