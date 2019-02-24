#include <stdio.h>
void main()
{
    int sum=0;
    int i;
    int n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
    	sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
