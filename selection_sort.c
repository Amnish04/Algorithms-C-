#include <stdio.h>

void sel_sort(int arcc, int arr[]);


int main()
{
    int arr[] = {6,2,4,5,3,1,8,1,1,5,4};   
    int arrc = 11;

    sel_sort(arrc, arr);

    printf("[");

    for (int i = 0; i < arrc; i++)
    {
        printf("%i", arr[i]);

        if (i < arrc - 1)
        {
            printf(", ");
        }
    }

    printf("]");

    return 0;
}
  
void sel_sort(int arrc, int arr[])
{
    int min;
    for (int i = 0; i < arrc; i++)
    {
        min = i;
        for (int j = i; j < arrc ; j++)
        {
            // printf("%i\n", j);
            if (arr[j] < arr[min])    
            {
                min = j;
            }
        } 
        // printf("minimum: %i\n", arr[min]);
        
        int hold = arr[i];
        arr[i] = arr[min];
        arr[min] = hold;   
    }
}
