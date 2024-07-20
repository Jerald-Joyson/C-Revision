#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);

    for(int i=0; i<str.length();i++){
        if(str[i]=='/'){
            cout<<endl;
            continue;
        }
        cout<<str[i];
    }
    cout<<endl;

    return 0;
}