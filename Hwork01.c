#include<stdio.h>/*#include指令 包含头文件<stdio.h>*/
#include<math.h>
int main(void)/*main函数 void表示空*/
{
    int radius,r3;/*int整型 声明radius，r3变量*/
    double PI,volume;/*double双精度浮点型 声明PI，volume变量*/
    
    scanf("%d",&radius);/*ggdghuidhguihfuhfi*/
    PI =3.141592;
    r3 =pow(radius,3);
    volume = 4/3.0 * PI * r3;
    printf("Volume is %f!\n",volume);

    return 0;/*return语句*/
}