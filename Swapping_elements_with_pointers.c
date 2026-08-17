#include <stdio.h>

int main() {
    int a, b, temp;
    int *ptr1, *ptr2;

    printf("Enter the values of a,b:");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    printf("Before swapping elements:\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping elements:\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);

    return 0;
}