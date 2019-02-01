Num=int(raw_input())
abb=list(map(int,(raw_input()).split()))
c=0
b=[]
for i in range(0,len(abb)-1):
	if int(abb[i+1])>=int(abb[i]):
		c=c+1
	else:
		b.append(c)
		c=0
print(max(b)+1)
