#include <stdio.h>

// 사용자로부터 n값을 입력 받아, n보다 작은 소수 (prime number)를 모두 출력
int main()
{
    int i, j, n;

    printf("Put the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        for (j = 2; j < i; j++)
            if (i % j == 0)
                break; // 중간에 나누어 떨어지면 소수가 아니므로 반복을 중단한다.
        if (i == j)    // 중간에 나누어 떨어지지 않으면 i와 j가 같은 값이다. 소수이다.
            printf(" %d", i);
    }
    return 0;
}