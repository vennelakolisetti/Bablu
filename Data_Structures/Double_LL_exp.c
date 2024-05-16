#include <stdio.h>
#include <stdlib.h>
#include<stdio_ext.h>

void create(int data, char ch);
void insert(int data, char ch, int pos);
void delete(int pos);
void reverse();
void display();

struct node {
        int num;
        char alpha;
        struct node *next;
        struct node *prev;
}*start;

int main()
{
        int choice;
        int n;
        int i;
        int data;
        char ch;
        int pos;
        while(1) {
                printf("\nEnter the choice\n 1. Create\n 2. Insert\n 3. Delete\n 4. Reverse\n 5. Display\n 6. Exit\n");
                scanf("%d", &choice);
                switch (choice) {
                        case 1:
                                start = NULL;
                                printf("Enter the number of data: ");
                                scanf("%d", &n);
                                for (i = 0; i < n; i++) {
                                        printf("\nEnter the num: ");
                                        scanf("%d", &data);
                                        __fpurge(stdin);
                                        printf("Enter the alphabet: ");
                                        scanf("%c", &ch);
                                        create(data, ch);
                                }
                                break;
                        case 2:
                                printf("Enter the pos: ");
                                scanf("%d", &pos);
                                printf("Enter the num: ");
                                scanf("%d", &data);
                                __fpurge(stdin);
                                printf("Enter the alphabet: ");
                                scanf("%c", &ch);
                                insert(data, ch, pos);
                                break;
                        case 3:
                                printf("Enter the pos: ");
                                scanf("%d", &pos);
                                delete(pos);
                                break;
                        case 4:
                                reverse();
                                break;
                        case 5:
                                display();
                                break;
                        case 6:
                                exit(1);
                                break;
                        default:
                                printf("Enter the right choice\n");
                }
        }
}

void create(int data, char ch)
{
        struct node *tmp;
        struct node *q;
        tmp = (struct node*) malloc (sizeof(struct node));
        tmp->num = data;
        tmp->alpha = ch;
        tmp->next = NULL;
        if (start == NULL) {
                start = tmp;
                tmp->prev = NULL;
        } else {
                q = start;
                while (q->next != NULL) {
                        q = q->next;
                }
                q->next = tmp;
                tmp->prev = q;
        }
}

void insert(int data, char ch, int pos) {
        struct node *tmp;
        struct node *q;
        int i = 1;
        tmp = (struct node*) malloc (sizeof(struct node));
        tmp->num = data;
        tmp->alpha = ch;
        if (i == pos) {
                tmp->prev = NULL;
                tmp->next = start;
                start->prev = tmp;
                start = tmp;
        } else {
                q = start;
                while (i != (pos - 1)) {
                        q = q->next;
                        if ( q == NULL) {
                                printf("less nodes");
                                break;
                        }
                        i++;
                }
                tmp->next = q->next;
                tmp->prev = q;
                if (q->next != NULL) {
                        q->next->prev = tmp;
                }
                q->next = tmp;
        }
}

void delete(int pos) {
        struct node *q;
        struct node *tmp;
        int i = 1;
        if (pos == 1) {
                tmp = start;
                start = tmp->next;
                tmp->next->prev = NULL;
                free(tmp);
        } else {
                q = start;
                while (i != (pos - 1)) {
                        q = q->next;
                        i++;
                }
                tmp = q->next;
                q->next = tmp->next;
                if (q->next != NULL) {
                        q->next->prev = q;
                }
                free(tmp);
        }
}

void reverse()
{
        struct node *tmp;
        int i = 1;
        tmp = start;
        while (tmp->next != NULL) {
                tmp = tmp->next;
        }
        while (tmp != NULL) {
                printf("\nNode %d\n Num - %d\n", i, tmp->num);
                printf(" Alpha - %c\n", tmp->alpha);
                tmp = tmp->prev;
                i++;
        }
}

void display()
{
        struct node *tmp;
        int i = 1;
        tmp = start;
        while (tmp != NULL) {
                printf("\nNode %d\n Num - %d\n", i, tmp->num);
                printf(" Alpha - %c\n", tmp->alpha);
                tmp = tmp->next;
                i++;
        }
}