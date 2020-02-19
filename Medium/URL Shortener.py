t=int(input())

for i in range(t):

    x=int(input())

    l=x

    p=''

    a='abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'

    while(x):

        b=int(x%62)

        p=a[b]+p

        x=x-b

        x=x//62

    print(p)

    print(l)