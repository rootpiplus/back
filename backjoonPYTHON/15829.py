L = int(input())
s = input()

r = 31
M = 1234567891

hash_value = 0
power = 1

for i in range(L):
    a_i = ord(s[i]) - ord('a') + 1
    hash_value = (hash_value + a_i * power) % M
    power = (power * r) % M

print(hash_value)
