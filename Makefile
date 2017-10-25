NAME	= fractol

SRC		= src/main.c \
		  src/init.c \
		  src/key.c \
		  src/check_data.c \
		  src/mouse_events.c \
		  src/color.c \
		  src/burningship.c \
		  src/julia.c \
		  src/mandelbrot.c \
		  src/rose.c \
		  src/triplemdb.c \
		  src/support_func.c \
		  src/threads.c \

OBJ		= $(patsubst src/%.c,obj/%.o,$(SRC))
.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	gcc -Wall -Wextra -Werror -L libft/ -lft -L/usr/local/lib -lmlx -framework OpenGL -framework AppKit $(SRC) -o $(NAME)
	printf '\033[32m[ ✔ ] %s\n\033[0m' "Create Fractol"

obj/%.o: src/%.c
	mkdir -p obj
	gcc -Wall -Wextra -Werror -c $< -o $@
	printf '\033[0m[ ✔ ] %s\n\033[0m' "$<"

clean:
	/bin/rm -rf obj/
	make -C libft/ clean
	printf '\033[31m[ ✔ ] %s\n\033[0m' "Clean Libprintf"

fclean: clean
	/bin/rm -f $(NAME)
	make -C libft/ fclean
	printf '\033[31m[ ✔ ] %s\n\033[0m' "Fclean Libprintf"

re: fclean all

all: $(NAME)
.PHONY: clean fclean re all
