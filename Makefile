CC=g++ -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17
NAME=coffee
RM=rm -f
SRCS=main.cpp

$(NAME): $(SRCS)
	$(CC) -o $(NAME) $(SRCS)

clean:
	$(RM) $(NAME)
