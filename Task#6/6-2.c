#include <stdio.h>

//  5*5 개의 값을 2차원 배열에 입력받아 배열에 저장한 후, 입력받은 값의 평균과 최대값을 출력하는 프로그램을 작성.
// –평균에서 소수값은 버림 (floor function)

int main(void)
{
    int a[5][5];

    int max = 0;
    // 2차원 배열에 입력받아 배열에 저장
    for (int i = 0; i < 5; i++)
    {
        printf("Enter 5 numbers in the 1(th) row: ");
        for (int j = 0; j < 5; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    // 평균구하기
    for (int i = 0; i < 5; i++)
    {
        int average = (a[i][0] + a[i][1] + a[i][2] + a[i][3] + a[i][4]) / 5;
        printf("Average is %d \n", average);
    }

    // 최대값 구하기
    max = a[1][1];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("Max value is %d", max);
    return 0;
}