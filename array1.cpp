#include<bits/stdc++.h>
int main(){
	using namespace std;
	int arr[100];
	int n;
	cout<<"enter how many number you want in array"<<endl;
	cin>>n;
	cout<<"enter the num's";
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"double";
	for (int i = 0; i<n ;i++){
			cout<<arr[i]*2<<" ";

	}
	return 0;
}
