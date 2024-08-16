#include <stdio.h>
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    int e;
    printf("Enter the number of the size of array : ");
    scanf("%d",&e);
    int arr[e]; 
    for(int i=0; i<e; i++){
        int ElementNo = i+1;
        printf("Enter the element number %d = ",ElementNo);
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Search the number is : ");
    scanf("%d",&target);
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, target);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}
