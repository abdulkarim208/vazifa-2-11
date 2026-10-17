#include <stdio.h>

int main()
{
    int joylar[3][4];
    int qator, orin;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &joylar[i][j]);
        }
    }

    scanf("%d %d", &qator, &orin);

    if (joylar[qator - 1][orin - 1] == 0)
    {
        printf("%d-qator, %d-orindiq: Bosh", qator, orin);
    }
    else
    {
        printf("%d-qator, %d-orindiq: Band", qator, orin);
    }

    return 0;
}