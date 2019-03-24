def rev(a):
	b=""
	index=len(a)
	while index>0 :
		b=b+str[ index - 1 ]
		index=index-1
	return b
print(rev("preethi"))
