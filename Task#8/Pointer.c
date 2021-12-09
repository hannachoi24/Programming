#include <stdio.h>

// 배열의 평균값과 합을 계산해 포인터를 통해 전달하는 함수인 get_avgsum() 함수와, 3개 데이터의 값을 서로 변경하는 rotate() 함수를 작성

double get_avgsum(int arr[], int n, int *avg, int *max)
{
    int i, tot = 0;
    *max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }

    for (i = 0; i < n; i++)
        tot += arr[i];
    *avg = tot / 10.0;
    return *avg;
}

int rotate(int *p, int *q, int *r)
{
    *p = *r;
    *q = *p;
    *r = *q;
}

int main()

{

    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int avg, max;

    get_avgsum(arr, 10, &avg, &max);

    rotate(&arr[2], &arr[3], &arr[4]);

    printf("Array: ");

    for (int i = 0; i < 10; i++)

        printf("% d ", arr[i]);

    printf("\nAvg: %d, Max: %d\n", avg, max);
}