#include <iostream>
#include<string.h>
using namespace std;
#define num 1000000007

long long int gcdcal(long long int x,long long int y)
{
	
	while(x!=y)
	{
		if(x>y)
		x-=y;
		else
		y-=x;
	}
	return x;
	
}
int main() {
	long long int t,n,prod,a,res,i,j,arr[100001],k;
	cin>>t;
	while(t>0)
	{
		memset(arr,0,sizeof(arr));
		prod=1;
		cin>>n;
		for(i=0;i<n;i++)
		{
		cin>>arr[i];
		prod=(prod*arr[i])%num;
		}
		for(i=0;i<n;i++)
		{	
			
			for(j=i+1;j<n;j++)
			{
			if(i+1<n)
			res=arr[i];
			else
			res=1;
				for(k=i+1;k<=j;k++)
				{
				res=gcdcal(res,arr[k]);
				if(res==1)
				break;
				}

			prod=(prod*res)%num;	
			}
			
			
		}
		cout<<prod<<endl;
		t--;
	}
	return 0;
}