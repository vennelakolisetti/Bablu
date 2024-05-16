#include <stdio.h>
void insertion_sort(int arr[], int num);
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
        insertion_sort(arr, num);
        return 0;
}
void insertion_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while(j >= 0 && temp <= a[j]) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
        printf("Array after sorting: ");
        for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
        }
        printf("\n");
}
