#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){

    unordered_map<int,string> umap;
    int n;
    cout<<"enter the no of elements";
    cin>>n;
    for(int i=1;i<=n;i++){
        string str;
        cout<<"enter the string";
        cin>>str;
        umap[i] = str;
    }

    // for(unordered_map<int,string>::iterator it = umap.begin(); it != umap.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    for(auto x:umap){
        cout<<x.first<<" "<<x.second<<endl;
    }

    cout<<umap[1].length()<<endl;


    return 0;
}