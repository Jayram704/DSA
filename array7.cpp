#include <bits/stdc++.h>
using namespace std;
int main (){
	int arr [9]= {5,3,656,742,74,8,7,6,67}  , size =  9 , start = 0 , end = size -1;
	for (int i =0; i<size;i++){
		if (start>end){
			break ;}
		if (start == end){
			cout<<arr[start]<<endl;
			break;
		}
		cout<< arr[start]<<endl;
		cout<<arr[end]<<endl;
		start = start +1 ;
		end = end -1;
		
				
	}
}
