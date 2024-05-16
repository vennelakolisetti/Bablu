#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void push(int);
void pop();
void display();

int top = -1;
int stack[SIZE];

void main()
{
    int value, choice;
    while(1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter the value to be insert: ");
                    scanf("%d",&value);
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("\nWrong selection!!! Try again!!!");
        }
    }
}

void push(int value){
        if(top == SIZE-1)
        printf("\nStack is Full!!! Insertion is not possible!!!");
        else {
        top++;
        stack[top] = value;
        printf("\nInsertion success!!!\n");
    }
}

void pop(){
        int arr[SIZE];
        int i, j;
        if(top == -1)
        printf("\nStack is Empty!!! Deletion is not possible!!!");
        else {
                j = top;
                for (i = 0; i <= top; i++) {
                        arr[i] = stack[j];
                        j--;
                }
        printf("\nDeleted : %d\n", arr[top]);
        top--;
                j = top;
                for (i = 0; i <= top; i++) {
                        stack[i] = arr[j];
                        j--;
                }
        }
}

void display(){
        if(top == -1)
        printf("\nStack is Empty!!!");
        else {
        int i;
        printf("\nStack elements are:\n");
        for(i = top; i >= 0; i--) {
                printf("%d\n",stack[i]);
                }
   }
}
