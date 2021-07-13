#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	long long int n,m;
	long long int T, a, b;
	cin>>T;
	while (T--)
	{
		cin>>a>>b;
    	while(b%2==0){
			b=b/2;
    	}
		if(b==1){
			cout<<"Yes \n";
		}else{
			cout<<"No \n";
		}   	
	}	
	
}