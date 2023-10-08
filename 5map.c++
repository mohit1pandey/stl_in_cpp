#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
map<int,string>m1;
m1={{10,"mohit"},{20,"tiwari"},{30,"tara"},{40,"Rinku"}};

 m1.insert(make_pair(11, "loki"));
 m1.insert({100,"naval"});   // do like this
for(auto it:m1){
cout<<" "<<it.second;

}

cout<<m1[20]<<" ";   // 20 maps to the second index;
    return 0;
}