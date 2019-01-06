INC = Include
OBJS = main.o factorial.o print.o
CC = clang++
CFLAGS = -std=c++14 -O2 -Wall -I $(INC)

git : $(OBJS)
	$(CC) -o git $(OBJS)

main.o: main.cpp
	$(CC) -c main.cpp $(CFLAGS)

factorial.o: factorial.cpp
	$(CC) -c factorial.cpp $(CFLAGS)

print.o: print.cpp
	$(CC) -c print.cpp $(CFLAGS)

.PHONY : clean
clean :
	rm git $(OBJS)