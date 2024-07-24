#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
        vector<int> p(prices);
        vector<int>::iterator it;
        int length = prices.size();
        int pos;
        int sm=99999;
        int lg=0;
        for(int i = 0;i<length;i++){
            if(sm<p[i]){
                continue;
            }
            sm=p[i];
            
        }
        it = find(p.begin(),p.end(), sm);
        if (it != p.end()) 
        {
            pos = it - p.begin();
        }
        for(int i = pos;i<length;i++){
            if(lg>p[i]){
                continue;
            }
            lg=p[i];
            
        }
        int re=lg-sm;
        if(re<0){
            re=0;
        }

        return re;
    }

int main(){
    vector<int> prices = {2,4,1};
    cout<<maxProfit(prices);
    cout<<endl;
    return 0;
}