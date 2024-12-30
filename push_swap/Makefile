NAME = push_swap
BONUS_NAME = checker

CC = gcc
CFLAGS = -g -Wall -Werror -Wextra
RM = rm -rf
LIB = ./lib/lib.a

SRCS  = ./src/mandatory/push_swap.c \
		./src/control/error.c \
		./src/control/ft_check_input.c \
		./src/operations/push.c \
		./src/operations/refactor.c \
		./src/operations/rev_rotate.c \
		./src/operations/rotate.c \
		./src/operations/swap.c \
		./src/sorting/rotate_type_a_to_b.c \
		./src/sorting/rotate_type_b_to_a.c \
		./src/sorting/do_rotate_a_to_b.c \
		./src/sorting/do_rotate_b_to_a.c \
		./src/sorting/ft_sort_small.c \
		./src/sorting/is_sorted.c \
		./src/sorting/ft_sort_big.c \
		./src/utils/index_utils.c \
		./src/utils/sort_utils.c \
		./src/utils/stack_utils.c \
		./src/utils/stack_utils_2.c \
		./src/utils/visualize.c

BONUS_SRCS  = 	./src/bonus/push_swap_bonus.c \
				./src/control/error.c \
				./src/control/ft_check_input.c \
				./src/operations/refactor.c \
				./src/operations_checker/push_checker.c \
				./src/operations_checker/rev_rotate_checker.c \
				./src/operations_checker/rotate_checker.c \
				./src/operations_checker/swap_checker.c \
				./src/sorting/is_sorted.c \
				./src/utils/index_utils.c \
				./src/utils/sort_utils_bonus.c \
				./src/utils/stack_utils.c \
				./src/utils/stack_utils_2.c \
				./src/utils/visualize.c

all: $(NAME)

$(NAME): $(LIB)
	@$(CC) $(CFLAGS) $(SRCS) $(LIB) -o $(NAME)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(LIB)
	@$(CC) $(CFLAGS) $(BONUS_SRCS) $(LIB) -o $(BONUS_NAME)

$(LIB):
	@make -C ./lib

clean:
	@$(RM) checker.dSYM
	@$(RM) push_swap.dSYM
	@make clean -C ./lib

fclean:	clean
	@$(RM) $(NAME)
	@$(RM) $(BONUS_NAME)
	@make fclean -C ./lib

re: fclean all

.PHONY:  all clean fclean re lib
