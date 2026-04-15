#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std ;
int main(){
    
int arr[]= {1,2,3,4,5,6,7,8,9};
    sort(arr.begin(), arr.end());
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}