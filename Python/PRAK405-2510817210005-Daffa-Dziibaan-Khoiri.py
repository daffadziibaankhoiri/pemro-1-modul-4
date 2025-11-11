a, b = map(int, input("").strip().split())
total = 0

for i in range(1, a + 1, 1):
    jumlah_per_baris = 0

    for j in range(i,0, -1):
        print(f"({j} * {b})", end="")
        jumlah_per_baris += j * b

        if j > 1 :
            print(" + ", end="")
    print(f" = {jumlah_per_baris}")
    total += jumlah_per_baris

print(total)