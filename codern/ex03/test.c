#include <stdio.h>
#include <math.h>

int main() {
    char a;
    float b, c, bmi;

    scanf(" %c %f %f", &a, &b, &c);

    bmi = c / pow(b / 100, 2);

    if(a == 'O' && b < 180 && c > 60 && bmi >= 20 && bmi <= 25) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;

}



