a,b=input().split(' ')
count=0
for i in range(len(a)):
	if(a[i]!=b[i]):
		count=count+1
if(count==1):print yes
else: print no
