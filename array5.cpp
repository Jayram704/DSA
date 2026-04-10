#include <bits/stdc++.h>
using namespace std;
void count(int arr[],int size ,int zeros  ,int ones  ){
	for (int i = 0 ; i< size ; i++ ){
		if (arr[i]==0){
			zeros = zeros +1;
		
		}
		else{
			ones = ones +1;
		}
	}
	cout<<"number of ones  "<<ones <<" "<<endl<<"number of zeros  "<<zeros;
}
int main (){
	int arr[15] ={0,1,0,0,1,1,0,0,0,0,0,0,1,1,1} , size =15 , zeros=0, ones=0;
	count(arr,size,zeros,ones) ;
	return 0 ;
}
