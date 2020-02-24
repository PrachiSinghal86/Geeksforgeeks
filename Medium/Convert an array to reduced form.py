t=int(input())

for i in range(t):

    n=int(input())

    arr=list(map(int,input().split()))

    a=arr[:]

    a.sort()

    for j in range(n):

        x=arr.index(a[j])

        arr[x]=j

    for k in range(n):

        print(arr[k],end=" ")

    print()