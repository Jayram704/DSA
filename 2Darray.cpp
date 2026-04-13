#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int findmin(int arr[][3],int col, int row){
    int mini = INT_MAX;
    for (int i =0 ; i<2;i++){
          for (int j =0 ; j<3;j++){
            if (arr[i][j]<mini){
                mini=arr[i][j];
            }
          }
         
    }
    return(mini);
}
int findmax(int arr[][3],int col, int row){
    int maxi = INT_MIN;
    for (int i =0 ; i<2;i++){
          for (int j =0 ; j<3;j++){
            if (arr[i][j]>maxi){
                maxi=arr[i][j];
            }
          }
         
    }
    return(maxi);
}
int main(){
    
    int arr [3][3]={{17,9,5},{10,1,3},{2,3,4}};
    int col = 3, row= 3;
    int maxi=findmax(arr, col, row );
    cout<<maxi<<endl;
    int mini = findmin(arr,col,row);
    cout<<mini;
    return 0;
}