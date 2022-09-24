#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
    // Empty Set
    set<int> miSet;

    miSet.insert(2);
    miSet.insert(2);
    miSet.insert(3);
    cout << miSet.size() << endl;
    cout << miSet.count(2) << endl;
    cout << miSet.max_size() << endl;

    // cout
    for(auto& str: miSet)
    {
        std::cout << str << ' ';
    }


    // Set with values
    set<int, greater<int>> set3 = {6, 10, 5, 1};
    // set3 = {10, 6, 5, 1}




    // empty set container
    set<int, greater<int> > s1;

    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());

    // print all elements of the set s2
    /*
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (int *itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
    */

    return 0;
}
