#include <stdio.h>

#define N 10

// 10개의 값을 입력받아 배열에 저장한 후, 입력받은 값의 평균과 최대값을 출력하는 프로그램을 작성
int main(void)

{

    int a[N], i;
    int temp = 0; // 임의로 MAX값 넣을 공간
    int max = a[0];
    int min = 200; // 최소값: 범위 내에서 가장 큰 값으로 초기화

    printf("Enter %d numbers: ", N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]); // 입력 받아서 a[i]에 넣는다
        temp += a[i];       // 총점과 평균을 구하기 위해 temp에 모든 값 더하기

        if (max < a[i])
        {
            max = a[i];
        }

        if (min > a[i])
        {
            min = a[i];
        }
    }

    printf("최대값은 %d 최소값은 %d 입니다. \n", max, min);

    printf("Average is %d", temp / i);

    return 0;
}
