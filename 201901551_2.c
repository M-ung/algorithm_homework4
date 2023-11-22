#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int size = 7;

void selectionSort(int arr[], int n) {
    int i, j, maxIndex;

    printf("=========== 선택 정렬 과정 ===========\n");

    for (i = n-1; i > 0; i--) {
        maxIndex = i;

        // 최댓값 찾기
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        printf("최대값: %d\n", arr[maxIndex]);

        // 최댓값과 현재 위치의 원소 교환
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;

        for (int k = 0; k < size; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
    printf("======================================\n");
}

int main() {
    int arr[size];

    // 배열 초기화
    printf("기존 배열: ");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, size);

    printf("정렬된 배열: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
