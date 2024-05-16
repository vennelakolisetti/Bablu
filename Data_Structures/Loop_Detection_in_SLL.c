#include <stdio.h>
#include <stdlib.h>

void create(int data, int i, int n);
int detect();
void myremove();
void display();

struct node {
    int num;
    struct node *next;
}*start;

int main()
{
    int n;
    int i;
    int data;
        int c;
    start = NULL;
    printf("Enter the number of data: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("\nEnter the num: ");
        scanf("%d", &data);
        create(data, i, n);
        }
        c = detect();
        if (c) {
                printf("Loop detected at node %d\n", c);
                myremove();
                printf("\nLinked list after removing loop\n");
                display();
        } else {
                printf("No loop found\n");
        }
}

void create(int data, int i, int n)
{
    struct node *tmp;
    struct node *q;
    struct node *temp;
    tmp = (struct node*) malloc (sizeof(struct node));
    tmp->num = data;
        if (i == 3) {
                temp = tmp;
        }
        if (i == n) {
                tmp->next = temp;
        } else {
                tmp->next = NULL;
        }
    if (start == NULL) {
        start = tmp;
    } else {
        q = start;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = tmp;
    }
}

int detect()
{
        struct node *slow;
        struct node *fast;
        int count = 1;
        slow = start;
        fast = start;
        while (slow != NULL || fast != NULL) {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast) {
                        return count;
                }
                count++;
        }
        return 0;
}

void myremove()
{
        struct node *slow;
        struct node *fast;
        slow = start;
        fast = start;
        while (slow != NULL || fast != NULL) {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast) {
                        break;
                }
        }
        fast = start;
        while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
        }
        slow->next = NULL;
}

void display()
{
        struct node *tmp;
        tmp = start;
        while (tmp != NULL) {
                printf(" %d ", tmp->num);
                tmp = tmp->next;
        }
        printf("\n");
}
