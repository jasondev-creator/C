#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter the values of a,b:");
    scanf("%d %d", &a, &b);

    printf("Before swapping elements:\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping elements:\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);

    return 0;
}