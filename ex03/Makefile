#---COMMON_VAR-----------------------------------
NAME		=	unnecessary_violence
CXX			=	c++
FLAGS		=	-std=c++98 -Wall -Werror -Wextra
SRC			=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp

OBJS_DIR	=	.OBJS/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
HEADER		=	HumanA.hpp \
				HumanB.hpp \
				Weapon.hpp
#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				@echo "\033[0;33m\nCOMPILING unnecessary_violence ...\n"
				@$(CXX) $(FLAGS) $(OBJS) -o $@
				@echo "\033[1;32m./unnecessary_violence created\n"

$(OBJS_DIR)%.o:	%.cpp | dir
				@$(CXX) $(FLAGS) -c $< -o $@

dir:			$(OBJS_DIR)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				@echo "\033[0;31mDeleting unnecessary_violence object...\n"
				@$(RM) -rf $(OBJS_DIR)
				@echo "\033[1;32mDone\n"

fclean:			clean
				@echo "\033[0;31mDeleting unnecessary_violence executable..."
				@rm -rf $(NAME)
				@echo "\033[1;32mDone\n"

re:				fclean
				$(MAKE) all

.PHONY:			all clean fclean re