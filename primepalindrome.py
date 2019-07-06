for num in range(2,1000):
    rev = str(num)
    k = str(num)
    rev = rev[::-1]
        if(rev == k):
        for j in range(2,num):
            if(num % j == 0):
                break
        else:
            print(num)
        
        
