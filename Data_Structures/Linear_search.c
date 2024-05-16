#include <stdio.h>
void search(int arr[], int num);
int main()
{
    int num;
    int arr[50];
    int element;
    printf("Enter the size of array: ");
    scanf("%d", &num);
    printf("Enter the array elements: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    search(arr, num);
    return 0;
}
void search(int arr[], int num)
{
    int element;
    int i;
    printf("Enter the element to search: ");
    scanf("%d", &element);
    for (i = 0; i < num; i++) {
        if (arr[i] == element) {
            printf("Element is found at position %d\n", i + 1);
            return;
        }
    }
    if (i == num) {
        printf("Given element is not found!! \n");
    }
}
