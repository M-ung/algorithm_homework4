#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped;

    for (i = 0; i < n-1; i++) {
        swapped = 0;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
    }
}

int main() {
    const int size = 7; // 배열 크기
    int arr[size];

    // 난수 초기화
    srand(time(NULL));

    // 무작위로 배열 생성
    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // 0부터 99까지의 난수 생성
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, size);

    printf("\nSorted array: \n");
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
