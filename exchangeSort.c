#include <stdio.h>

void exchangeSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        printf("Proses %d = ", i+1);
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}
p
int main() {
    int arr[] = {3, 4, 1, 8, 12};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Data sebelum diurutkan : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    exchangeSort(arr, n);

    printf("Data setelah diurutkan : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
