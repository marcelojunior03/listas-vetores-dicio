#include <stdio.h>

void main(){
    int vet_a[5];
    vet_a[0] = 10;
    vet_a[1] = 20;
    vet_a[2] = 30;
    vet_a[3] = 40;
    vet_a[4] = 53;

    for(int i = 4; i > -1; i--){
        printf("%d\n", vet_a[i]);
    }

}
