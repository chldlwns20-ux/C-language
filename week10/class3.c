#include <stdio.h>

// 이진 탐색 함수 (배열은 반드시 정렬되어 있어야 함)
int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

//     프로그램이 실행되면 정렬된 배열에서 23을 찾기 위해 binarySearch 함수가 호출된다.

// 함수는 탐색 범위의 처음(left)과 끝(right)을 잡고, 반복문을 돌며 정가운데 값(mid)을 비교한다. 
// 찾는 값보다 작으면 오른쪽을, 크면 왼쪽으로 범위를 절반씩 좁혀나간다. 그러다 값을 찾으면 즉시 인덱스를 반환하고, 끝까지 못 찾으면 -1을 뱉는다.

// 마지막으로 main 함수가 그 결과를 받아와 인덱스를 출력하면서 프로그램이 끝난다.

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        } 
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("원소 %d는 인덱스 %d에 존재합니다.\n", target, result);
    } 
    else {
        printf("원소를 찾지 못했습니다.\n");
    }

    return 0;
}
