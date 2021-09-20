#include <stdio.h>

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
