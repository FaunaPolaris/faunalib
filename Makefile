NAME		= only_for_my_eyes

CC			= gcc
C_FLAGS		= -Wall -Wextra -Werror

SOURCES		= sources/init_map.c

INCLUDE		= -I./headers

MAIN		= main.c

all: $(NAME)

$(NAME):
	$(CC) $(C_FLAGS) $(MAIN) $(SOURCES) $(INCLUDE) -o $@

clear:
	rm -rf $(NAME)

.PHONY: all clear
