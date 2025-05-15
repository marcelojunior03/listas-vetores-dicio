#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float media;
    float soma = 0;
    int semanas = 3;
    int dias = 7;
    float temp[3][7];

    temp[0][0] = 27;
    temp[0][0] = 30;
    temp[0][0] = 27.6;
    temp[0][0] = 23.5;
    temp[0][0] = 29.3;
    temp[0][0] = 24;
    temp[0][0] = 21;

    for (int i = 0; i < semanas; i++) {
        for (int j = 0; j < dias; j++) {
            soma += matriz[i][j];
        }
    }

    media = (soma)/21;

    if
        printf("Dias com a temperatura abaixo da média semanal (%.2f °C):\nQuarta (%.1f °C)\nSexta (%.1f °C)\nSábado (%.1f °C)", media, temp[3], temp[5], temp[6]);

}