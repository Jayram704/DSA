#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int main(){
    vector<int> arr = {10,30,40,60,70};
    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        for(int j= i+1; j< arr.size(); j++ )
        //cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        if (element+arr[j]==70){
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    } 

    return 0;
}