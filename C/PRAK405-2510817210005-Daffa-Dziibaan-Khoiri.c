#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    int total = 0;

    for (int i = 1; i <= a; i++) {
        int jumlah_baris = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, b);
            jumlah_baris += j * b;
            
            if (j > 1) {
                printf(" + ");
            }
        }
        
        printf(" = %d\n", jumlah_baris);
        total += jumlah_baris;
    }
    printf("%d\n", total);
    return 0;
}