OBJECTS = main.o factorial.o print.o
CC = clang++

git : $(OBJECTS)
	$(CC) -o git $(OBJECTS)

$(OBJECTS) : functions.h

.PHONY : clean
clean :
	rm git $(OBJECTS)