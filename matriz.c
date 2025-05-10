#include <stdio.h>

void main(){
    char mat_a[3][3];
    mat_a[0][0] = 'a';
    mat_a[0][1] = 'l';
    mat_a[0][2] = 'o';
    mat_a[1][0] = 'i';
    mat_a[1][1] = 'k';
    mat_a[1][2] = 'i';
    mat_a[2][0] = 'b';
    mat_a[2][1] = 'c';
    mat_a[2][2] = 'd';

    for(int i = 0; i < 3; i++){
        for(int n = 0; n < 3; n++){
            printf("%c\n", mat_a[i][n]);
    }}

}
