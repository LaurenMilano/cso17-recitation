#include <stdio.h>
#include <stdlib.h>

int orig_func(int v)
{
    return v + 4;
}

int main(int argc, char **argv)
{
    int (*func)(int);

    // Do not modify this line.
    printf("%d\n", func(1));
}
