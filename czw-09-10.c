void zadanie3()
{
    float a, b, c;
    float delta;
    float x1, x2;

    puts("Podaj parametry f.kwadratowej w kolejnosci (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0 && b == 0)
    {
        puts("Brak rozwiazania");
        return;
    }

    if(a == 0) // f.liniowa
    {
        // x1 = -b / (2*a);
        x1 = -c/b;
        printf("Ta funkcja ma jedno miejsce zerowe: %f \n", x1);
        return;
    }

    delta = b*b - 4 * a * c;
    printf("Delta = %f\n", delta);

    if(delta == 0)
    {
        x1 = -(b/(2*a));
        printf("Ta funkcja ma jedno miejsce zerowe: %f \n", x1);
        return;
    }

    if(delta < 0)
    {
        printf("Ta funkcja nie ma rzeczywistych miejsc zerowych\n");
        return;
    }

    if(delta > 0)
    {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        printf("Ta funkcja ma dwa miejsca zerowe: %f %f", x1, x2);
        return;
    }

}

void zadanie2()
{
    int n;

    puts("Podaj liczbe do obliczenia modulu:");
    scanf("%d", &n);

    n = (n >= 0) ? n : -n;

    printf("Modul z tej liczby to: %d\n", n);

}

void zadanie1()
{
    int wzrost, wiek;
    float waga;

    puts("Podaj wiek, wage i wzrost (np. 25 70.5 180):");
    scanf("%d %f %d", &wiek, &waga, &wzrost);

    printf("Osoba w wieku %d lat, wzrost: %d, waga: %06.2fkg\n", wiek, wzrost, waga);
}

int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
  
    return 0;
} 
