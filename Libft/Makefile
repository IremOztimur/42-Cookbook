SRCS= ft_toupper.c \
		ft_tolower.c \
		ft_isalpha.c \
		ft_strlen.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_bzero.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_memchr.c \
		ft_atoi.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_itoa.c \
		ft_split.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

SRC_BNS= ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstmap.c \
		ft_lstiter.c

CC = gcc
MAIN  = main.c
NAME = libft.a
OUT = ./a.out
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -fr
AR = ar -rc
OBJS = $(SRCS:.c=.o)
OBJS_BNS = $(SRC_BNS:.c=.o)

all: ${NAME}

${NAME}: ${OBJS}
	@${AR} ${NAME} ${OBJS}
	@echo "Succesfully archieved"

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

run: ${NAME}
	@${CC} ${CFLAGS} ${MAIN} ${NAME}
	@${OUT}

bonus: ${OBJS} ${OBJS_BNS}
	@${AR} ${NAME} ${OBJS} ${OBJS_BNS}

clean:
	@${RM} ${OBJS} ${OBJS_BNS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: fclean clean all
