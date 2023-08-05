#include <stdio.h>
void reverse(int arr[], int s, int e)
{
    int temp;
    for (int i = s; i < e / 2; i++)
    {
        arr[i] = temp;
        arr[i] = arr[e-i-1];
        arr[e-i-1] = temp;
    }
};

void rotate(int arr[], int r)
{
    reverse(arr, 0, 6);
    reverse(arr, 0, 6-r);
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int r;
    printf("enter the no of terms to enter:- ");
    scanf("%d", r);
    rotate(arr, r);
    printf("the rotated array is \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    
}