#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m;
	
	int T;
	cin>>T;
	while (T--)
	{
		cin>>n;
		long long int a[n]={0};
		long long int b[n];

		for (long long int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int j=0, k=n-1;
		for(int i=0; i<n; i++){
			if (a[i]%2==0)
			{
				b[j]=a[i];
				j++;
			}else
			{
				b[k] = a[i];
				k--;
			}	
		}
		for (size_t i = 0; i < n; i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<"\n";
		
	}	
}