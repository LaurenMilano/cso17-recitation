#include <stdio.h>

int main(int argc, char **argv) 
{

    int array[] = {73192, 21982, 13183, 819378, 49817234, 495672, 23819};

    /* FIXME: Please replace following '0's with some other values so that
     *        The final printf will print out 1.
     */
    int a = (array[3] == 819378);
    int b = (*(array + 4) == 49817234);
    // Never write this format in a project unless you want to be fired...
    int c = (5[array] == 495672); 

    printf("%d", a * b * c);
}
