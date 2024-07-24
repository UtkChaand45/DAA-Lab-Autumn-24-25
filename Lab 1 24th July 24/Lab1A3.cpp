#include <bits/stdc++.h>
using namespace std;


vector<int> majorityElement(vector<int> arr, int n){
    int cnt1 = 0;
    int cnt2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;

    for(auto a:arr){
        if(cnt1==0 && a!=ele2){
            cnt1 = 1;
            ele1 = a;
        }
        else if(cnt2==0 && a!=ele1){
            cnt2 = 1;
            ele2 = a;
        }
        else if(a==ele1){
            cnt1++;
        }
        else if(a==ele2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }

    vector<int> ans;
    cnt1 = 0;
    cnt2 = 0;
    for(auto a:arr){
        if(a==ele1) cnt1++;
        if(a==ele2) cnt2++;
    }
    int major = (int)n/3 + 1;
    if(cnt1>=major) ans.push_back(ele1);
    if(cnt2>=major) ans.push_back(ele2);
    return ans;
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
    vector<int> majority = majorityElement(arr,n);
    printArr(majority);
    
}