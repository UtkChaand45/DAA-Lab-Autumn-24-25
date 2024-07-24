#include <bits/stdc++.h>
using namespace std;


void Sort1(vector<int>& arr,int z,int o, int t){
    for(int i = 0; i < (int)arr.size(); i++){
        if(i>=o+t){
            arr[i] = 2;
        }
        else if(i>=z){
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
        }
    }
}

void sortArr(vector<int>& arr,int n){
    int low = 0, mid = 0, high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

void printArr(vector<int> arr){
    for(int i = 0; i < (int)arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int zero = 0;
    int one = 0;
    int two = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;

        }
        else{
            two++;
        }
    }
    Sort1(arr,zero,one,two);
    printArr(arr);
    
}