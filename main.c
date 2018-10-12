#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int c;
    double x1;
    double x2;
    double delta;


    printf("Podaj wartość a:");
    scanf("%i", &a);
    printf("Podaj wartość b:");
    scanf("%i", &b);
    printf("Podaj wartość c:");
    scanf("%i", &c);


//D = b 2 - 4 * a* c
    delta = (b * b) - 4 * a * c;


    printf("Delta= %1lf\n", delta);

    if (delta < 0) {
        printf("Delta nie ma rozwiązań");
    }
    if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Rozwiązanie %1f", x1);
    }
    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / 2 * a;
        x2 = (-b + sqrt(delta)) / 2 * a;
        printf("Rozwiązanie x1=%1lf,x2=%lf\n", x1, x2);
    }
    return 0;
}
