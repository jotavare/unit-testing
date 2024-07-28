# colors
RESET = \033[0m
RED = \033[31m
GREEN = \033[32m

# main
CXX = c++
NAME = hasPair
RM = rm -f

# flags
CXXFLAGS = -Wall -Wextra -Werror -g -pedantic

# sources
SRCS = hasPair.cpp

# objects
OBJS = $(SRCS:.cpp=.o)

# rules
all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)...linked $(NAME) successfully...$(RESET)"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "$(GREEN)...compiled $< successfully...$(RESET)"

clean:
	@$(RM) $(OBJS)
	@echo "$(RED)...cleaning $(NAME) object files...$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)...cleaning $(NAME) output and objects files...$(RESET)"

re: fclean all