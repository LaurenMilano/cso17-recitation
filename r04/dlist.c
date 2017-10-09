#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"

// Prepend a value in front of the double list.
int dlist_prepend(struct dlist** headp, struct dlist** endp, int value)
{
    // Error handling.
    if (headp == NULL || endp == NULL) {
        return 0;
    }

    if (*headp == NULL) {
        // The list is empty.
        assert (*endp == NULL);
        *headp = (struct dlist*) malloc(sizeof(struct dlist));
        (*headp)->value = value;
        (*headp)->prev = NULL;
        (*headp)->next = NULL;
        *endp = *headp;
    } else {
        // Add your code here.
    }
    return 1;
}

// Append a value in the end of the double list.
int dlist_append(struct dlist** headp, struct dlist** endp, int value)
{
    // Error handling.
    if (headp == NULL || endp == NULL) {
        return 0;
    }

    if (*headp == NULL) {
        // The list is empty.
        assert (*endp == NULL);
        *headp = (struct dlist*) malloc(sizeof(struct dlist));
        (*headp)->value = value;
        (*headp)->prev = NULL;
        (*headp)->next = NULL;
        *endp = *headp;
    } else {
        // Add your code here.
    }
    return 0;
}

#if 0
// Only for test purpose. You don't have to add anything to this main.
// But if you want to test your implementation, change #if 0 to #if 1.
// And use this main to debug.
// Before submitting, remember to change #if 1 back to #if 0. Otherwise,
// you'll get 0 credit.
int main(int argc, char **argv)
{
    // Your own tests.
}
#endif
