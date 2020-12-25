#include <stdio.h>
#define MAXNUM 46
int main()
{
    int n;
    int list[MAXNUM] = { 0 };
    scanf_s("%d", &n);
    int i = 0;
    for (i = 1; i <= 43; i++)
    {
        list[1] = 1;
        list[2] = 1;
            list[i + 2] = list[i] + list[i + 1];
    }
    printf("%d", list[n]);
    return 0;
}