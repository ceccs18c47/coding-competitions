alice = [5, 25, 50, 120]
scores = [100, 100, 50, 40, 40, 20, 10]
rank = 0
x = []
for i in scores:
    if(i == scores[scores.index(i)+1]):
        scores.pop()
#    scores.reverse()
for i in alice:
    #        print(scores,alice)
    for j in scores[::-1]:
        if(i <= j):
            rank = scores.index(j) + 1
            x.append(rank)
            print(i, rank, j)
            break
        elif(i < scores[-1]):
            rank = scores.index(scores[-1]) + 2
            x.append(rank)
            print(i, rank, j)
            break
        if(i > scores[0]):
            rank = 1
            x.append(rank)
            print(i, rank, j)
            break
# print(x)
