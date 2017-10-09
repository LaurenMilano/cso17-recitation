#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// gcc e4.c -g -o  e4
// $./e4 1
// $./e4 2
// $./e4 0.75

void printb(void *p);

int main(int argc, char **argv) 
{
    int is_int = (strstr(argv[1], ".") == NULL);
    if (is_int) {
        int v = atoi(argv[1]);
        printb((void*)&v);
    } else {
        float v = atof(argv[1]);
        printb((void*)&v);
    }
}

void printb(void* p)
{
    // FIXME: Complete this function so that it will print out the binary 
    //        representation (preceded by "0b") of the content point by ptr.
    //        After you finish it, please test it. Some examples:
    //        $./e4 1
    //        0b00000000000000000000000000000010 or 0b10
    //        $./e4 2
    //        0b00000000000000000000000000000001 or 0b1
    //        $./e4 0.75
    //        0b00111111010000000000000000000000 or 0b111111010000000000000000000000


    // Leading characters.
    printf("0b");
    unsigned val = *((unsigned *)p);

#define WITHOUT_LEADING_ZEROS
#ifdef WITHOUT_LEADING_ZEROS
    unsigned msb = 1;
    unsigned msb_pos = 0;
    while (msb < val) {
        msb <<= 1;
        msb_pos += 1;
    }
    if (msb > val) {
        msb >>= 1;
        msb_pos -= 1;
    }
    while (msb != 0) {
        printf("%u", (val & msb) >> msb_pos);
        msb >>= 1;
        msb_pos -= 1;
    }
#else
    unsigned msb = 2147483648;
    unsigned msb_pos = 31;
    while (msb != 0) {
        printf("%u", (val & msb) >> msb_pos);
        msb >>= 1;
        msb_pos -= 1;
    }
#endif
    printf("\n");
}
