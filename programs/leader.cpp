// find the leader in the array ie right side of the number must be smaller than the current no:
// eg: [2,14,7,3,2,5,3] => [14,7,5,3]
// eg: [3,5,15,3,8,9,4,7]=>[15,9,7]



#include <bits/stdc++.h>

using namespace std;

vector<int> leaders(vector<int> arr,int n){
    vector<int> v = arr;
    return v;
}

int main(){
    vector<int> arr[] = {2,14,7,3,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v = leaders(arr,n);
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}