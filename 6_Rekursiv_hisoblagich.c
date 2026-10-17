#include <stdio.h>

void hisobla(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d\n", n);

    hisobla(n - 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    hisobla(n);

    printf("Xabar yuborildi!");

    return 0;
}