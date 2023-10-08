#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){

    set<int>s1;
    s1={10,50,700,40}; //gives always sorted list as it is implemented by BST
    s1.insert(15);

    for(auto it:s1){
        cout<<it;
    }
    

    return 0;
}
