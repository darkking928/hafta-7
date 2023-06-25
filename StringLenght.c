#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Uzunluğunu öğrenmek istediğiniz metni giriniz: ");
    int length = strlen(text);

    printf("Girdiğiniz metnin uzunluğu: %i\n", length);
}