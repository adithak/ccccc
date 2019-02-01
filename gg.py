m=int(input())
nar=[]
for i in range(m):
    narr.extend(input().split())
nar=[int(x) for x in narr]
nar.sort()
for i in nar: print(i,end=" ")
