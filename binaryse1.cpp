#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int binarysearch(int arr[], int size, int target){

    int start = 0;
    int end = size - 1;
    int mid= start + (end-start)/2;
    while(start<=end){
        mid= start + (end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] < target){
            start = mid+1;
            
        }
        else {
            end= mid -1;
        } 
        
    }
    return -1 ;
}
int main(){
    
int nums[] = {1,2,3,4,7,8,9};
int size = 7; 
int target = 7;
int indexoftarget = binarysearch(nums, size, target);
if (indexoftarget ==-1){
    cout<<"target not found";
}
else{
    cout << "The index of the target is: " << indexoftarget << endl;
}
    return 0;
}