#include <stdio.h>

void zadanie1() // liczenie sredniej z tablicy
{
    int tab[10] = {1, 5, 2, 12, 0, 3, 5, 8, 5, 7};
    int suma = 0;
    float srednia;

    for(int i = 0; i < 10; i++)
    {
        suma += tab[i];
    }

    srednia = (float)suma / 10;

    printf("Srednia liczb z tablicy wynosi: %.2f\n", srednia);
}

void zadanie2() // wyszukiwanie wartosci min i max w zbiorze
{
    int tab[] = {1, 5, 2, 12, 0, 3, 5, 8, 5, 7, 19, 0, 2, 7, 11};
    int min = tab[0];
    int max = tab[0];

    for(int i = 0; i < 15; i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
        if(tab[i] < min)
        {
            min = tab[i];
        }
    }

    printf("Wartoscia max w zbiorze jest %d, a min %d", max, min);
}

void zadanie3()
{
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tab_size = 11;
    int temp;

    for(int i = 0; i < tab_size; i++) // przed modyfikacja
    {
        printf("%3d ", tab[i]);
    }
    printf("\n");

    for(int i = 0; i < tab_size/2; i++)
    {
        temp = tab[i];
        tab[i] = tab[tab_size-i-1];
        tab[tab_size-i-1] = temp;
    }

    for(int i = 0; i < tab_size; i++) // po modyfikacji
    {
        printf("%3d ", tab[i]);
    }
    printf("\n");

}

int main()
{
    zadanie1();
    zadanie2();
    zadanie3();

    return 0;
} 
