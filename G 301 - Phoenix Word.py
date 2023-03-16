def phoenix_word(words):
    letters = []
    for word in words:
        letters.append(min(word))
    letters.sort()
    return ''.join(letters)
n = int(input())
words = []
for i in range(n):
    words.append(input())
print(phoenix_word(words))
