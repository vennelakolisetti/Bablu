#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void enqueue(int);
void dequeue();
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
        printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
                case 1: printf("Enter the value to be insert: ");
                                scanf("%d",&value);
                                    enqueue(value);
                                break;
                        case 2: dequeue();
                                break;
                        case 3: display();
                                break;
                        case 4: exit(0);
                        default: printf("\nWrong selection!!! Try again!!!");
        }
        }
}

void enqueue(int value){
        if(rear == SIZE-1) {
        printf("\nQueue is Full!!! Insertion is not possible!!!");
    } else {
        if(front == -1)
                front = 0;
        rear++;
        arr[rear] = value;
        printf("\nInsertion success!!!");
        }
}

void dequeue(){
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

void display(){
        if(rear == -1) {
        printf("\nQueue is Empty!!!");
        } else {
        int i;
        printf("\nQueue elements are:\n");
        for (i = rear; i >= front; i--) {
                        printf("%d\t", arr[i]);
                }
        }
}
