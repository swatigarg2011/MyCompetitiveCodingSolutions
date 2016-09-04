#include<bits/stdc++.h>
using namespace std;
int calc(int c[])
{
	int i=0,nz=0;
	while(i<6)
	if(c[i++]>0)nz++;
	return nz;
}

int main()
{
	int T,N,points,winner,i,j,cook,num,c[6],nonz,tie,pointp,hcf,p;
	cin>>T;
	while(T--)
	{
		winner=1;
		cin>>N;
		nonz=tie=0;
		points=pointp=cook=0;
		for(i=0;i<N;i++)
		{
			
			points=0;
			c[0]=c[1]=c[2]=c[3]=c[4]=c[5]=0;
			cin>>cook;
			
			for(j=0;j<cook;j++)
			{
				cin>>num;
				c[num-1]++;
			}
			points+=cook;
			nonz=calc(c);
			
			while(nonz>=4)
			{
				p=(nonz==6)?4:(nonz==5)?2:1;
				hcf=100;
				for(j=0;j<6;j++)
				{
					if(c[j]>0&&c[j]<hcf)hcf=c[j];
				}
				points+=p*hcf;
				for(j=0;j<6;j++)c[j]-=hcf;
				nonz=calc(c);
			
			}
			if(points>pointp){
			winner=i+1;tie=0;pointp=points;}
			else if(points==pointp)tie=1;
			
		}
		if(tie==1)cout<<"tie"<<endl;
		else {if(winner==1)cout<<"chef"<<endl; else cout<<winner<<endl;}
		
		
		
	}
	return 0;
}
