#include<iostream>
#include<unordered_set>
using namespace std;


int main(){

unordered_set<int>s;


s={1,9,7,3,4,6,7};
for(auto it=s.begin();it!=s.end();it++){

cout<<*it<<" ";
}

/* to get the size */
cout<<s.size();

/* no duplicasy */
s.insert(9);  
cout<<" "<<s.size();  // size is still same
/*for(auto it:s){
    cout<<it<<" ";
}
*/

// to clear the uset
/*s.clear();
cout<<" "<<s.size();     // size= 0;
*/
// as the uset is implemented via  hash table so we can find for any value (key) in O(1)

int key =9;
if(s.find(key)==s.end()){
cout<<"shit not found";
}
else{
    cout<<"hureeyyeyeee found";
}

// to delete key
s.erase(key);
cout<<s.size();

    return 0;
}