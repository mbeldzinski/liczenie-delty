#include <stdio.h>
#include <math.h>

void wczytaj_parametry(int *a, int *b, int *c);

void Brak_rozwiazan();

void rowna_zeru(double x1);

void wieksza_od_zera(double x1, double x2);

int main() {
    int a;
    int b;
    int c;
    double x1;
    double x2;
    double delta;


    wczytaj_parametry(&a, &b, &c);


//D = b 2 - 4 * a* c
    delta = (b * b) - 4 * a * c;


    printf("Delta= %1lf\n", delta);

    if (delta < 0) {
        Brak_rozwiazan();
    }
    if (delta == 0) {
        x1 = -b / (2 * a);
        rowna_zeru(x1);
    }
    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / 2 * a;
        x2 = (-b + sqrt(delta)) / 2 * a;
        wieksza_od_zera(x1, x2);
    }
    return 0;
}

void wieksza_od_zera(double x1, double x2) { printf("Rozwiązanie x1=%1lf,x2=%lf\n", x1, x2); }

void rowna_zeru(double x1) { printf("Rozwiązanie %1f", x1); }

void Brak_rozwiazan() { printf("Delta nie ma rozwiązań"); }

void wczytaj_parametry(int *a, int *b, int *c) {
    printf("Podaj wartość a:");
    scanf("%i", a);
    printf("Podaj wartość b:");
    scanf("%i", b);
    printf("Podaj wartość c:");
    scanf("%i", c);
}
