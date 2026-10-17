#include <stdio.h>

struct Mahsulot
{
    char nomi[50];
    int narxi;
    int miqdori;
};

int main()
{
    struct Mahsulot m;

    scanf("%s", m.nomi);
    scanf("%d", &m.narxi);
    scanf("%d", &m.miqdori);

    printf("Mahsulot: %s\n", m.nomi);
    printf("Narxi: %d\n", m.narxi);
    printf("Miqdori: %d\n", m.miqdori);
    printf("Ombor qiymati: %d", m.narxi * m.miqdori);

    return 0;
}