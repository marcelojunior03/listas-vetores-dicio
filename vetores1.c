#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float temp[7];
    temp[0] = 27;
    temp[1] = 30;
    temp[2] = 27.6;
    temp[3] = 23.5;
    temp[4] = 29.3;
    temp[5] = 24;
    temp[6] = 21;

    printf("A menor temperatura identificada foi %.1f °C e a maior temperatura foi %.1f °C.", temp[1], temp[6]);

}