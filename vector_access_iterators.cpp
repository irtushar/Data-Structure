#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    //vector<int> :: iterator it;
    // cout << v[v.size()-1];
    // cout << v.back(); // last element

    // cout << v[0]; // first element 
    // cout << v.front();

    for(auto it=v.begin(); it<v.end(); it++)
    {
        cout << *it <<" ";
    }
    return 0;
}