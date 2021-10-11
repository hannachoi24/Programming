#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(0));
    unsigned int r_int = rand() * rand();
    unsigned int key = r_int % 1001;
    int cnt = 0;
    int guess = 0;

    for (int i = 0; i < 10; i++)
    {
        cnt++;
        printf("Put your guess: ");
        scanf("%d", &guess);

        if (guess == key)
        {
            printf("Player won! the key was %d", key);
            break;
        }

        if (guess > key)
        {
            printf("The key is lower than \n");
        }

        else
            printf("The key is higher than \n");

        if (i == 0)
        {
            if (guess == key)
            {
                printf("Feeling lucky! the key was %d", key);
                break;
            }
        }

        if (i != 0)
        {
            if (key == 0 || key == 1000)
            {
                if (guess == key)
                {
                    printf("You got the extreme number! the key was %d", key);
                }
            }
        }

        if (guess + 10 > key && guess - 10 < key)
        {
            printf("Lucky! the key is close to %d ", guess);
            printf("\n");
        }
    }

    if (cnt > 10)
    {
        printf("Computer won! the key was %d", key);
    }

    return 0;
}