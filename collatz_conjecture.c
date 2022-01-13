#include <stdio.h>

int collatz(int n);

int main(void)
{
    printf("Enter a number to be reduce to 1\n");
    int n;
    scanf("%i", &n);

    printf("Steps: %i", collatz(n));

}

int collatz(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }
    // even case
    else if (n % 2 == 0)
    {
        return 1 + collatz(n/2);
    }
    else 
    // odd case remains
    {
        return 1 + collatz(3*n + 1);
    }
}
