#include<bits/stdc++.h>
#include<vector>
using namespace std ;
void transform (int arr[3][3],int row,int col){
    int arr_t [row][col]; 
     for (int i =0 ; i<3;i++){
          for (int j =0 ; j<3;j++){
            arr_t[j][i] = arr[i][j];
          }
          cout<<endl;
    }
    for (int i =0 ; i<3;i++){
          for (int j =0 ; j<3;j++){
            cout <<arr_t[i][j]<<" ";
          }
          cout<<endl;
}}
int main(){
    
    int arr [3][3]={{12,32,43},
                    {0,1,3},
                    {2,3,4}};
    int row= 3, col=3;

    transform(arr,row,col);
    
    
    return 0;
}