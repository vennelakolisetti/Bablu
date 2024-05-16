#include <stdio.h>
void quick_sort(int arr[], int, int);
int main()
{
        int arr[50];
        int num;
        int i;
        printf("Enter the size of array: ");
        scanf("%d", &num);
        printf("Enter the array elements: ");
        for (i = 0; i < num; i++) {
                scanf("%d", &arr[i]);
        }
        quick_sort(arr, 0, num - 1);
        printf("Array after sorting: ");
        for (i = 0; i < num; i++) {
                printf("%d ", arr[i]);
        }
        printf("\n");
}
void quick_sort(int arr[], int first, int last)
{
        int pivot;
        int i;
        int j;
        int temp;
    if (first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while (arr[i] <= arr[pivot] && i < last)
                i++;
                while (arr[j] > arr[pivot])
                j--;
                if (i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quick_sort(arr, first, j - 1);
        quick_sort(arr, j + 1, last);
    }
}