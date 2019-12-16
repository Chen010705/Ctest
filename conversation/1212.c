/*12.12题目：输出9*9口诀。
程序分析：分行与列考虑，共 9 行 9 列，i 控制行，j 控制列。
要求输出结果如下*/
#include <stdio.h>
int main()
{
    int i, j, result;
    printf("\n");
    for (i = 9; i > 0; i--) //i表示行
    {
        for (j = 1; j <= i; j++) //j表示列
        {
            result = i * j;
            printf("%d*%d=%-3d", i, j, result); /*-3d表示左对齐，占3位*/
        }
        printf("\n"); /*每一行后换行*/
    }
} //修改两个for循环的循环条件表达式可以使输出结果的形状改变（矩形，左上三角，右上三角，左下三角，右下三角）