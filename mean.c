#include <stdio.h>
int main(void)
{
    int x, y;
    int m;
    printf("�� ���� ������ �Է��Ͻÿ�.\n");
    printf("���� x : ");
    scanf_s("%d", &x);
    printf("���� y : ");
    scanf_s("%d", &y);

    m = (x+y)/2;
    m = -1 * m;
    printf("x(%d)�� y(%d)�� ��տ� ��ȣ�� ������ ���� %d�Դϴ�.", x, y, m);
    return 0;
}