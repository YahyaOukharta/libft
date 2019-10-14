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

_SRCS_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c \
ft_lstsize_bonus.c

SRCS_DIR = srcs/

SRCS = $(subst ft_,$(SRCS_DIR)ft_,$(_SRCS))

SRCS_BONUS = $(subst ft_,$(SRCS_DIR)ft_,$(_SRCS_BONUS))

OBJS = $(_SRCS:.c=.o)

OBJS_BONUS = $(_SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: re
	$(CC) $(CFLAGS) -c $(SRCS_BONUS)
	ar -rsv $(NAME) $(OBJS_BONUS)
