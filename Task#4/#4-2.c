#include <stdio.h>

// 사용자로부터 n값을 입력 받아 아래 그림과 같이 숫자 피라미드를 출력하세요
int main()
{

    int n;
    printf("Put the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", j + 1);
        }
        printf("*");
        printf("\n");
        }

    return 0;
}