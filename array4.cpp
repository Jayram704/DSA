#include <bits/stdc++.h>
using namespace std;
bool find(int arr[],int size,int n ){
	for(int i=0;i<size;i++){
		if(arr[i]==n){
			return true ;
		}
		else{
			return false ;
		}
	}
} 
int main(){
    int arr[5]={1,32,43,4,34};
    int size = 5;
    cout<<"enter the numbre you want to find "<<endl;
    
	int n ;
	cin>>n;
	if(find(arr,size,n)){
		cout<< "found"<<endl;
		}
	else{
		cout<<"not found"<<endl;
	}
	return 0;
}
