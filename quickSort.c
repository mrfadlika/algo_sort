#include <stdio.h>

void printArray(int arr[], int low, int high) {
    for (int i = low; i <= high; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    int temp;
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        printf("Quicksort (%d, %d) = ", low, high);
        printArray(arr, 0, 4);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {23, 13, 45, 89, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Data awal : ");
    printArray(arr, 0, n - 1);

    quickSort(arr, 0, n - 1);

    return 0;
}
