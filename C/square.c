#include <stdio.h>

int main(void)
{
    int x, y, z;
    float s;
    printf("��ٸ����� ���̸� ���ϱ� ���� ����, �غ�, ���̴� �Է��Ͻÿ�.\n");
    printf("���� : ");
    scanf_s("%d", &x);
    printf("�غ� : ");
    scanf_s("%d", &y);
    printf("���� : ");
    scanf_s("%d", &z);

    s = (x+y)*z*0.5;

    printf("����(%d), �غ�(%d), ����(%d)�� ������ ��ٸ����� ���̴� %.3f�Դϴ�.", x, y, z, s);
    return 0;
}