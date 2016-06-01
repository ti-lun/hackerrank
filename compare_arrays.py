options_array1 = []

for i in range(629):
    options_array1.append(input())

for i in range(629):
    if (input() != options_array1[i]):
        print("ok,", i, options_array1[i])
        print("nope :(")
        break
