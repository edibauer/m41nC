#include <stdio.h>

int main() {
    int a = 9;
    int *p = &a;

    // pointer arithmetic
    printf("Address p is:  %d\n", p); // p= 2002
    printf("SIze of integer is %d bytes\n", sizeof(int));
    printf("Address p is now %d bytes\n", p+2); // p?2004

    return 0;
}