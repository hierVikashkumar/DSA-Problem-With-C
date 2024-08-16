#include <stdio.h>
int main(){
    int cRow;
    printf("Enter the capacity of the row : ");
    scanf("%d",&cRow);
    int cCol;
    printf("Enter the capacity of the column : ");
    scanf("%d",&cCol);
    int arr[cRow][cCol];
    int sizeRow;
    printf("Enter the number of element exist in row : ");
    scanf("%d",&sizeRow);
    int sizeCol;
    printf("Enter the number of element exist in column : ");
    scanf("%d",&sizeCol);
    for(int i=0; i<sizeRow; i++){
        printf("Enter the element of row no %d : ",i+1);
        for(int j = 0; j<sizeCol; j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int element;
    printf("Enter the that number you want to insert in array : ");
    scanf("%d",&element);
    int indexRow;
    printf("Enter the that index number of row where you want to insert the element in array : ");
    scanf("%d",&indexRow);
    int indexCol;
    printf("Enter the that index number of column where you want to insert the element in array : ");
    scanf("%d",&indexCol);
    if(indexRow>=sizeRow && indexCol>=sizeCol){
        printf("insertion not possible");
    }
    else {
        for(int i = sizeRow-1; i>=indexRow; i--){
            for(int j = sizeCol-1; j>=indexCol; j--){
            arr[i][j+1] = arr[i][j];
            }
        arr[indexRow][indexCol] = element;
        }
        for(int i = 0; i<sizeRow; i++){
            for(int j = 0; j<sizeCol; j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
