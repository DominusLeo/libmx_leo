NAME = libmx.a

SRC_DIR = src

OBJ_DIR = obj

INC_DIR = inc

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC_FILES:%.c=%.o)))

INC_FILES = $(wildcard $(INC_DIR)/*.h)

CC = clang

C_FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

AR = ar

AR_FLAGS = rcs

MKDIR = mkdir -p

RM = rm -rf

DFLAGS = -fsanitize=address -g

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(AR) $(AR_FLAGS) $@ $^

$(OBJ_FILES): | $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_FILES)
	@$(CC) $(C_FLAGS) -c $< -o $@ -I $(INC_DIR)

$(OBJ_DIR):
	@$(MKDIR) $@

uninstall: clean
	@$(RM) $(NAME)

clean:
	@$(RM) $(OBJ_DIR) a.out

debug:
	@cp $(SRC_FILES) .
	@cp $(INC_FILES) src
	@clang $(C_FLAGS) $(DFLAGS) -o $(NAME) $(SRC_FILES)

reinstall: uninstall all

start: all
	@$(CC) $(C_FLAGS) -I $(INC_DIR) tmain.c $(NAME); $(RM) a.out.dSYM/; ./a.out

.PHONY: all uninstall clean reinstall