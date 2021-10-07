#include <stdio.h>

int main(void)
{
    int ing = 1;

    while (ing)
    {
        int choice, a, b, c, result, anw;
        char k, op1, op2, op3, op4;

        printf("Enter the calculator mode (1:Normal, 2:Extended):");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Put two integers: ");
            scanf("%d,%d", &a, &b);
            printf("Put the operator(+, -, *, /, %% 중 하나): ");
            scanf("%*c%c", &k, 1);

            if (k == '+')
            {
                result = a + b;
                printf("The result is %d\n", result);
            }
            if (k == '-')
            {
                result = a - b;
                printf("The result is %d\n", result);
            }
            if (k == '*')
            {
                result = a * b;
                printf("The result is %d\n", result);
            }
            if (k == '/')
            {
                if (b != 0)
                { //0으로 나눌때 오류 방지
                    float d = a, e = b, result2 = result;
                    result2 = d / e;
                    printf("The result is %0.2f\n", result2);
                }
                else
                    printf("0으로 나눌 수 없습니다.\n");
            }

            if (k == '%')
            {
                if (b != 0)
                {
                    result = a % b;
                    printf("%d %% %d = %d \n", a, b, result);
                }
                else
                    printf("0으로 나누면 나머지 값이 안됩니다. \n");
            }
            return 0;
        }

        else if (choice == 2)
        {
            printf("Put three integers(0~1000): ");
            scanf(" %d,%d,%d", &a, &b, &c);
            printf("Put two operator: ");
            scanf(" %c,%c", &op1, &op2);

            switch (op1)
            {
            case '+':
                switch (op2)
                {
                case '+':
                    anw = a + b + c;
                    printf("The answer is %d\n", anw);
                    ing = 0;
                    break;

                case '-':
                    anw = a + b - c;
                    printf("The answer is %d\n", anw);
                    ing = 0;
                    break;

                case '*':
                    anw = a + b * c;
                    printf("The answer is %d\n", anw);
                    ing = 0;
                    break;

                case '/':
                    float d = a, e = b, f = c, anw2;
                    anw2 = d + e / f;
                    if (c != 0)
                    {
                        printf("The answer is %0.2f\n", anw2);
                    }
                    else
                    {
                        printf("****ZeroDivisionError****");
                    }
                    ing = 0;
                    break;
                }
                break;

            case '-':
                switch (op2)
                {
                case '+':
                    anw = a - b + c;
                    printf("The answer is %d\n", anw);
                    ing = 0;
                    break;

                case '-':
                    anw = a - b - c;
                    printf("The answer is %d\n", anw);
                    ing = 0;
                    break;

                case '*':
                    anw = a - b * c;
                    printf("The answer is %d\n", anw);
                    ing = 0;
                    break;

                case '/':
                    float d = a, e = b, f = c, anw2;
                    anw2 = d - e / f;
                    if (c != 0)
                    {
                        printf("The answer is %0.2f\n", anw2);
                    }
                    else
                    {
                        printf("****ZeroDivisionError****");
                    }
                    ing = 0;
                    break;
                }
                break;

            case '*':
                switch (op2)
                {
                case '+':
                    anw = a * b + c;
                    printf("The answer is %d\n", anw);
                    ing = 0;
                    break;

                case '-':
                    anw = a * b - c;
                    printf("The answer is %d\n", anw);
                    ing = 0;
                    break;

                case '*':
                    anw = a * b * c;
                    printf("The answer is %d\n", anw);
                    ing = 0;
                    break;

                case '/':
                    float d = a, e = b, f = c, anw2;
                    anw2 = d * e / f;
                    if (c != 0)
                    {
                        printf("The answer is %0.2f\n", anw2);
                    }
                    else
                    {
                        printf("****ZeroDivisionError****");
                    }
                    ing = 0;
                    break;
                }
                break;

            case '/':
                float d = a, e = b, f = c, anw2;
                switch (op2)
                {

                case '+':
                    anw2 = d / e + f;
                    if (b != 0)
                    {
                        printf("The answer is %0.2f\n", anw2);
                    }
                    else
                    {
                        printf("****ZeroDivisionError****");
                    }
                    ing = 0;
                    break;

                case '-':
                    anw2 = d / e - f;
                    if (b != 0)
                    {
                        printf("The answer is %0.2f\n", anw2);
                    }
                    else
                    {
                        printf("****ZeroDivisionError****");
                    }
                    ing = 0;
                    break;

                case '*':
                    anw2 = d / e * f;
                    if (b != 0)
                    {
                        printf("The answer is %0.2f\n", anw2);
                    }
                    else
                    {
                        printf("****ZeroDivisionError****");
                    }
                    ing = 0;
                    break;

                case '/':

                    anw2 = d / e / f;
                    if (b != 0 && c != 0)
                    {
                        printf("The answer is %0.2f\n", anw2);
                    }
                    else
                    {
                        printf("****ZeroDivisionError****");
                    }
                    ing = 0;
                    break;
                }
                break;
            }
        }
        else
        {
            printf("Enter again\n");
        }
    }
}

/* 
공통

프로그램이 시작되면, 사용할 기능 (1 - 일반 연산, 2 - 확장 연산) 을 입력받음.

입출력 양식을 올바르게 지키지 않는 경우 감점 (아래 입출력 예 참고).

계산을 1회 수행 후, 프로그램은 종료됨.


일반 연산

사용자는 쉼표로 구분된 2개의 정수 a, b (0 <= a, b <= 1000) 를 입력함.

사용자는 1개의 사칙연산자 O1 (+, -, *, /, %) 를 입력함.

컴퓨터는 a O1 b 연산을 수행 후 결과를 출력함.

이 때, 0으로 나누는 경우 오류처리 할 것.

Note: % 는 나눗셈의 나머지를 구하는 연산자임. (예: 7 % 2 = 1)


확장 연산

사용자는 쉼표로 구분된 3개의 정수 a, b, c (0 <= a,b,c <= 1000) 를 입력함.

사용자는 쉼표로 구분된 2개의 사칙 연산자 O1, O2 (+,-,*,/,%) 를 입력함.

컴퓨터는 a O1 b O2 c 연산을 수행 후 결과를 출력함.

이 때, 연산자 우선순위에 맞추어 (*,/,% 을 +,- 보다 먼저 계산) 계산할 것.

이 때, 0으로 나누는 경우 오류처리 할 것. 
*/