#include <stdio.h>

void main()
{
	int K,N,i;
	int arr[N];
	int sum=0;
	scanf("%d",&N);
	for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&K);
	for(i=1; i<=K; i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
