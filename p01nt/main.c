#include <stdio.h>

int main() {
    int a;
    int *p;
    a = 9;
    p = &a; // address of a

    printf("%d\n", p);
    printf("%d\n", *p); // value of a
    printf("%d\n", &a);

    *p = 12; // derefencing
    printf("%d\n", a);
    return 0;
}