#include <stdio.h>
int main() {
    int a,asquare,digits,kaprekar,divisor,first,second;
    printf("Enter a number: ");
    scanf("%d", &a);
    asquare = a*a;
    digits = 0;
    int temp = asquare;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    int Kaprekar = 0;
    for (int i = 1; i < digits; i++) {
        divisor = 1;
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }

        first = asquare / divisor;
        second= asquare % divisor;
        if (first != 0 && second != 0 && first + second == a) {
            Kaprekar = 1;  
            break;
        }
    }
    if (Kaprekar) {
        printf("%d is a Kaprekar number.\n", a);
    } else {
        printf("%d is not a Kaprekar number.\n", a);
    }

    return 0;
}