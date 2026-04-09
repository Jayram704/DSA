#include <bits/stdc++.h>
int main()
{
	using namespace std ;
	int n;
	cin>>n;
	for(int i =0;i<n;i++)
	{	
		for (int j=1;j<i;j++){
			char ch='A'+j-1;
			cout<<ch;	
		}
		
		for (int j=i;j>0;j--){
			char ch='A'+j-1;
			cout<<ch;	
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	cout<<"aman";
	return 0;
}
