#include <stdio.h>

int main()
{
    int a[100], n, i, j, d;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
    {
        d = 0;

        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                d = 1;
                break;
            }
        }

        if(d == 0)
            printf("%d ", a[i]);
    }

    return 0;
}