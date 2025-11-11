#include <stdio.h>

int main(){

    int angka;

    scanf("%d", &angka);

    for(int i = 1; i <= angka; i++ ){
        if(i % 2 == 1){
            printf("%d ", i); 
        }
    }

    printf("\n");
    for(int i = angka; i >= 2; i-- ){
        if(i % 2 == 0){
            printf("%d ", i); 
        }
    }

    return 0;
}

