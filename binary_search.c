#include <stdio.h>

int b_search(int arrc, int arrv[], int num);

int main(void)
{
    int arr[] = {1,3,5,8,54,55,100}; 

    int num = 55;

    if (b_search(7, arr, num) == 1)
    {
        printf("%i Found", num);
    }  
    else
    {
        printf("%i Not Found", num);
    }

}
int b_search(int arrc, int arrv[], int num)
{
    int i = 0;
    int j = arrc;

    int pres(void)
    {
        if (i > j)
        {
            // printf("Not Found\n");
            return 0;
        }
        if (arrv[(i+j)/2] == num)
        {
            // printf("Found\n");
            return 1;
        }
        else if (num > arrv[(i+j)/2])
        {
            i = (i+j)/2 + 1;
            pres();
        }
        else if (num < arrv[(i+j)/2])
        {
            j = (i+j)/2 - 1;
            pres();
        }
    }
    return pres();
}
