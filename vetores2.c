#include <stdio.h>
#include <string.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char *diadasemana[7];
    diadasemana[0] = "domingo";
    diadasemana[1] = "segunda-feira";
    diadasemana[2] = "terça-feira";
    diadasemana[3] = "quarta-feira";
    diadasemana[4] = "quinta-feira";
    diadasemana[5] = "sexta-feira";
    diadasemana[6] = "sábado";

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

    printf("Dias com a temperatura abaixo da média semanal (%.2f °C):\n", media);

    for(int i = 0; i < 7; i++){
        if(temp[i] < media){
            printf("%s (%.1f)\n", diadasemana[i], temp[i]);
        }
    }

}