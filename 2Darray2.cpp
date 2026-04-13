#include<bits/stdc++.h>
#include<vector>
using namespace std ;
void printsum(int arr[][3],int n , int m ){
    for (int i =0 ; i<2;i++){
        int elementsum =0;
          for (int j =0 ; j<3;j++){
            elementsum = elementsum + arr[i][j];
            
        }
        cout<<elementsum;
          cout<<endl;
    }
}
int main(){
    
    int arr [2][3]={{0,12,3},{2,3,4}};
    int r = 2, c = 3 ;
    printsum(arr,2,3);
    return 0;
}