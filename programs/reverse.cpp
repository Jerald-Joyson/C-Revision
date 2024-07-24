
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <utility>


using namespace std;

string revWord(string s ){
    reverse(s.begin(),s.end());
    return s;
}


pair<string, int> revString(string str){
    stringstream ss(str);
    string word;
    string rev;
    int count=0;
    while(ss >> word){
        string revword = revWord(word);
        rev=rev+revword+" ";
        count++;
    }

    return make_pair(rev, count);  

}


int revInt(int n){

    int rev = 0;
    while(n!=0){    
        int temp = n%10;
        rev = rev*10+temp;
        n=n/10;
    }
    return rev;


}
int main(){
    string str;
    int num;

    cout<<"Enter the string: ";
    getline(cin,str);
    auto revStr = revString(str);
    cout<<"reversed string word by word: ";
    cout<<revStr.first<<endl;
    cout<<"number of words in the above string: ";
    cout<<revStr.second<<endl;

    cout<<"Enter the number: ";
    cin>>num;
    int revNum = revInt(num);
    cout<<revNum<<endl;


    return 0;
}