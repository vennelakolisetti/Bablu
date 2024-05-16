#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void push(int);
void pop();
void top();
void display();

int arr[SIZE];
int front = -1;
int rear = -1;

void main()
{
    int value;
    int choice;
    while(1) {
        printf("\n\nQueue Operations: \n");
        printf("1. Insertion\n2. Deletion\n3. Top\n4. Display\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
                case 1: printf("Enter the value to be insert: ");
                        scanf("%d",&value);
                        push(value);
                        break;
                case 2: pop();
                        break;
                case 3: top();
                        break;
                                case 4: display();
                                                break;
                case 5: exit(0);
                default: printf("\nWrong selection!!! Try again!!!");
         }
     }
}

void push(int value){
    if(rear == SIZE - 1) {
        printf("\nQueue is Full!!! Insertion is not possible!!!");
    } else {
        if(front == -1)
            front = 0;
        rear++;
        arr[rear] = value;
                if (rear > 0) {
                        for (int i = front; i < rear; i++) {
                                arr[rear + 1] = arr[front];
                                for (int j = front; j < rear + 1; j++) {
                                        arr[j] = arr[j + 1];
                                }
                        }
                }
        printf("\nInsertion success!!!");
    }
}

void pop(){
    if(rear == -1) {
        printf("\nQueue is Empty!!! Deletion is not possible!!!");
    } else {
            printf("\nDeleted : %d", arr[front]);
        front++;
        if(front > rear) {
                 front = rear = -1;
        }
    }
}

void top() {
    if(rear == -1) {
        printf("\nQueue is Empty!!! Deletion is not possible!!!");
    } else {
                printf("Top element is: %d", arr[front]);
        }
}

void display(){
    if(rear == -1) {
        printf("\nQueue is Empty!!!");
    } else {
        int i;
        printf("\nQueue elements are:\n");
        for(i=front; i<=rear; i++) {
            printf("%d\t", arr[i]);
        }
    }
}