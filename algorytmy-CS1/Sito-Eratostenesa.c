#include<stdio.h>

/* --- przedzial wylawiania liczb pierwszych --- */
#define start  2 // minimum 2
#define stop   53

int main()
{
    int tab[stop+1];

    for(int i = 0; i < stop+1; i++)
    {
       tab[i] = 1;
    }
       
    for(int i = 2; i < stop+1; i++)
    {
        if(tab[i])
        {
            for(int j = i+i; j < stop+1; j += i)
            {
                tab[j] = 0;
            }
        }
    }

    puts("Liczby pierwsze z podanego przedzialu:");
  
    for(int i = start; i < stop+1; i++)
    {
        if(tab[i])
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
