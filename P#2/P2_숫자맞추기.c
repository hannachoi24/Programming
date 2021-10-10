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

/*
일반 규칙

컴퓨터가 [0,1000] 범위에서 임의의 정수 (키 값) 을 선택.

사용자는 총 10번의 턴을 가짐. 매 턴마다 숫자를 하나 입력하면 컴퓨터는 입력값이 키 값보다 더 큰지, 더 작은지 알려줌.

"The key is higher than XXX" 또는 "The key is lower than XXX" 메시지 출력.

사용자가 10번의 턴을 모두 사용하기 전에 키 값을 찾아내면 사용자의 승리.

"Player won! the key was XXX." 메시지 출력 후 종료

사용자가 10번의 턴을 모두 소진하였지만 키 값을 찾아내지 못한 경우 컴퓨터의 승리.

"Computer won! the key was XXX." 메시지 출력 후 종료.


특별 규칙

One-shot: 사용자가 첫 번째 턴에 키 값을 찾아낸 경우,

"Feeling lucky! the key was XXX." 메시지 출력 후 종료

MIN/MAX: 키 값이 0 또는 1000 일때, 사용자가 키 값을 찾아낸 경우,

"You got the extreme number! the key was XXX." 메시지 출력 후 종료.

One-shot 규칙과 동시에 발생한 경우, One-shot 규칙을 먼저 출력 후 MIN/MAX 규칙 출력.

Close: 사용자 입력값이 키 값 +- 10 이내의 범위인 경우, 추가 힌트 출력

"Lucky! the key is close to XXX" 메시지 추가 출력.
*/
