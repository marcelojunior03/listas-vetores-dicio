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
    float soma = 0;
    int semanas = 3;
    int dias = 7;
    float temp[3][7];

    for(int i = 0; i < semanas; i++){
        for(int j = 0; j < dias; j++){
            printf("Qual a temperatura registrada no dia %i da semana %i (em °C)?\n", j+1, i+1);
            scanf("%f", &temp[i][j]);
            soma += temp[i][j];
        }
    }

    media = (soma)/21;

    printf("Dias com a temperatura abaixo da média (%.2f °C):\n", media);

    for(int i = 0; i < semanas; i++){
        for(int j = 0; j < dias; j++){
            if(temp[i][j] < media){
                printf("%s da semana %i (%.1f°C)\n", diadasemana[j], i+1, temp[i][j]);
            }
        }
    }

}
