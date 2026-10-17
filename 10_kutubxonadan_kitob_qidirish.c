#include <stdio.h>

int binary_search(int books[], int n, int target)
{
    int chap = 0;
    int ong = n - 1;

    while (chap <= ong)
    {
        int orta = (chap + ong) / 2;

        if (books[orta] == target)
        {
            return orta;
        }

        if (books[orta] < target)
        {
            chap = orta + 1;
        }
        else
        {
            ong = orta - 1;
        }
    }

    return -1;
}

int main()
{
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270};

    int target;

    printf("Kitob ID raqamini kiriting: ");
    scanf("%d", &target);

    int indeks = binary_search(books, 12, target);

    if (indeks != -1)
    {
        printf("Kitob topildi!\n");
        printf("Indeks: %d", indeks);
    }
    else
    {
        printf("Kitob topilmadi!");
    }

    return 0;
}