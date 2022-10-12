#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1; 

        }
        if(arr[mid]<key){   //right me jaoo
            s=mid+1;
        }
        else if(arr[mid]>key){  //left me jaooo....
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;


}

int lastOccurence(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;

        }
        if(arr[mid]<key){   //right me jaoo
            s=mid+1;
        }
        else if(arr[mid]>key){    //left me jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;


}

int main(){
    int arr[8]={1,2,3,3,3,3,4,5};
    int index = firstOccurence(arr,8,3);
    cout<<"First occourence of the element is "<<index<<endl;
    int index1 = lastOccurence(arr,8,7);
    cout<<"last occourence of the element is "<<index1<<endl;
    return 0;

}