#include <stdio.h>

struct Xodim
{
    char ismi[50];
    int soat;
};

int main()
{
    FILE *f = fopen("xodimlar.txt", "r");

    if (f == NULL)
    {
        printf("Fayl ochilmadi");
        return 1;
    }

    int n;
    fscanf(f, "%d", &n);

    struct Xodim xodimlar[100];

    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%s %d",
               xodimlar[i].ismi,
               &xodimlar[i].soat);
    }

    fclose(f);

    for (int i = 0; i < n; i++)
    {
        printf("%s: %d som\n",
               xodimlar[i].ismi,
               xodimlar[i].soat * 15000);
    }
}