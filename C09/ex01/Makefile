# Variables
CC = cc -Wall -Wextra -Werror
SRC_DIR = srcs
INC_DIR = includes
SRCS = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
LIB = libft.a

# Targets
all: $(LIB)

$(LIB): $(OBJS)
	echo "Creating library $(LIB)"
	ar rcs $(LIB) $(OBJS)

clean:
	echo "Cleaning object files"
	rm -f $(OBJS)

fclean: clean
	echo "Removing library $(LIB)"
	rm -f $(LIB)

re: fclean all

# Compile object files
%.o: %.c
	echo "Compiling $< into $@"
	$(CC) -I$(INC_DIR) -c $< -o $@
