#include <stdio.h>

int main()
{
    FILE *f = fopen("xaridlar.txt", "r");

    if (f == NULL)
    {
        printf("Fayl ochilmadi");
        return 1;
    }

    int summa;
    int soni = 0;

    while (fscanf(f, "%d", &summa) == 1)
    {
        if (summa > 50000)
        {
            soni++;
        }
    }

    fclose(f);

    printf("Katta xaridlar soni: %d", soni);
}