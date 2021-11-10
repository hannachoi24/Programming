#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 제공한 main 코드와 input.dat 파일을 사용하면, 아래 그림과 같이 패킷 정보를 불러들입니다.
•포인터 p 와 포인터 연산만을 활용하여, 문자열로 저장된 패킷의 내용을 화면에 출력하는 프로그램을 작성하세요.
–포인터 p는 패킷의 가장 첫부분을 포인팅.
–전체 패킷의 길이는 패킷의 0 byte offset 에 저장 (pkt_len)
–헤더의 길이는 패킷의 2 byte offst에 저장됨 (hdr_len)
–패킷의 내용은 hdr_len 과 pkt_len offset 사이에 저장됨. 
•Hello world가 출력되어야 함. */

#define BUFLEN 100

void printpkt(char *p)
{
    short pkt_len = *(short *)p;
    short hdr_len = *(short *)(p + 2);
    p = p + hdr_len;
    for (int i = hdr_len + 1; i < pkt_len + 1; p++)
    {
        printf("%c", *p);
        i++;
    }
}

int main(void)
{
    FILE *fp;
    char buf[BUFLEN];
    char *p = buf;
    fp = fopen("input.dat", "rb");
    fread(buf, 1, BUFLEN, fp);
    fclose(fp);

    printpkt(p);
}