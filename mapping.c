#include <stdio.h>
#include <string.h>

void print_str(char str[]);
int int_len(int n);
long long power(int n, int j);
int int_index(int n, int i);
void int_to_text(int n, char mapping[][100]);

int main(void)
{
    char map[][100] = {"Zero","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    

    int number = 123456789;
    // printf("Enter a number to be changed to text digits: ");
    // scanf("%i", number);
    // Something's wrong when I try to take input!!!

    int_to_text(number, map);    
    
}

void print_str(char str[])
{
    for (int i = 0, j = strlen(str); i < j; i++)
    {
        printf("%c", str[i]);
    }   
    return;
}

int int_len(int n)
{
    int len = 0;
    while (n > 0)
    {
        n /= 10;
        len++; 
    }
    return len;
}

long long power(int n, int j)
{
    int num = 1;
    for (int i = 0; i < j; i++)
    {
        num *= n;
    }
    return num;
    
}

int int_index(int n, int i)
{
    n /= power(10, int_len(n) - i - 1);
    return n % 10;
}

void int_to_text(int n, char mapping[][100])
{
    for (int i = 0; i < int_len(n); i++)
    {
        print_str(mapping[int_index(n, i)]);
        printf(" ");
    }
}
