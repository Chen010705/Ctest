#include <stdio.h>
int main()
{
    int i, j, k = 0, c[26];
    char a[80], b[26];
    while ((a[k] = getchar()) != '\n')
        k++;
    a[k] = '\0';
    for (i = 0; i < 26; i++)
    {
        b[i] = 97 + i;
        c[i] = 0;
    }
    for (i = 0; i < k; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            for (j = 0; j < 26; j++)
            {
                if (a[i] == b[j])
                    c[j]++;
            }
    }
    for (i = 0; i < 26; i++)
        printf("%d ", c[i]);
    return 0;
}