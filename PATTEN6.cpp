#include <bits/stdc++.h>
int main()
{
	using namespace std ;
	int n;
	cin>>n;
	for(int i =0;i<=n;i++)
	{	
		for(int j= 0 ;j<=n-i;j++){
			cout<<"*";
		}
		for(int j =0;j<2*i ;j++){
			cout<<" ";
		}
		for(int j= 0 ;j<=n-i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i =1;i<=n;i++)
	{	
		for(int j= 0 ;j<=i;j++){
			cout<<"*";
		}
		for(int j =0;j<2*n-i*2 ;j++){
			cout<<" ";
		}
		for(int j= 0 ;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"aman";
	return 0;
}
