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

// 선택 정렬 함수
void selectionSort(int arr[]) {
    int i, j, maxIndex;

    // 배열을 끝에서부터 시작하여 정렬
    for (i = SIZE-1; i > 0; i--) { // 큰 값을 찾아 큰 값을 오른쪽부터 채워 나가기 때문에 size-1부터 0까지 줄어나가면서 반복한다.
        maxIndex = i; // 최댓값을 저장할 인덱스 초기화

        // 최댓값을 찾는 과정
        for (j = 0; j < i; j++) { // 이미 앞 패스에서 찾은 최댓값을 빼고 그 중에 최댓값을 찾아야 하기 때문에 i 범위까지만 반복한다.
            if (arr[j] > arr[maxIndex]) {  // 현재까지의 최댓값보다 큰 값을 찾았다면,
                maxIndex = j; // 최댓값 인덱스를 갱신한다.
            }
        }

        // 최댓값을 현재 패스에서의 마지막 원소와 교환한다.
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
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
    selectionSort(arr); // 선택 정렬 함수 호출
    printArr(arr); // 배열 출력 함수 호출

    return 0;
}