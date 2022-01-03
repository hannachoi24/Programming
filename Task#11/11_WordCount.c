#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
list.txt 파일을 읽어들여, 각 단어들의 등장 횟수를 세어 출력하는 프로그램을 작성하세요.
HINT: fopen, fscanf 등으로 내용을 읽으세요. 
읽은 내용을 담을 문자열 배열 (char [][]) 과 각 문자열이 등장한 횟수를 저장할 배열 (int []) 을 각각 유지하세요. 
새로운 단어를 읽으면 문자열 배열 및 등장 횟수 배열에 값을 추가하고, 
이미 존재하는 단어를 읽으면 (strncmp 등 활용) 등장 횟수 배열의 값만 증가 시키세요. */

int main()
{
    FILE *fp;

    fp = fopen("C:\\Users\\choihanna\\Desktop\\C\\Task#11\\list.txt", "r");
    if (fp == NULL)
    {
        printf("실패\n");
        return 1;
    }

    char cha;
    int count[6] = {
        0,
    };
    char getdata[13][9] = {{
        0,
    }};
    int i = 0, j = 0;
    while (1)
    {
        fscanf(fp, "%c", &cha);
        if (cha == '\n')
        {
            i++;
            j = 0;
        }
        else
        {
            getdata[i][j] = cha;
            j++;
        }
        if (feof(fp))
        {
            break;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        count[i] += 1;
        for (int j = i + 1; j < 13; j++)
        {
            if ((strncmp(getdata[i], getdata[j], 9)) == 0)
            {
                count[i] += 1;
            }
        }
    }
    fclose(fp);

    for (int i = 0; i < 6; i++)
    {
        printf("%s: ", getdata[i]);
        printf("%d\n", count[i]);
    }
}