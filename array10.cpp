#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int findunique(vector <int> arr){
    int ans =0;
    for (int i =0 ; i<arr.size();i++)
     ans = ans ^arr[i];

    return ans ;
}
int main(){
    int n ;
    cout <<"enter the size of n "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<< "enter the element "<<endl;
    for(int i =0; i< arr.size();i++)
    cin>>arr[i];

    int uniqueElement =findunique(arr);
    cout<<"this is the unique element"<<uniqueElement;
    return 0;
}