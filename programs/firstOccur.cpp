#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
        int i = 0,j = 0,z = 1,pos = -1,x = haystack.length(),y = needle.length();

        while(z == 1){  
            if(j==y){
                z=0;
                return pos-j+1;
            }
            if(i==x){
                z=0;
                return -1;
            }
            if(haystack[i] == needle[j]){
                pos = i;
                i++;
                j++;
            }
            else{
                if(j>0){
                    i = i-j+1;
                }
                j=0;
                if(haystack[i] == needle[j]){
                    pos = i;
                    i++;
                    j++;
                }else{
                    i++;
                }
            }
        }
        return pos;
    }



int main(){
    string haystack = "mississippi";
    string needle = "issip";
    cout<<strStr(haystack,needle);
    cout<<endl;
    return 0;
}













































// #include<bits/stdc++.h>
// using namespace std;

// int strStr(string haystack, string needle) {
//         int i = 0,j = 0,z = 1,pos = -1,x = haystack.length(),y = needle.length();

//         while(z == 1 ){  
//             if(i==x || j==y){
//                 z=0;
//                 return pos;
//             }
//             if(haystack[i] == needle[j]){
//                 pos = i;
//                 i++;
//                 j++;
//             }
//             else{
//                 j=0;
//                 if(haystack[i] == needle[j]){
//                     pos = i;
//                     i++;
//                     j++;
//                 }else{
//                     i++;
//                 }
//             }
//         }
//         return pos;
//     }



// int main(){
//     string haystack = "jeraldson";
//     string needle = "joy";
//     cout<<strStr(haystack,needle);
//     cout<<endl;
//     return 0;
// }