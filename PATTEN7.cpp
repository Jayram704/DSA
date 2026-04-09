#include <bits/stdc++.h>
int main()
{
	using namespace std ;
	int n;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		for(int j =0;j<=i;j++){
			cout<<i+1;
			if(j!= i){
				cout<<"*";
			}
		
		}
		cout<<endl;
	}
	for(int i =n-1;i>=0;i--)
	{
		for(int j =0;j<=i;j++){
			cout<<i+1;
			if(j!= i){
				cout<<"*";
			}
		
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	cout<<"aman";
	return 0;
}
