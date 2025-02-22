#include <stdio.h>

int main() {
    int a = 1025;
    int *p = &a;

    printf("Size of integer is %d bytes \n", sizeof(int));
    printf("Address = %d, Value = %d\n", p, *p);
    printf("Address = %d, Value = %d\n", p+1, *(p+1));

    char *p0 = (char*)p; // typecasting
    printf("Size of integer is %d bytes \n", sizeof(char));
    printf("Address = %d, Value = %d\n", p0, *p0); // 1
    printf("Address = %d, Value = %d\n", p0+1, *(p0+1)); // 4

    // 1025 = 00000000 00000000 00000100 00000001
    //                              4           1

    return 0;
}