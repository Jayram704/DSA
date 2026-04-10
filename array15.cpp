#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int main(){
    cout<<"enter the number's for vector"<<endl;
    int n ;
    cin>>n;
    vector <int> arr(n);
    for(int i = 0 ; i<arr.size();i++){
        cin>>arr[i];

    }
    for(int i = 0 ; i<arr.size();i++){
        for(int j= i+1 ; j<arr.size();j++){
            for(int k = j+1 ; k<arr.size();k++){
                for(int z = k+1 ; k<arr.size();k++){
                    if(arr[i] +arr[j]+ arr[k] +arr[z]==10){
                        cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[z];
                    }
                }

            }
        } 
    }
    return 0;
}