#include <stdio.h>
void search(int arr[], int num);
int main()
{
        int arr[50];
        int num;
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
        int first = 0;
        int last = num - 1;
        int middle = (first + last) / 2;
        printf("Enter the element to search: ");
        scanf("%d", &element);
        while (first <= last) {
                if (arr[middle] == element) {
                        printf("Element found at position %d\n", middle + 1);
                        break;
                }
                else if (element < arr[middle]) {
                        last = middle - 1;
                } else {
                        first = middle + 1;
                }
                middle = (first + last) / 2;
        }
        if (first > last) {
                printf("Given element not found!! \n");
        }
}
