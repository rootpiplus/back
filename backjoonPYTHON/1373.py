Num = input()
e = {
    "000": "0", "001": "1", "010": "2", "011": "3",
    "100": "4", "101": "5", "110": "6", "111": "7"
}

# 길이 맞추기
if len(Num) % 3 != 0:
    Num = "0" * (3 - len(Num) % 3) + Num

result = []
for i in range(0, len(Num), 3):
    result.append(e[Num[i:i+3]])

print(''.join(result))
