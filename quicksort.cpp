#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){

     int pivot= arr[s];
     int cnt=0;

     for(int i=s+1;i<=e;i++){
        if(arr[i] <=pivot){
            cnt++;
        }
     }

     //place pivot at right index
     int pivotIndex=s+cnt;
     swap(arr[pivotIndex],arr[s]);


     //left aur right wale ko sambhalo
    int i=s,j=e;

     while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j++;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j++]);
        }
     }
     return pivotIndex;
}

void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    //partition karenge
    int p=partition(arr,s,e);

    //left part sort karo
    quicksort(arr,s,p-1);

    //right wala sort karo
    quicksort(arr,p+1,e);   

}

int main()
{
int arr[6]={1,5,3,2,6,9};
int n=6;

quicksort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}

//sc --> O(n);
//tc --> O(nlogn);

//worstcase tc --> O(n^2)