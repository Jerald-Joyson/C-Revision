#include <iostream>
#include <unordered_set>

using namespace std;
int main(){
	int a=99;
	unordered_set<int> ch = {1,2,3,4,5};
	while(a!=0){
		cout<<"enter no";
		cin>>a;
		if(ch.find(a) != ch.end()){
			cout<<"element already exist"<<endl;
		}else{
			ch.insert(a);
			cout<<"inserted"<<endl;
		}

		for(unordered_set<int>::iterator it = ch.begin(); it != ch.end();it++){
			cout<<*it<<endl;
		}
		// for(auto x:ch){
		// 	cout<<x<<endl;
		// }
	}

	return 0;
}

