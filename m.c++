#include<iostream>
#include <set>
using namespace std;


int main(){
set<int>s1;
s1={21,50,71,94,33,65};
for(auto it=s1.begin();it!=s1.end();it++){
cout<<*it;
}

    return 0;
}