#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node* prev;
        struct node* next;
};

struct node* create(struct node*, int);
void display(struct node*);
struct node* add(struct node*, struct node*);

int main()
{
        struct node* head1 = NULL;
        struct node* head2 = NULL;
        struct node* head3 = NULL;
        int num;
        int i;
        int data;
        printf("Enter the number of nodes in link 1: ");
        scanf("%d", &num);
        for (i = 0; i < num; i++) {
                printf("Enter the data:\n");
                scanf("%d", &data);
                head1 = create(head1, data);
        }
        printf("\nEnter the number of nodes in link 2: ");
        scanf("%d", &num);
        for (i = 0; i < num; i++) {
                printf("Enter the data:\n");
                scanf("%d", &data);
                head2 = create(head2, data);
        }
        printf("\nLinked list 1:\n");
        display(head1);
        printf("\nLinked list 2:\n");
        display(head2);
        head3 = add(head1, head2);
        printf("\nAfter addition:\n");
        display(head3);
}

struct node* create(struct node* head, int data)
{
        struct node* tmp;
        struct node* q;
        tmp = (struct node*) malloc (sizeof(struct node));
        tmp->data = data;
        tmp->prev = NULL;
        tmp->next = NULL;
        if (head == NULL) {
                head = tmp;
        } else {
                q = head;
                while (q->next != NULL) {
                        q = q->next;
                }
                q->next = tmp;
                tmp->prev = q;
        }
        return head;
}

void display(struct node* tmp)
{
        while (tmp != NULL) {
                printf("%d      ", tmp->data);
                tmp = tmp->next;
        }
        printf("\n");
}

struct node* add(struct node* head1, struct node* head2)
{
        struct node* tmp1 = head1;
        struct node* tmp2 = head2;
        struct node* head3 = NULL;
        struct node* tmp = NULL;
        struct node* q = NULL;
        int data;
        int carry = 0;
        while (tmp1->next != NULL) {
                tmp1 = tmp1->next;
        }
        while (tmp2->next != NULL) {
                tmp2 = tmp2->next;
        }
        while (tmp1 != NULL || tmp2 != NULL) {
                tmp = (struct node*) malloc (sizeof(struct node));
                if (tmp1 == NULL) {
                        data = tmp2->data + carry;
                } else if (tmp2 == NULL) {
                        data = tmp1->data + carry;
                } else {
                data = tmp1->data + tmp2->data + carry;
                }
                carry = 0;
                if (data > 9) {
                        tmp->data = data % 10;
                        carry = 1;
                } else {
                        tmp->data = data;
                }
                tmp->next = NULL;
                tmp->prev = NULL;
                if (head3 == NULL) {
                        head3 = tmp;
                } else {
                        q = head3;
                        while (q->next != NULL) {
                                q = q->next;
                        }
                        q->next = tmp;
                        tmp->prev = q;
                }
                if (tmp1 != NULL) {
                        tmp1 = tmp1->prev;
                }
                if (tmp2 != NULL) {
                        tmp2 = tmp2->prev;
                }
        }
        if (carry == 1) {
                tmp = (struct node*) malloc (sizeof(struct node));
                tmp->data = 1;
                tmp->next = NULL;
                tmp->prev = NULL;
                q = head3;
                while (q->next != NULL) {
                        q = q->next;
                }
                q->next = tmp;
                tmp->prev = q;
        }
        return head3;
}
