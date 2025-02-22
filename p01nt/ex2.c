#include <stdio.h>

int main() {
    int a = 9;
    int *p = &a;

    printf("%d\n", p);
    printf("%d\n", *p);

    *p = 15;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", a);

    return 0;
}