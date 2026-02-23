#include <stdio.h>
#include <math.h>

int main() {
    double R1, R2, R3; // Радиусы шаров
    double v1, v2, v3; // Объемы шаров
    double Z; // Итоговое значение
    
    printf("Введите радиус первого шара: ");  
    scanf("%lf", &R1);
    printf("Введите радиус второго шара: ");
    scanf("%lf", &R2);
    printf("Введите радиус третьего шара: ");
    scanf("%lf", &R3);

    v1 = (4.0 / 3.0) * M_PI * R1 * R1 * R1;
    v2 = (4.0 / 3.0) * M_PI * R2 * R2 * R2;
    v3 = (4.0 / 3.0) * M_PI * R3 * R3 * R3;

    Z = (v1 + v2 + v3) / 3.0;

    printf("Средний объем шаров: %.2f\n", Z);

    return 0;
}
