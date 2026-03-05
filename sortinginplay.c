#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) 
{
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
        return mid;

        if (array[mid] < x)
        low = mid + 1;

        else
        high = mid - 1;
    }
    return 0;
}

int main() 
{
    int array[] = {1, 5, 6, 4, 9, 10, 3, 2, 8, 7};
    int x:
     int n = sizeof(array) / sizeof(array[0]);
printf("Enter the number between 1-10 : ");
scanf("%d",&x);
int result = binarySearch(array, x, 0, n - 1);
if (result == -1)
printf("Not found");
else
printf("Element is found at index %d", result);
return 0;
}
