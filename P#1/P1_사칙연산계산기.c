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