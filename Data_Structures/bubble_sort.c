#include <stdio.h>
void bubble_sort(int arr[], int num);
int main()
{
        int arr[50];
        int num;
        printf("Enter the size of array: ");
        scanf("%d", &num);
        printf("Enter the array elements: ");
        for (int i = 0; i < num; i++) {
                scanf("%d", &arr[i]);
        }
        bubble_sort(arr, num);
        return 0;
}
void bubble_sort(int arr[], int num)
{
        int i;
        int temp;
        for (i = 0; i < num; i++) {
                for (int j = i + 1; j < num; j++) {
                        if (arr[i] >= arr[j]) {
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                        }
                }
        }
        printf("Array after sorting: ");
        for (i = 0; i < num; i++) {
                printf("%d ", arr[i]);
        }
        printf("\n");
}
