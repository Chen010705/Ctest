/*题目：有1、2、3、4四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？（用C语言程序实现）
提示:可以考虑先用数学方法实现，再用C语言程序实现
程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列（仅供参考）*/
#include <stdio.h>
int main()
{
    int i, j, k, count;
    count = 0;
    for (i = 1; i < 5; i++) // 以下为三重循环
        for (j = 1; j < 5; j++)
            for (k = 1; k < 5; k++) // 确保i、j、k三位互不相同
            {
                if (i != k && i != j && j != k)
                {
                    printf("%d,%d,%d ", i, j, k);
                    count++;
                    if (count % 5 == 0)
                        printf("\n");
                }
            }
    printf("%d", count);

    return 0; //本题中return 0;可省略不写（建议自己删去这一行代码再运行试试）
}
