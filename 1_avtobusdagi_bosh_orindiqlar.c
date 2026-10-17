#include <stdio.h>

int main()
{
    int joylar[10];
    int orin;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &joylar[i]);
    }

    scanf("%d", &orin);

    if (joylar[orin - 1] == 0)
    {
        printf("Joy mavjud");
    }
    else
    {
        printf("Joy band");
    }

    return 0;
}