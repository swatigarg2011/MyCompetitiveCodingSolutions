#include<stdio.h>

int main()
{
	int T=0,n1,n0,i,r;
	char N[100003];
		scanf("%d",&T);
	if(T<=50)
	while(T--)
	{
		i=0;
		n0=n1=r=0;
		scanf("%s",N);
		while(N[i]!='\0')
		{
		if(N[i]=='0')n0++;
		else n1++;
		i++;
		}
	//	printf("n0 %d n1 %d",n0,n1);
		if(n0==1||n1==1)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
