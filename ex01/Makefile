NAME = PhoneBook
RM = rm -f
SRC 	= PhoneBook.cpp

FILIO = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(FILIO)
		${CPP} ${CPPFLAGS} ${FILIO} -o ${NAME}

clean:
	$(RM) $(FILIO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus