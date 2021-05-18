#include <stdio.h>
int main(void)
{
    int x, y;
    int m;
    printf("두 개의 정수를 입력하시오.\n");
    printf("정수 x : ");
    scanf_s("%d\n", &x);
    printf("정수 y : ");
    scanf_s("%d\n", &y);

    m = (x+y)/2;
    m = -1 * m;
    printf("x(%d)와 y(%d)의 평균에 부호를 반전한 값은 %d입니다.", x, y, m);
    return 0;
}