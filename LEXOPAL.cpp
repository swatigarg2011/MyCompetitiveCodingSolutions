#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,i,j,l;
	string str;
	cin>>T;
	while(T--)
	{
		cin>>str;
		l=str.size();
		i=0;
		j=l-1;
		while(i<=j)
		{
		
			if(str[i]=='.'&&str[j]!='.')
			str[i]=str[j];
			else if(str[i]!='.'&&str[j]=='.')
			str[j]=str[i];
			else if(str[i]=='.'&&str[j]=='.')
			str[i]=str[j]='a';
			else if(str[i]!=str[j])
			break;
			i++;j--;
			
		}
		if(i>j)cout<<str<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
	
}
