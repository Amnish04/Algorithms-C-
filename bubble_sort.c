#include <stdio.h>


void bub_sort(int arrc, int arr[]);


int main(void)
{
    int arr[] = {9,8,7,6,5,1,2,3,4};
    int arrc = 9;

    bub_sort(arrc, arr);

    for (int i = 0; i < arrc; i++)
    {
        printf("%i, ", arr[i]);
    }
    
}

void bub_sort(int arrc, int arr[])
{
    int counter;
    int j = 0;
    while (counter != 0)
    {
        counter = 0;
        for (int i = 0; i < arrc - j - 1; i++)
        {
            int num1, num2;
            num1 = arr[i];
            num2 = arr[i+1];

            // printf("num1: %i, num2: %i\n", num1, num2);

            if (num1 < num2)
            {
                int holder = num1;
                arr[i] = arr[i+1];
                arr[i+1] = holder;

                counter++;
            }
        }
        j++;
    }   
}
