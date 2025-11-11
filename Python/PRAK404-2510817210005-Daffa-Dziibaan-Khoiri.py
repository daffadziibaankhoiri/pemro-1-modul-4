while True :
    print(
"""

Pilih pilihan
1. Penjumlahan
2. Pengurangan
3. Perkalian
4. Pembagian
5. Exit

""")
    pilihan = int(input("Masukkan Pilihan : "))

    if pilihan == 5 :
       print('Terima kasih sudah menggunakan kalkulator DAFFA DZIIBA"AN KHOIRI')
       break

    if pilihan < 1 or pilihan > 5 :
        print("Input anda salah, silahkan coba lagi")
        continue

    nilai_pertama = int(input("Masukkan nilai pertama : "))
    

    while True :
        nilai_kedua = int(input("Masukkan nilai pertama : "))
        if pilihan == 3 and nilai_kedua == 0 :
            print("TIdak bisa membagi angka dengan 0 silahkan input angka ulang\n")
            continue
        else :
            break
    
    match pilihan :
        case 1 :
            hasil = nilai_pertama + nilai_kedua
            operasi = "Penjumlahan"
            
        case 2 :
            hasil = nilai_pertama - nilai_kedua
            operasi = "Pengurangan"
            
        case 3 :
            hasil = nilai_pertama * nilai_kedua
            operasi = "Perkalian"
            
        case 4 :
            hasil = nilai_pertama / nilai_kedua
            operasi = "Pembagian"
            
        case _:
            break


    print(f"Hasil {operasi} antara {nilai_pertama:.2f} dan {nilai_kedua:.2f} adalah {hasil:.2f}\n")
    continue

