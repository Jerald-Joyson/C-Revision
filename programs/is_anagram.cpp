// find the two strings have same chars or not;

#include <bits/stdc++.h>

using namespace std;

void display(unordered_map<char,int> m){
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<", ";
    }
    cout<<endl;
}
bool is_anagram(string s, string t) {
        if(s.size()!=t.size()){return false;}
        
        unordered_map<char,int> s_un,t_un;

        for(int i = 0; i<s.size();i++){
            s_un[s[i]]++;
            t_un[t[i]]++;
        }

        for(auto x : s_un){
            if(t_un.find(x.first) == t_un.end()){return false;}
            if(x.second != t_un[x.first]){return false;}
        }

        return true;
    }

// bool is_anagram(string s, string t) {
//     unordered_map<char,int> uns,unt;

//     if(s.size() != t.size()){
//         return false;
//     }

// // for(int i=0;i<s.size();i++){
// //             uns[s[i]]++;
// //             unt[t[i]]++;
// //         }

//     for(char c : s){
//         uns[c]++;
//     }
//     for(char c : t){
//         unt[c]++;
//     }
//     // if(uns.size() != unt.size()) {
//     //     return false;
//     // } 

//     for(auto x : uns){
//         char a = x.first;
//         int b = x.second;

//         if(unt.find(a) == unt.end()){
//             return false;
//         }

//         int c = unt[a];

//         if(b!=c){return false;}

//     }

//     return true;

// }

int main()  {
    string s = "hello";
    string t = "elloh";
    

    if(is_anagram(s,t)){
        cout<<"Strings are anagrams."<<endl;
    }else{
        cout<<"Strings are not anagrams."<<endl;
    }
    
    return 0;
}
