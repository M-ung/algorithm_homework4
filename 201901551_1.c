#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7 // 배열 크기
int arr[SIZE]; // 배열

// 랜덤 배열 생성 함수
void randomArr(int arr[]) {
    // 난수 초기화
    srand(time(NULL));

    // 무작위로 배열 생성
    printf("기존 배열: ");
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100; // 0부터 99까지의 난수 생성
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 버블 정렬 함수
void bubbleSort(int arr[]) {
    int i, j;
    int check; // 교환이 이루어졌는지 여부를 나타내는 변수

    for (i = 0; i < SIZE-1; i++) {
        check = 0; // 초기에는 아직 교환이 이루어지지 않았음을 표시한다.

        for (j = 0; j < SIZE-i-1; j++) { // 이미 앞 패스에서 정렬된 부분은 또 정렬하지 않아도 되기 때문에 size-i-1 범위까지만 반복한다.
            if (arr[j] > arr[j+1]) { // 현재 원소가 다음 원소보다 크면 두 원소의 자리를 바꾼다.
                // 교환을 수행한다.
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                check = 1; // 교환이 이루어졌음을 표시한다.
            }
        }

        // check가 0이라면, 이미 정렬이 모두 이루워졌음을 뜻함으로 반복문을 종료한다.
        if (check == 0)
            break;
    }
}

// 배열 출력 함수
void printArr(int arr[]) {
    // 정렬된 배열 출력
    printf("정렬된 배열: ");
    for (int i=0; i < SIZE; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main() {
    randomArr(arr); // 랜덤 배열 생성 함수 호출
    bubbleSort(arr); // 버블 정렬 함수 호출
    printArr(arr); // 배열 출력 함수 호출

    return 0;
}