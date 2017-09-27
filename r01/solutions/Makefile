FOO_OBJS = foo.o main.o

foo : $(FOO_OBJS)
	gcc $^ -o $@

%.o: %.c
	gcc -g -c $^

clean :
	rm $(FOO_OBJS) foo
