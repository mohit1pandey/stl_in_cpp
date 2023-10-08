#include<iostream>
#include<array>
#include<algorithm>
using namespace std;


int main(){
array<int,5>a1; // yhi pe size mention karo
a1={10,20,30,40,50};

sort(a1.begin(),a1.end(),greater<int>());
for(auto it: a1){
    cout<<it;
}

return 0;
}