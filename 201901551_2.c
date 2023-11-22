#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int size = 7;

// 선택 정렬 함수 정의
void selectionSort(int arr[], int n) {
    int i, j, maxIndex;

    printf("=========== 선택 정렬 과정 ===========\n");

    // 배열을 끝에서부터 시작하여 정렬
    for (i = n-1; i > 0; i--) {
        maxIndex = i; // 최댓값을 저장할 인덱스 초기화

        // 최댓값을 찾는 과정
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j; // 현재까지의 최댓값보다 큰 값을 찾으면 최댓값 인덱스 갱신
            }
        }
        printf("최대값: %d\n", arr[maxIndex]);

        // 최댓값과 현재 위치의 원소를 교환
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;

        // 현재 상태 출력
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
        arr[i] = rand() % 100; // 0부터 99까지의 난수 생성
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 선택 정렬 수행
    selectionSort(arr, size);

    // 정렬된 배열 출력
    printf("정렬된 배열: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}