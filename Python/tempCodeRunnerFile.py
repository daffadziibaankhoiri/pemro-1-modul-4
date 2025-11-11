inputan = input("").strip().split()

angka = int(inputan[0])
karakter = inputan[1]


for i in range(1, 51, 1):
    if i % angka == 0 :
        print(karakter, end=" ")
    else :
        print(i, end=" ")
     



