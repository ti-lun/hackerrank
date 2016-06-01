# THIS PASSED YEAH!!!  Success rate: ~75%

for i in range(int(input())):
    print_no = 1
    xy = [int(x) for x in input().split()]  # make the containing grid
    x= xy[0]
    y =xy[1]
    grid = []
    for down in range(x):
        grid.append(input())
    

    wl = [int(x) for x in input().split(' ')]  # make the inner grid
    w, l  = wl[0], wl[1]
    inner_grid = []
    for down in range(w):
        inner_grid.append(input())


    outer_count = 0
    right_index = 0
    down_index = 0

    for down in range(x):
        count = 0        
        if outer_count != 0:
            for r in range(right_index, right_index + l):
                if inner_grid[down_index][count] == grid[down][r]:
                    count += 1
                    
        if inner_grid[0] in grid[down]:  # how would I translate this into C++??
            right_index = grid[down].find(inner_grid[0]) 
            for r in range(right_index, right_index + l):
                if inner_grid[0][count] == grid[down][r]:
                    count += 1
                else:
                    break
                
        if (count > 0 and count % l == 0):
            outer_count += 1
            down_index += 1              

        else:
            outer_count = 0
            down_index = 0

        if outer_count == w:
            print('YES')
            print_no = 0
            break

    if print_no == 1:
        print('NO')
