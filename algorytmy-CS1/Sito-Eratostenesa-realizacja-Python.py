# --- przedział wyłaniania liczb pierwszych ---
start = 10  # minimum 2
stop = 100

tab = [True] * (stop + 1)

for i in range(2, stop + 1):
    if tab[i]:
        for j in range(i + i, stop + 1, i):
            tab[j] = False

print("Liczby pierwsze z podanego przedziału:")

for i in range(start, stop + 1):
    if tab[i]:
        print(i, end=" ")

print()
