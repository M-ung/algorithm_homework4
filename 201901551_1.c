#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int size = 7;

void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped;

    printf("=========== 버블 정렬 과정 ===========\n");

    for (i = 0; i < n-1; i++) {
        swapped = 0;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
            printf("%d ", arr[j]);
        }
        printf("\n");

        if (swapped == 0)
            break;
    }
    printf("======================================\n");
}

int main() {
    int arr[size];

    // 난수 초기화
    srand(time(NULL));

    // 무작위로 배열 생성
    printf("기존 배열: ");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // 0부터 99까지의 난수 생성
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, size);

    printf("정렬된 배열: ");
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
