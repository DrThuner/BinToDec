#include <math.h>
#include <stdio.h>

int convert(long long bin) {
    int dec = 0, i = 0, remainder;
    while (bin != 0) {
        remainder = bin % 10;
        bin /= 10;
        dec += remainder * pow(2, i);
        ++i;
    }
    return dec;
}

int main() {
    long long bin;
    printf("Wprowadz liczbe binarna: ");
    scanf("%lld", &bin);
    printf("Liczba dziesietna to: %d", convert(bin));
    return 0;
}
