#include<bits/stdc++.h>
#include<vector>
using namespace std ;
void printsum(int arr[][3],int n , int m ){
    for (int i =0 ; i<3;i++){
        int elementsum =0;
          for (int j =0 ; j<2;j++){
            elementsum = elementsum + arr[j][i];
            
        }
        cout<<elementsum;
          cout<<endl;
    }
}
void searchkey( int arr[][3],int key ){
    for (int i =0 ; i<3;i++){
        
          for (int j =0 ; j<2;j++){
            if (arr[i][j]==key){
                cout<<"key found";
            }
            
        }
       
    }
}
int main(){
    
    int arr [2][3]={{0,12,3},{2,3,4}};
    int r = 2, c = 3 ;
    int key ;
    cout<< "enter the kay "<<endl;
    
    cin >>key;
        //printsum(arr,2,3);
    searchkey (arr, key);
    return 0;
}