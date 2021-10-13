#include <stdio.h>

#define NORMAL 1
#define EXTENDED 2

int main(void)
{
    int mode = 0;
    int a, b, c;
    char op1, op2, k;
    int intermediate, result;

    printf("Enter mode: ");
    scanf("%d", &mode);

    if (mode == NORMAL)
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
    }

    else if (mode == EXTENDED)
    {
        printf("Enter 3 integers: ");
        scanf("%d, %d, %d", &a, &b, &c);
        printf("Enter 2 operators: ");
        scanf(" %c, %c", &op1, &op2);

        // inter = b op2 c
        // result = a op1 inter
        // op1 = + || - && op2 = * / %
        if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/' || op2 == '%'))
        {
            switch (op2)
            {
            case '*':
                intermediate = b * c;
                break;
            case '/':
                intermediate = b / c;
                break;
            case '%':
                intermediate = b % c;
                break;
            }

            switch (op1)
            {
            case '+':
                result = a + intermediate;
                break;
            case '-':
                result = a - intermediate;
                break;
            }
        }

        else
        {
            // inter = a op1 b
            // result = inter op2 c

            switch (op1)
            {
            case '+':
                intermediate = a + b;
                break;
            case '-':
                intermediate = a - b;
                break;
            case '*':
                intermediate = a * b;
                break;
            case '/':
                intermediate = a / b;
                break;
            case '%':
                intermediate = a % b;
                break;
            }

            switch (op2)
            {
            case '+':
                result = intermediate + c;
                break;
            case '-':
                result = intermediate - c;
            case '*':
                result = intermediate * c;
                break;
            case '/':
                result = intermediate / c;
                break;
            case '%':
                result = intermediate % c;
                break;
            }
        }
    }
    else
    {
        printf("Err\n");
        return 0;
    }

    printf("The result is %d", result);

    return 0;
}
