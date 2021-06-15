#include <stdio.h>

int main(void)
{
    int x, y, z;
    float s;
    printf("사다리꼴의 넓이를 구하기 위해 윗변, 밑변, 높이는 입력하시오.\n");
    printf("윗변 : ");
    scanf_s("%d", &x);
    printf("밑변 : ");
    scanf_s("%d", &y);
    printf("높이 : ");
    scanf_s("%d", &z);

    s = (x+y)*z*0.5;

    printf("윗변(%d), 밑변(%d), 높이(%d)를 가지는 사다리꼴의 넓이는 %.3f입니다.", x, y, z, s);
    return 0;
}