SRCDIR = srcs/
OBJDIR = obj/
SRC	= ft_arr_dup.c      ft_exit_gracefully.c  ft_normalize.c      ft_push_two.c \
ft_strlen.c ft_atoi.c         ft_get_size.c         ft_normalize_tab.c  ft_putstr.c \
ft_transfer_ab.c ft_break_argv.c   ft_get_stack.c        ft_push_ab.c       \
ft_rotate_down.c   ft_transfer_ba.c ft_check_argv.c   ft_init_stacks.c      \
ft_push_five.c      ft_rotate_up.c     main.c ft_check_dupes.c  ft_is_chars.c \
ft_push_four.c      ft_skip_word.c ft_check_error.c  ft_is_sorted.c        ft_push_swap.c  \
ft_sort_int_tab.c ft_count_words.c  ft_isspace.c          ft_push_three.c     ft_start_ps.c


FLAGS =  -Wall -Wextra -Werror
HEADER = includes
NAME = push_swap

OBJ = $(SRC:%.c=$(OBJDIR)%.o)


all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(FLAGS) $(OBJ) -o $(NAME)
	@echo "Launch the program with: ./$(NAME)"

$(OBJDIR)%.o:$(SRCDIR)%.c
	@mkdir -p $(dir $@)
	@gcc -c $< -o $@ $(FLAGS) -I $(HEADER)



clean:
	@if [ "$(wildcard $(OBJ))" ]; then\
		echo "Cleaning objects";\
		/bin/rm -f $(OBJ);\
	else\
		echo "Nothing to be done for clean.";\
	fi
	@if [ -d "$(OBJDIR)" ]; then\
		echo "Cleaning object directory";\
		/bin/rm -rf $(OBJDIR);\
	else\
		echo "Missing object directory.";\
	fi

fclean: clean
	@if [ "$(wildcard $(addprefix ./, $(NAME)))" ]; then\
		echo "Cleaning executable";\
		/bin/rm -f $(NAME);\
	else\
		echo "Missing executabe";\
	fi

re: fclean all

.PHONY: all clean fclean re
