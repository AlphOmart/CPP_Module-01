#---COMMON_VAR-----------------------------------
NAME		=	hi_this_is_brain
CXX			=	c++
FLAGS		=	-std=c++98 -Wall -Werror -Wextra -fsanitize=address
#---PHILO_VAR----------------------------------
SRC			=	main.cpp

OBJS_DIR	=	.OBJS/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
HEADER		=	Zombie.hpp
#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS)
				@echo "\033[0;33m\nCOMPILING hi_this_is_brain...\n"
				@$(CXX) $(FLAGS) $(OBJS) -o $@
				@echo "\033[1;32m./hi_this_is_brain created\n"

$(OBJS_DIR)%.o:	%.cpp | dir
				@$(CXX) $(FLAGS) -c $< -o $@

dir:			$(OBJS_DIR)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				@echo "\033[0;31mDeleting hi_this_is_brain object...\n"
				@$(RM) -rf $(OBJS_DIR)
				@echo "\033[1;32mDone\n"

fclean:			clean
				@echo "\033[0;31mDeleting hi_this_is_brain executable..."
				@rm -rf $(NAME)
				@echo "\033[1;32mDone\n"

re:				fclean all

.PHONY:			all clean fclean re