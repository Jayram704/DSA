#include <bits/stdc++.h>
using namespace std;
int main (){
	int arr [9]= {5,3,656,742,74,8,7,6,67}  , size =  9 , start = 0 , end = size -1;
	for (int i =0; i<size;i++){
			
		if (start == end){
			break;
			}
		int swap = arr[start];
		arr[start]=arr[end];
		arr[end]=swap;
		start = start +1 ;
		end = end -1;
		//cout<<arr[i]<<endl ;
		
	}
	for(int i =0 ; i<size ;i++){
		cout<<arr[i]<<endl ;
	}
	return 0;
}
