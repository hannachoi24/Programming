#include <stdio.h>
#define MAX 20

/*
도형의 정보를 입력 받아 구조체로 저장하고 출력하는 프로그램을 작성하세요. 아래의 정보를 저장하고 출력하세요
–Shape: 도형의 모양. 선분 또는 사각형이 될 수 있으며 enum _shape {LINE=1, RECT=2}; 을 활용해서 데이터 저장.
–Point: 선분의 경우 두 점, 사각형의 경우 좌측상단과 우측하단 꼭지점 정보. 각 point 정보는 x, y 좌표값 (정수)를 가지는 구조체에 저장.
*/

enum shape
{
    LINE = 1,
    RECT = 2
};
struct point
{
    int x[2];
    int y[2];
} line_point[MAX], rect_point[MAX];

void print_point(struct point p[], struct point q[]);

int main(void)
{
    enum shape s;
    int option, count1 = 0, count2 = 0;
    while (1)
    {
        printf("Put figure shape(1:LINE, 2:RECT, 0:PRINT) : ");
        scanf("%d", &option);
        if (option == LINE)
        {
            printf("Put the coordinate of Point1 : ");
            scanf("%d %d", &line_point[count1].x[0], &line_point[count1].y[0]);
            printf("Put the coordinate of Point2 : ");
            scanf("%d %d", &line_point[count1].x[1], &line_point[count1].y[1]);
            count1++;
        }
        else if (option == RECT)
        {
            printf("Put the coordinate of Point1 : ");
            scanf("%d %d", &rect_point[count2].x[0], &rect_point[count2].y[0]);
            printf("Put the coordinate of Point2 : ");
            scanf("%d %d", &rect_point[count2].x[1], &rect_point[count2].y[1]);
            count2++;
        }
        else if (option == 0)
        {
            print_point(line_point, rect_point);
            printf("\n");
        }
    }
}

void print_point(struct point p[], struct point q[])
{

    printf("Figure1 : a line from (%d,%d) to (%d,%d)",
           p[0].x[0], p[0].y[0],
           p[0].x[1], p[0].y[1]);

    printf("\n");

    printf("Figure2 : a rectangle from (%d,%d) to (%d,%d)",
           q[0].x[0], q[0].y[0],
           q[0].x[1], q[0].y[1]);
}