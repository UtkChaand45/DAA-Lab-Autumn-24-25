#include <bits/stdc++.h>
using namespace std;

int insertionSortInner(vector<int>& arr,int pos,int key){
    if(pos<0){
        return 0;
    }
    if(arr[pos]<=key){
        return pos + 1;
    }
    else{
        arr[pos+1] = arr[pos];
    }
    return insertionSortInner(arr,pos-1,key);

}

void insertionSort2(vector<int>& arr,int n, int pos){
    if(pos==n){
        return;
    }
    //int j = pos-1;
    int key = arr[pos];
    pos = insertionSortInner(arr,pos-1,key);
    arr[pos] = key;
    insertionSort2(arr,n,pos+1);
}




void insertionSort1(vector<int>& arr,int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int cur = arr[i];
        while(j>=0 && arr[j]>cur){
                arr[j+1] = arr[j];
                j = j - 1;
        }
        arr[j+1] = cur;
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
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //insertionSort1(arr,n);
    insertionSort2(arr,n,1);
    printArr(arr);
}