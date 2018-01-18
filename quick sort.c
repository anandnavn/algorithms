#include<stdio.h>
void swap(int* a,int* b)
{
int t=*a;
*a=*b;
*b=t;
}
int partition(int arr[],int low,int high)
{
int pivot=arr[high];
int i=(low-1);
for(int j=low;j<=high-1;j++)
{
    if(arr[j]<=pivot)
    {
        i++;
        swap(&arr[i],&arr[j]);
    }
}
swap(&arr[i+1],&arr[high]);
return (i+1);
}
void quicksort(int arr[],int low,int high)
{
if(low<high)
    {
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
void printarray(int arr[],int size)
{
int i;
for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    printf("\n the minimum and the maximum element of the sorted list is");
    printf("\n %d%d",arr[0],arr[size-1]);
}
int main()
{
    int arr[]={10,7,8,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    printf("sorted array:");
    printarray(arr,n);
    return 0;
}


