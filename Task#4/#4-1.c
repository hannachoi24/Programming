#include <stdio.h>

// 반복문을 활용하여, 사용자로부터 n값을 입력 받아 3의 n승 값을 구하는 프로그램을 작성
int main(void)
{

    int x = 3;      // 제곱할 수
    int n;          // 몇제곱
    int result = 1; // 어떠한 숫자를 곱해도 곱해지는 숫자가 되는 값이 1이기 때문

    printf("Put the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        result = result * x;
    }

    printf("%d^%d is %d", x, n, result);
}