def f(a):
    a = str(a)
    s = ""
    i = 0
    while i < len(a)-1:
        s += a[i+1]
        i += 1
    return s

def g(a, b):
    if (b==0):
        return a
    else:
        return f(a) + a[0]

s = "0123456789"
i = 0
while i<7:
    j = 0
    while j < 100000000:
        s = g(s, 9000000)
        j += 1
    s = g(s, 9)
    i += 1
print(s)
