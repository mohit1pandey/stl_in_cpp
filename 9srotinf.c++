    //sorting in descending order
   //as the maps and the sets are implemented by bst therse are not serquential containers
   // we cannot directitly perform the sort operation #include <iostream>
#include<iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    std::set<int> s = {4, 2, 5, 1, 3};

    // Copy elements of set to a vector
    std::vector<int> v(s.begin(), s.end());

    // Sort the vector using std::sort
    std::sort(v.begin(), v.end());

    // Clear the set and insert sorted elements from the vector
    s.clear();
    s.insert(v.begin(), v.end());

    // Print sorted elements in the set
    for (auto x : s) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}

