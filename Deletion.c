#include <stdio.h>
int main(){
    int r,c,rowIndex,ColIndex;
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
    printf("Enter the index of row whose you want to delete the element : ");
    scanf("%d",&rowIndex);
    printf("Enter the index of column whose you want to delete the element : ");
    scanf("%d",&ColIndex);
    if(rowIndex>=0 && rowIndex<r && ColIndex>=0 && ColIndex<c){
        for (int i = rowIndex; i < r ; i++) {
            for (int j = 0; j < c; j++) {
                arr[i][j] = arr[i][j+1];
            }
        }
        printf("\n");
        printf("Updated array is \n");
        for(int i=0; i<r;i++){
            for(int j=0; j<c; j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Invalid row or column index number");
    }
   
    return 0;
}
