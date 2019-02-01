def coin(m,l,t):
	kmm=1
	cd=0
	s=0
	l.sort(reverse=True)
	for i in range(m):
		while(s<t):
			s=s+l[i]
			cd=cd+1
	print(cd)

def main():
	n=int(input())
	t=int(input())
	l=[]
	for i in range(m):
		l.append(int(input()))
	coin(m,l,t)
main()
