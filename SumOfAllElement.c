#include <stdio.h>
int main(){
    int Sum=0;
    int r;
    printf("Enter the number of element in row : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of element in column : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        printf("Enter the element of row no %d :",i+1);
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            Sum = (Sum + arr[i][j]);
        }
    } 
    printf("sum of the total element is : %d ",Sum);
    return 0;
}
