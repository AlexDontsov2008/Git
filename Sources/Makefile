INC = Include
OBJS = main.o factorial.o print.o multiply.o summ.o
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

multiply.o: multiply.cpp
	$(CC) -c multiply.cpp $(CFLAGS)

summ.o: summ.cpp
	$(CC) -c summ.cpp $(CFLAGS)

.PHONY : clean
clean :
	rm git $(OBJS)