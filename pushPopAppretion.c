#include <stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE]; 
int top = -1; 
void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow: Cannot push element onto a full stack.\n");
    } else {
        top++; 
        stack[top] = item; 
    }
}
int pop() {
    if (top == -1) {
        printf("Stack Underflow: Cannot pop element from an empty stack.\n");
        return -1; 
    } else {
        int item = stack[top]; 
        top--; 
        return item; 
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    printf("Elements Pushed in the stack : ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
    printf("Elements Popped from the Stack : ");
    while (top != -1) {
        int popped = pop();
        printf("%d ", popped);
    }
    return 0;
}