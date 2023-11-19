#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void selectionSort(int arr[], int n) {
    int i, j, maxIndex;

    for (i = n-1; i > 0; i--) {
        maxIndex = i;

        // 최댓값 찾기
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // 최댓값과 현재 위치의 원소 교환
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    const int size = 7;
    int arr[size];

    // 배열 초기화
    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }

    selectionSort(arr, size);

    printf("\nSorted array: \n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
