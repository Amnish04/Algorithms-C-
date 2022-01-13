#include <stdio.h>


void merge(int A[], int low, int mid, int high);
void merge_sort(int A[], int low, int high);

int main(void)
{
    // int arr[] = {9,8,7,6,5,4,3,2,1};
    int arr[] = {4,2,1,4,9};
    int arrc = 5;

    merge_sort(arr, 0, 4);

    for (int i = 0; i < arrc; i++)
    {
        printf("%i\n", arr[i]);
    }
}



void merge(int A[], int low, int mid, int high)
{
    int B[high + 1];
    int i, j, k;
    i = k = low;
    j = mid + 1;


    while ((i <= mid) && (j <= high))
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void merge_sort(int A[], int low, int high)
{
    int mid = (low + high) / 2;
    if (low <high)
    {
        merge_sort(A, low, mid);
        merge_sort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}
