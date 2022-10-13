#include<iostream>
using namespace std;

int mountain(int arr[],int size){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={5,8,10,12,1};
    cout<<"The index is of pear element is "<<mountain(arr,4)<<endl;
    return 0;
}