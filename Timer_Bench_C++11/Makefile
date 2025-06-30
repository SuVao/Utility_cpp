CC = c++
NAME = Timer11
SRC_DIR = src
OBJDIR = obj
ASMDIR = asm
INCDIR = inc

CFLAGS = -Wall -Wextra -Werror -std=c++11 -g -I$(INCDIR)

SRC = $(SRC_DIR)/main.cpp \
      $(SRC_DIR)/Timer.cpp

OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJDIR)/%.o)
ASM = $(SRC:$(SRC_DIR)/%.cpp=$(ASMDIR)/%.s)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo Done!

ass: $(ASMDIR) $(ASM)
	@echo Done!

$(OBJDIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo Compiling C++...

$(ASMDIR)/%.s: $(SRC_DIR)/%.cpp | $(ASMDIR)
	@$(CC) -S -O2 $(CFLAGS) $< -o $@
	@echo Compiling Assembely...
$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(ASMDIR):
	@mkdir -p $(ASMDIR)

clean:
	@rm -rf $(OBJDIR)
	@echo Cleaning...
fclean: clean
	@rm -rf $(NAME) $(ASMDIR)
	@echo Fcleaning...
re: fclean all

.PHONY: all clean fclean re ass