#include <stdio.h>
#include <stdlib.h>

int main(){

    int input1,input2,angka1, angka2;

    scanf("%d %d", &input1, &input2);

    angka1 = input1;
    angka2 = input2;
    int berhenti = abs(input1 - input2) + 1;
    for(int i=0; i < berhenti; i++){
        
        if(input1 > input2){
            printf("%d %d", angka1, angka2);
            if (i < berhenti - 1)
            {
                printf(" - ");
            }
            
            angka1--;
            angka2++;
        }else{
            printf("%d %d", angka1, angka2);
             if (i <     berhenti - 1)
            {
                printf(" - ");
            }
            angka1++;
            angka2--;
        }      
    }
    return 0;
}