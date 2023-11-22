#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int size = 7; // 배열 크기

// 버블 정렬 함수
void bubbleSort(int arr[]) {
    int i, j;
    int swapped; // 교환이 이루어졌는지 여부를 나타내는 변수

    printf("=========== 버블 정렬 과정 ===========\n");

    for (i = 0; i < size-1; i++) {
        swapped = 0; // 초기에는 아직 교환이 이루어지지 않았음을 표시

        for (j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // 인접한 두 원소를 비교하여 필요한 경우 교환
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1; // 교환이 이루어졌음을 표시
            }

            // 현재 패스에서의 배열 상태를 출력
            printf("%d ", arr[j]);
        }
        printf("\n");

        // 만약 현재 패스에서 교환이 전혀 이루어지지 않았다면 이미 정렬된 상태이므로 루프 종료
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

    // 버블 정렬 함수 호출
    bubbleSort(arr);

    // 정렬된 배열 출력
    printf("정렬된 배열: ");
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}