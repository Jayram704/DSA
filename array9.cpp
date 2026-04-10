#include<bits/stdc++.h>
#
using namespace std;
int main(){
	//1
	vector<int> arr;
	int ans = (sizeof(arr)/sizeof(int));
	cout<<ans<<endl;
	cout<<arr.size()<<endl;//size is for how much element there
	cout<<arr.size()<<endl;//capacity is how much element can be store
	arr.push_back(5);
	arr.push_back(6);
	for (int i = 0;i< arr.size();i++){
		cout<<"["<<arr[i]<<"]";
		}
		cout<<endl;
	arr.pop_back();
	for (int i = 0;i< arr.size();i++){
		cout<<"["<<arr[i]<<"]";
		
	}
	cout<<endl;
	//2
	int n ;
	cout<<"enter the value of n "<<endl;
	cin>>n;
	vector <int> brr(n,100);
	cout<<brr.size()<<endl;
	cout<<brr.size()<<endl;
	for (int i = 0;i< brr.size();i++){
		cout<<"["<<brr[i]<<"]";
		
	}
	//3
	cout<<endl;
	vector <int> v(brr);//vector ke undre vector 
	cout<<brr.size()<<endl;
	cout<<brr.size()<<endl;
	for (int i = 0;i< v.size();i++){
		cout<<"["<<v[i]<<"]";
		
	}
	//4 
	vector <int> trr{1,2,3,4};
	
	
	trr.push_back(8);
	
	cout<<trr.size()<<endl;
	for (int i = 0;i< trr.size();i++){
		cout<<"["<<trr[i]<<"]";
		
	}
	cout<<endl;
	
	cout << "vector trr empty or not " << trr.empty() << endl;
	return 0;
}
