#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int main(){
    
    int arr [3][3]={{12,32,43},
                    {0,1,3},
                    {2,3,4}};
    for (int i =0 ; i<3;i++){
          for (int j =0 ; j<3;j++){
            cout<<arr[i][j];
          }
          cout<<endl;
    }
    return 0;
}