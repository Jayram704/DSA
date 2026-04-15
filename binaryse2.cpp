#include<bits/stdc++.h>
#include<vector>
using namespace std ;
binary_search(vector<int> v , int trget){
    int end = v.size() - 1, start = 0 ;
    int  mid = start +(end - start)/2,ans=-1;
        while(end>=start){
            mid = start +(end - start)/2;
            if (v[mid]== trget){
                ans= mid;
                end=mid-1;
            }
            else if (v [mid]<=trget){
                start = mid +1;
            }
            else {
                end = mid -1;
            }
        }
        return ans ;
}
int main(){
    vector<int> v = {1,2, 3, 4 , 4, 4, 5, 6, 7, 8, 9, 10};
    int trget = 5;
    int index = binary_search(v, trget);
    cout << index << endl;
    
    return 0;
}