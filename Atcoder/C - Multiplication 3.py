# Concept used: errors in multiplication of large float no.
# ' By Anki '

a, b = input().split()
a = int(a)
b = int(b.replace('.', ''))
print(a * b // 100)
