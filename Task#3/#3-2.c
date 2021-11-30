#include <stdio.h>

// 최대 4자리수로 구성된 정수를 입력 받은 후 (i.e., 0~9999), 해당 입력 값이 몇 개의 숫자를 가지고 있는지 계산하는 프로그램을 작성

int main()
{
    int num = 0;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (1)
    {
        num /= 10;
        count++;
        if (!num)
        {
            break;
        }
    }

    printf("The number 374 has %d digits\n", count);
}
