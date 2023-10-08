#include<iostream>
#include<array>
#include<algorithm>
using namespace std;


int main(){
array<int,5>a1; // yhi pe size mention karo
a1={10,20,30,40,50};

for(auto it : a1){
    cout<<it;
}
cout<<" "<<a1.at(2);

cout<<" "<<a1.back();
cout<<" "<<a1.size();
cout<<" "<<a1.end();

    return 0;
}
//here it is iterator
// note the begin() and the end() returns  the beggining and the ending addressess

