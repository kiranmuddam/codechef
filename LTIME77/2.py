def GetInversions(arr, n,k): 
	invcount = 0
	for i in range(n): 
		for j in range(i + 1, n): 
			if (arr[i] > arr[j]): 
				invcount += 1

	return invcount
t=int(input())
for i in range(0,t):
    n,k = map(int, raw_input().split())
    nsp=[int(i) for i in raw_input().split()]
    nsp=nsp*k
    np = len(nsp) 
    print(GetInversions(nsp, np,k)) 