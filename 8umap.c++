#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
unordered_map<string,int> m1;

m1={{"mohit",50},{"tiwari",40},{"rinku",70},{"tara",30}};

/*to find a value*/
for(auto it:m1){
    cout<<it.second<<" ";
}
cout<<m1["mohit"];

/* to insert */
m1.insert({"loki",80});
cout<<" "<<m1.size();


return 0;
}
