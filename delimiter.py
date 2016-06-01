delimiter_str = input()
invalid_ones = []

curly = ("{", "}")
curvy = ("(", ")")
square = ("[", "]")

for d in delimiter_str:
    invalid_ones.append(d)
    if d == "}" and invalid_ones[-2] == "{":
        invalid_ones.pop()
        invalid_ones.pop()

    elif d == "]" and invalid_ones[-2] == "[":
        invalid_ones.pop()
        invalid_ones.pop()


    elif d == ")" and invalid_ones[-2] == "(":
        invalid_ones.pop()
        invalid_ones.pop()

if len(invalid_ones) != 0:
    print("False")

else:
    print("True")
