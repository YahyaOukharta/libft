CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

_SRCS = ft_atoi.c ft_isprint.c ft_memset.c ft_strdup.c ft_strnstr.c \
ft_bzero.c ft_itoa.c ft_putchar_fd.c ft_strjoin.c ft_strrchr.c \
ft_calloc.c ft_memccpy.c ft_putendl_fd.c ft_strlcat.c ft_strtrim.c \
ft_isalnum.c ft_memchr.c ft_putnbr_fd.c ft_strlcpy.c ft_substr.c \
ft_isalpha.c ft_memcmp.c ft_putstr_fd.c ft_strlen.c ft_tolower.c \
ft_isascii.c ft_memcpy.c ft_split.c ft_strmapi.c ft_toupper.c \
ft_isdigit.c ft_memmove.c ft_strchr.c ft_strncmp.c

SRCS_DIR = srcs/

SRCS = $(subst ft_,$(SRCS_DIR)ft_,$(_SRCS))

OBJS = $(_SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all