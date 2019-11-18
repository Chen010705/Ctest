#include <stdio.h>
#include <math.h>
#define PI 3.141592654
void cal(int sel);
double vol_ball(void);
double vol_cyline(void);
double vol_cone(void);
int main(void)
{
    int sel;

    while (1)
    {
        printf("1-�����������");
        printf("2-����Բ�������");
        printf("3-����Բ׶�����");
        printf("����-�˳���������\n");
        printf("����������������:");
        scanf("%d", &sel);
        if (sel < 1 || sel > 3)
            break;
        else
            cal(sel);
    }
    return 0;
}
void cal(int sel)
{
    switch (sel)
    {
    case 1:
        printf("�������Ϊ:%.2f\n", vol_ball());
        break;
    case 2:
        printf("Բ�������Ϊ:%.2f\n", vol_cyline());
        break;
    case 3:
        printf("Բ׶�����Ϊ:%.2f\n", vol_cone());
        break;
    }
}
double vol_ball()
{
    double r;
    printf("������������:");
    scanf("%lf", &r);
    return (4.0 / 3.0 * PI * r * r * r);
}
double vol_cyline()
{
    double h, r;
    printf("������Բ����ĵ�Բ�뾶�͸�:");
    scanf("%lf%lf", &r, &h);
    return (PI * r * r * h);
}
double vol_cone()
{
    double h, r;
    printf("������Բ׶��ĵ�Բ�뾶�͸�:");
    scanf("%lf%lf", &r, &h);
    return (PI * r * r * h / 3.0);
} //P236~P238