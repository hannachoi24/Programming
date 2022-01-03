#include <stdio.h>
#include <string.h>

/* Check the planet name: 아래 메인 함수처럼 태양계 행성의 이름을 가진 문자열의 배열을 만들어 두고, 
사용자로부터 공백문자로 구분된 이름들을 입력 받아 각 입력 값이 행성인지 아닌지 구분해서 출력해주는 프로그램을 만드세요. 
사용자가 몇 개의 이름 들을 입력할지 미리 알 수 없다고 가정하세요.
HINT: strtok() 등의 함수를 쓰지 말고, getchar() 로 공백문자가 나올 때까지 한 글자씩 문자를 읽어들이는 형태로 구현해보세요. 
문자열 비교는 strncmp() 활용. */

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};

    int ch;
    char Enter[50] = {
        0,
    };
    char getdata[8][9] = {{
        0,
    }};
    int i = 0;
    printf("Enter names: ");
    while ((ch = getchar()) != '\n')
    {
        Enter[i] = ch;
        i++;
    }

    int r = 0, j = 0;
    for (int k = 0; k < strlen(Enter); k++)
    {
        if (Enter[k] == ' ')
        {
            r++;
            k++;
            j = 0;
        }
        getdata[r][j] = Enter[k];
        j++;
    }
    for (int q = 0; q < 8; q++)
    {
        if (getdata[q][0] != NULL)
        {

            for (int w = 0; w < 9; w++)
            {
                if (strncmp(getdata[q], planets[w], 8) == 0)
                {
                    printf("%s ", getdata[q]);
                    printf("is a planet.\n");
                    break;
                }
                if ((w == 8) && (strncmp(getdata[q], planets[w], 8) != 0))
                {
                    printf("%s ", getdata[q]);
                    printf("is Not a planet.\n");
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
}