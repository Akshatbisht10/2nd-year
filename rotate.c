#include <stdio.h>
void reverse(int arr[], int s, int e)
{
    int temp;
    int l=(s+e+1);
    for (int i = s; i < l / 2; i++)
    {
        temp=arr[i];
        arr[i] = arr[l-i-1];
        arr[l-i-1] = temp;
    }
};

void rotate(int arr[], int r, int n)
{
    reverse(arr, 0, n);
    reverse(arr, 0, n-r);
    reverse(arr, n-r, n);
}

void main()
{
    int n,r;
    printf("enter the no of terms:-");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n ;i++)
    {
        arr[i]=i+1;
    }
 
    printf("enter the no of rotation:- ");
    scanf("%d",&r);
    
    if(r>=n)
    {
        r=r%n;
    }
    
    rotate(arr, r, n);
    
    printf("the rotated array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
