n = int(input())
for i in range(0 ,n):
    word = input()
    if len(word) > 10:
        new_word = word[0] + str(len(word[1:-1])) + word[-1]
        print(new_word)
    else: 
        print(word)
    