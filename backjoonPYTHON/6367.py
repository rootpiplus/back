import math

print("n e")
print("- -----------")

e_approx = 0.0
for i in range(10):
    e_approx += 1 / math.factorial(i)
    if i == 0:
        print(f"{i} {1}")
    elif i == 1:
        print(f"{i} {2}")
    else:
        print(f"{i} {e_approx:.9f}")
