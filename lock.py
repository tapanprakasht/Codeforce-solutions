n = int(raw_input())
first = int(raw_input())
second = int(raw_input())
p=0
while n>=0:
    mod1 = first % 10
    mod2 = second % 10
    r = abs(mod1-mod2)
    if r<(10-r):
        p = p+r
    else:
        p = p +(10-r)

    first = first // 10
    second = second // 10
    n=n-1

print p
