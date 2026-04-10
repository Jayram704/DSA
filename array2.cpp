#include<bits/stdc++.h>
int main(){
	using namespace std ;
	int arr[100];
	int n;
	cin>>n;
	
	for (int i ; i<n ;i++){
		cin>>arr[i];
		
	}
	for (int i ; i<n ;i++){
		arr[i]=1;
		
	}
	for (int i ; i<n ;i++){
		cout<<arr[i]<<endl;
		
	}
	cout<<arr[99];
	
}
