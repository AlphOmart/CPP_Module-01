#---COMMON_VAR-----------------------------------
NAME		=	BraiiiiiiinnnzzzZ
CXX			=	c++
FLAGS		=	-std=c++98 -Wall -Werror -Wextra
#---BRAINZ_VAR----------------------------------
SRC			=	main.cpp \
				newZombie.cpp \
				randomChump.cpp \
				Zombie.cpp

OBJS_DIR	=	.OBJS/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
HEADER		=	Zombie.hpp
#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				@echo "\033[0;33m\nCOMPILING BraiiiiiiinnnzzzZ...\n"
				@$(CXX) $(FLAGS) $(OBJS) -o $@
				@echo "\033[1;32m./BraiiiiiiinnnzzzZ created\n"

$(OBJS_DIR)%.o:	%.cpp | dir
				@$(CXX) $(FLAGS) -c $< -o $@

dir:			$(OBJS_DIR)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				@echo "\033[0;31mDeleting BraiiiiiiinnnzzzZ object...\n"
				@$(RM) -rf $(OBJS_DIR)
				@echo "\033[1;32mDone\n"

fclean:			clean
				@echo "\033[0;31mDeleting BraiiiiiiinnnzzzZ executable..."
				@rm -rf $(NAME)
				@echo "\033[1;32mDone\n"

re:				fclean
				$(MAKE) all;

.PHONY:			all clean fclean re