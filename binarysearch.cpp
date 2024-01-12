// #include<iostream>
// using namespace std;

// void print(int arr[],int s,int e){

//     for(int i=s;i<=e;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// bool binarySearch(int arr[],int s,int e,int k){

//     print(arr,s,e);

//     //base case
//     if(s>e)
//         return false; 

//     int mid =s+ (e-s)/2;
//     cout<<"value of arr mid is "<<arr[mid]<<endl;

//     if(arr[mid]==k)
//         return true;
      

// if(arr[mid]<k){
//     return binarySearch(arr,mid+1,e,k);
// }
// return binarySearch(arr,s,mid-1,k);
     

// }

// int main()
// {
//     int arr[]={2,4,6,10,14,18};
//     int size=6;
//     int key=18;

//     cout<<binarySearch(arr,0,5,18);

// return 0;
// }

#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}

int main()
{
    int evenArray[6]={2,4,7,5,3,0};
    int oddArray[5]={1,6,8,3,2};

    cout<<binarySearch(evenArray,6,8)<<endl;
    cout<<binarySearch(oddArray,5,6);

return 0;
}