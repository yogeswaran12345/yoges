ww=input().split()
a=int(ww[0])
b=int(ww[1])
c=int(ww[2])
if ((a >0) and(a >c)):
	largest= a
elif ((b >a) and (b >c)):
	largest= b
else:
	largest= c
	
print(largest)
	
