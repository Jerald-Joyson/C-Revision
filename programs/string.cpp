#include <iostream>
#include <string>
#include <unordered_set>
 
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    cout<<s<<endl;

    unordered_set<char> ch;


    for (int i=0; i<s.length(); i++){
        char temp = s[i];

        if(temp == ' ' || ch.find(temp)!=ch.end()){
            continue;
        }

        int count = 0;
        for (int j=0; j<s.length(); j++){
            if(temp==s[j]){
                count++;
            }
        }

        ch.insert(temp);

        cout<<temp<<" "<<count<<endl;
    }

    return 0;
}