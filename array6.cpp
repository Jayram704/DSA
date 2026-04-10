#include <bits/stdc++.h>
using namespace std;
void max(int arr[],int size, int maxnum){
	for (int i = 0;i<size; i++){
		if(arr[i]>maxnum){
			maxnum=arr[i];
		}
	}
	cout<<maxnum<<"  maximun"<<endl;
}
void min(int arr[],int size, int minnum){
	for (int i = 0;i<size; i++){
		if(arr[i]<minnum){
			minnum=arr[i];
		}
	}
	cout<<minnum<<"  minmun"<<endl;
}
int main (){
	int arr[13]={-12,-34,-54,-6,-673,-4,-6554,-46,-7,-67,-824,-7,-1} , size = 13 , maxnum =INT_MIN , minnum=INT_MAX;
	max(arr, size , maxnum);
	min(arr, size , minnum);
}
