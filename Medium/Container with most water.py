t=int(input())

for i in range(t):

	n=int(input())
    
	max=0
    
	arr=list(map(int,input().split()))
    
	for j in range(int(n/2)+1):
        
		for k in range(int(n/2)+1):
            
			m=(n-k-1-j)*min(arr[k],arr[n-j-1])
            
			if max<m:
                
				max=m
    
	print(max)
            
        