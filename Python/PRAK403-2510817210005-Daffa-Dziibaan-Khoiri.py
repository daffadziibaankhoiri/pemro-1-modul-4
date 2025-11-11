input1, input2 = map(int, input("").strip().split())

angka1 = input1
angka2 = input2
berhenti = abs(input1 - input2) + 1

for i in range(0, berhenti, 1):
    if input1 > input2 :
        print(f"{angka1} {angka2}", end=" ")
        if i < berhenti- 1 :
            print(" - ", end="")

        angka1 -= 1
        angka2 += 1
    else :
        print(f"{angka1} {angka2}", end="")
        if i < berhenti - 1 :
            print(" - ", end="")

        angka1 += 1
        angka2 -= 1
