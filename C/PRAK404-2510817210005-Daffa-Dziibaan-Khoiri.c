#include <stdio.h>
#include <stdlib.h>
int main(){


    int pilihan;
    float nilai_1;
    float nilai_2;
    float hasil;
    char *operasi;
    do{
        printf("\nPilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if(pilihan == 5){
        printf("Terima kasih sudah menggunakan kalkulator DAFFA DZIIBA'AN KHOIRI");
            break;
        }
        if(pilihan < 1 || pilihan > 5){
            printf("Input anda salah, silahkan coba lagi");
            continue;
        }
        printf("Masukkan nilai pertama : ");
        scanf("%f", &nilai_1);
        
        do{
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai_2);

            if(pilihan == 4 && nilai_2 == 0){
                printf("Tidak bisa membagi angka dengan 0 silahkan input angka ulang\n\n");
                continue;
            }
        }
        while (nilai_2 == 0);
        
        

        switch (pilihan)
        {
        case 1:
            hasil = nilai_1 + nilai_2;
            operasi = "Penjumlahan";    
            break;
        case 2:
            hasil = nilai_1 - nilai_2;
            operasi = "Pengurangan";
            break;
        case 3:
            hasil = nilai_1 * nilai_2;
            operasi = "Perkalian";
            break;
        case 4:
            hasil = nilai_1 / nilai_2;
            operasi = "Pembagian";
            break;
        default:
            continue;
        }

        printf("Hasil %s antara %.2f dan %.2f adalah %.2f\n", operasi, nilai_1, nilai_2, hasil);
        continue;
    }
    while (pilihan != 5);
    
    return 0;
}