#include <bits/stdc++.h>
int main()
{
	using namespace std ;
	int n;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		for(int j =0;j<n ;j++){
			if (j==n-i-1||i==0||j==0)
			{	cout<<"*";
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	cout<<"aman";
	return 0;
}
