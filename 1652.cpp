#include<cstdio>
#include<iostream>
using namespace std;
char arr[105][105];
int main()
{
	int cnt=0,cnt1=0,tmp1=0,tmp2=0,i,j,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
				cin>>arr[i][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]=='.')
					tmp1++;
			else
					tmp1=0;
			if(tmp1==2)
					cnt++;
			if(arr[j][i]=='.')
					tmp2++;
			else
					tmp2=0;
			if(tmp2==2)
					cnt1++;
		}
		tmp1=0;
		tmp2=0;
	}
		printf("%d %d",cnt,cnt1);
}
