#include <stdio.h>
void ArrayDisplay(int arr[],int n){
    printf("Enter the elements of the array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
}
int partation(int arr[],int low,int high){
    int pivot = arr[low];
    int count = 0;
    for(int i=low+1; i<=high; i++){
        if(arr[i]<=pivot){
            count = count+1;
        }
    }
        int pivotindex = count + low;
        int temp;
        temp = arr[low];
        arr[low] = arr[pivotindex];
        arr[pivotindex] = temp;
        int i = low;
        int j = high;
        while(i<pivotindex && j>pivotindex){
            if(arr[i]<=pivot){
                i=i+1;
            }
            if(arr[j]>pivot){
                j=j+1;
            }
            else if(arr[i]>pivot && arr[j]<=pivot){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        return pivotindex;
}
void Quicksort(int arr[], int low, int high){
    if(low>high)return;
    int pi = partation(arr,low,high);
    Quicksort(arr,low,pi-1);
    Quicksort(arr,pi+1,high);
}
int main()
{
    int n;
    printf("Enter the number of element exist in array : ");
    scanf("%d",&n);
    int arr[n];
    ArrayDisplay(arr,n);
    printf("\n");
    Quicksort(arr,0,n-1);
    printf("After Sorted the array is ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
return 0;
}