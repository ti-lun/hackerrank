nm = [int(i) for i in input().split()]
n, m = (nm[0], nm[1])
name = input()


changes = dict()

for i in range(m):
    xiyi = input().split()
    xi, yi = (xiyi[0], xiyi[1])
    print(changes.items())

    if (xi in changes.keys()):
        changes[xi] = yi
        print(0)
    if (xi in changes.values()):
        for j in changes.items():
            if (xi == j[]):                     
                changes[j[0]] = yi

        print(1)
    if (yi in changes.keys()):
        changes[yi] = xi

        print(2)
        
    if (yi in changes.values()):
        for k in changes.items():
            if (yi == k[1]):                     
                changes[k[0]] = xi

    if (xi or yi not in changes.keys()):
        changes[xi] = yi
        changes[yi] = xi
