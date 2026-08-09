#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, prime;

    clrscr();

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    prime = 1;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if(prime == 1)
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }

    getch();
    return 0;
}