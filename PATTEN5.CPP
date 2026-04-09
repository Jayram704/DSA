#include <bits/stdc++.h>
int main()
{
	using namespace std ;
	int n;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		
		for(int j =0;j<n-i ;j++){
			cout<<" ";
		}
		for(int j=0;j<=2*i+1;j++ ){
			if(j==0){
				cout<<"*";
			}
			else if(j==2*i)
			cout<<"*";
			else{
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
		for(int i =0;i<n;i++){
			for (int j = 0; j<=i;j++){
				cout<<" ";
			}
			for (int j=0; j<2*n-2*i-1 ;j++){
				if(j==0||j==(2*n-2*i-1)-1){
					cout<<"*";
					
				}
				else {
					cout<<" ";
				}
				
			}
			cout<<endl;
		}
	cout<<"aman";
	return 0;
}
