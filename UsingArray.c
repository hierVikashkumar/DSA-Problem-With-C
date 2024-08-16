#include <stdio.h>
int main(){
    int r,c; 
    printf("Enterr the number of rows = ");
    scanf("%d",&r);
    printf("Enterr the number of columns = ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i = 0; i<r; i++){
        printf("Enter the element of row no %d : ",i+1);
        for(int j = 0; j<c; j++){
           scanf("%d",&arr[i][j]);
        }
    }
    printf("The sparse matrix is : \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
          if(arr[i][j]!=0){
            printf("\n %d   %d    %d", i,j,arr[i][j]);
          }
        }
        printf("\n");
    }
    return 0;
}
