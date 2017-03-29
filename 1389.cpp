#include<stdio.h>
#include<algorithm>
long long arr[105][105];
using namespace std;
int main()
{
		int n, i, j,num, k,tmp,tmp1;
		int idx=0,sum,answer;
		scanf("%d %d", &n,&num);
		for(i=1;i<=n;i++)
				for(j=1;j<=n;j++)
						arr[i][j]=99999999;
		for(i=0;i<num;i++)
		{
				scanf("%d %d",&tmp,&tmp1);

				arr[tmp][tmp1]=1;
				arr[tmp1][tmp]=1;
		}
		for(k=1; k<=n; k++){
				for(i=1; i<=n; i++)
						for(j=1; j<=n; j++){
								arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
						}
		}
		answer=99999999;
		for(i=1;i<=n;i++)
		{	
				sum=0;
				for(j=1;j<=n;j++)
				{
						if(arr[i][j]!=99999999)
								sum+=arr[i][j];
				}
				if(sum<answer)
				{
						answer=sum;
						idx=i;
				}
		}
		printf("%d",idx);
		return 0;

}
