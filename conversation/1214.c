/*题目：打印出所有的三位"水仙花数"，所谓"水仙花数"是指一个n位数，其各位数字n次方和等于该数本身
程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。*/
#include <stdio.h>
int main()
{
    int num, sd, td, hd;
    for (num = 100; num < 1000; num++)
    {
        hd = num / 100;
        td = num % 100 / 10;
        sd = num % 10;
        if (num == hd * hd * hd + td * td * td + sd * sd * sd)
        {
            printf("Narcissistic number is:%d\n", num);
        }
    }
    return 0;
}