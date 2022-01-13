#include <stdio.h>

int fibo(int n);

int main(void)
{
    int n;

    printf("Enter the of elements you require in fibonacci series\n");
    scanf("%i", &n);

    printf("[");
    for (int i = 1; i < n; i++)
    {
        printf("%i", fibo(i));

        if (i < n-1)
            printf(", ");
    }
    printf("]");
}

int fibo(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}
