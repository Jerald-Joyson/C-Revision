#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s) {
        stack<char> stk;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            } else {
                if (stk.empty()) {
                    return false;
                }
                char temp1 = stk.top();
                if ((temp1 == '(' && c == ')') ||
                    (temp1 == '[' && c == ']') ||
                    (temp1 == '{' && c == '}')) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        return stk.empty();
    }

int main(){

    bool temp = isValid("(){}}{"); // should return false
    bool temp1 = isValid("(){}[]"); // should return true
    bool temp2 = isValid("(}"); // should return false
    bool temp3 = isValid("{()}"); // should return true
    bool temp4 = isValid("){");
    bool temp5 = isValid("]"); // should return false
    

    cout<<temp<<endl;
    cout<<temp1<<endl;
    cout<<temp2<<endl;
    cout<<temp3<<endl;
    cout<<temp4<<endl;
    cout<<temp5<<endl;

    return 0;
}

















/*


#include <iostream>
#include <string>
#include <stack>
using namespace std;


bool isValid(string s) {
        
        bool result=false;
        stack<char> stk;
        if(s == "" || s.length() == 1 || s[0] == ')' || s[0] == ']' || s[0] == '}'){
            result = false;
        }else{
            for(int i = 0; i < s.length(); i++){       
                if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                    stk.push(s[i]);
                    continue;
                }
                else {
                    if(!stk.empty()){
                        char temp1 = stk.top();
                        char temp2 = s[i];
                        if((temp1=='(' && temp2==')') || (temp1=='[' && temp2==']') || (temp1=='{' && temp2=='}')){
                            stk.pop();
                            continue;
                        }
                    }
                    else{
                        result = false;
                        break;
                    }
                    
                }
            }
            if(stk.empty()){
                result = true;
            }else{
                result = false;
            }       
        }
        return result;
    }

int main(){

    bool temp = isValid("(){}}{");
    bool temp1 = isValid("(){}[]");
    bool temp2 = isValid("(}");
    bool temp3 = isValid("{()}");
    bool temp4 = isValid("){");
    

    cout<<temp<<endl;
    cout<<temp1<<endl;
    cout<<temp2<<endl;
    cout<<temp3<<endl;
    cout<<temp4<<endl;

    return 0;
}


 if(s[i+1]==')'){
                    result=true;
                    continue;
                }
                else{
                    result=false;
                    break;
                }
            }
            else if(s[i]=='['){
                if(s[i+1]==']'){
                    result=true;
                    continue;
                }
                else{
                    result=false;
                    break;
                }
            }
            else if(s[i]=='{'){
                if(s[i+1]=='}'){
                    result=true;
                    continue;
                }
                else{
                    result=false;
                    break;
                }
            }


            else if(!stk.empty()){
                result=false;
                break;
            }
*/