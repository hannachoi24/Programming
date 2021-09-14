#include <stdio.h>

int main()
{
    short a, b, c, result;
    printf("Put three integers:");
    scanf("%hd,%hd,%hd", &a, &b, &c);

    result = a + b + c;
    printf("The result is %hd", result);
}

// Short 타입은 2바이트로 값의 범위는 –32,768 ~ 32,767 이다.
// 의도와 다른 결과가 나온 이유는 입력값의 범위가 값의 범위를 넘어 정확한 결과가 나오기 어렵기 때문이다.