#include <stdio.h>

int main(){

    
    char karakter;
    int angka;


    scanf("%d %c", &angka, &karakter);
    
    for (int i = 1; i <= 50; i++){
        
        if(i % angka == 0){
            printf("%c ", karakter);
        }else{
            printf("%d ", i);
            
        }
    }
    return 0;
}