#include <stdio.h>

int qs(int* list, int low, int high);
void quicksort(int* arr, int low, int high);

int main()
{
    int arr[] = {4,10,8,7,6,5,3,12,14,2};
    int arrc = 10;
    int low, high;
    low = 0;
    high = arrc-1;
    quicksort(arr, low, high);
    for (int i = 0; i < 10; i++)
    {
        printf("%i, ", arr[i]);
    }
    return 0;
}

void displayList(int arrc, int* arr)
{
    for (int i = 0; i < arrc; i++)
    {
        printf("%i, ", arr[i]);
    }
    putchar('\n');
    return;
}

int qs(int* list, int low, int high)
{
    // [4,8,10,7,2,5,3,12,14,6] 
    int pivot = list[high];
    int i = 0, j = 0;
    int hold;
    for (j = 0; j <= high -1; j++)
    {
        if (list[j] < pivot)
        {
            hold = list[i];
            list[i] = list[j];
            list[j] = hold;
            i++;
        }
        // displayList(10, list);
    }
    hold = list[i];
    list[i] = pivot;
    list[high] = hold;
    // displayList(10, list);
    return i;
}

void quicksort(int* arr, int low, int high)
{
    int i;
    if (low < high)
    {
        i = qs(arr, low, high);
        quicksort(arr, low, i-1);
        quicksort(arr, i+1, high);
    }
    return;
}
