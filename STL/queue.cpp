#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
    queue<int> miQueue;
    stack<int> miStack;

    miQueue.push(2);
    cout << miQueue.front() << endl;
    miQueue.pop();
    miQueue.empty();
    miQueue.front();
    miQueue.back();
    miQueue.size();

    miStack.push(2);
    cout << miStack.top() << endl;
    miStack.pop();
    miQueue.empty();
    miQueue.front();
    miQueue.size();
    return 0;
}
