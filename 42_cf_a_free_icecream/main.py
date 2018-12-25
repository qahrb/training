line, stock = tuple(map(lambda e: int(e),input().split(" ")))
sad_kids = 0
for i in range(0, line):
    sign, amount = tuple(input().split(" "))
    amount = int(amount)
    if sign == '+': 
        stock += amount
    else:
        if stock - amount < 0:
            sad_kids += 1
        else:
            stock = stock - amount
print("{} {}".format(stock, sad_kids))