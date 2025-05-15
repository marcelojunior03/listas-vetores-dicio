#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float media;
    float temp[7];
    temp[0] = 27;
    temp[1] = 30;
    temp[2] = 27.6;
    temp[3] = 23.5;
    temp[4] = 29.3;
    temp[5] = 24;
    temp[6] = 21;
    media = (temp[0]+temp[1]+temp[2]+temp[3]+temp[4]+temp[5]+temp[6])/7;

    printf("Dias com a temperatura abaixo da média semanal (%.2f °C):\nQuarta (%.2f °C)\nSexta (%.2f °C)\nSábado (%.2f °C)", media, temp[3], temp[5], temp[6]);

}