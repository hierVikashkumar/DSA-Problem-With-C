#include <stdio.h>
void towerOfHanoi(int n, char rod_A, char rod_C, char aux_rod){
    if (n == 1) {
        printf("\nMove disk 1 from rod %c to rod %c", rod_A, rod_C);
        return;
    }
    towerOfHanoi(n-1, rod_A, aux_rod, rod_C); 
    printf("\nMove disk %d from rod %c to rod %c", n, rod_A, rod_C); 
    towerOfHanoi(n-1, aux_rod, rod_C, rod_A); 
}
int main(){
    int n; 
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}

