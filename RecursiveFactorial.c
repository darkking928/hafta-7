#include <cs50.h>
#include <stdio.h>

int recursiveFac(int n);

int main() {
    int sayi = get_int("Faktöriyeli hesaplanacak pozitif bir sayı giriniz: ");
    if (sayi >= 0) {
        int factorial = recursiveFac(sayi);
        printf("Girdiğiniz sayının faktöriyeli: %d\n", factorial);
    } else {
        printf("Lütfen pozitif bir sayı giriniz.\n");
    }
}

int recursiveFac(int n) {
    if (n > 1)
        return n * recursiveFac(n-1);
    else
        return 1;
}