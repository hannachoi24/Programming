#include <stdio.h>

int main()
{
    short a, b, c, result;
    printf("Put three integers:");
    scanf("%hd,%hd,%hd", &a, &b, &c);

    result = a + b + c;
    printf("The result is %hd", result);
}

// Short 타입은 2바이트로 16비트를 저장할 수 있고, 값의 범위는 –32,768 ~ 32,767 이다.
// 그러나 입력값은 값의 범위를 넘어가기 때문에 overflow가 발생하여 정확한 값이 나오지 못한다.
