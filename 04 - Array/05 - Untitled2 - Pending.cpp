#include <stdio.h>

void sort(int arr[], int n, int order) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (order == 1) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            } else {
                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main() {
    int n, i, order;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("Enter the order in which you want to sort the arrays (1 for ascending, 2 for descending): ");
    scanf("%d", &order);
    sort(arr1, n, order);
    sort(arr2, n, order);
    printf("The sorted first array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nThe sorted second array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}

