#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the number of row : ");
    scanf("%d",&r);
    printf("Enter the number of column : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i = 0; i<r; i++){
        printf("Enter the element of row number %d : ",i+1);
        for(int j = 0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("The array is : ");
    printf("\n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
