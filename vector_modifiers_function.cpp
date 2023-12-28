#include <bits/stdc++.h>
using namespace std;

int main()
{   

    // type - 1 : assign value
    // vector <int> x = {10, 20, 30, 40};
    // vector <int> v = {1, 2, 3};
    // v = x; // O(N)
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout << v[i] <<" ";
    // }

    // type - 2 : pop back which will delete left side value one by one 
    // vector <int> x = {10, 20, 30, 40};
    // x.pop_back();
    // for(int i=0; i<x.size(); i++)
    // {
    //     cout << x[i] <<" ";
    // }

    // type - 3 : insert
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> v2 = {101, 102, 103, 104, 105};

    // v.insert(v.begin()+2, v2.begin(), v2.end());
    // for(int x : v) // only value
    // {
    //     cout << x <<" ";
    // }

    // // type - 4 : erase
    // vector<int> v = {1, 2, 3, 4, 5};
    // //v.erase(v.begin()+3); // single value erase
    // // v.erase(v.begin()+1, v.begin()+4); // multiple value erase
    // v.erase(v.begin()+1, v.end()-1); // multiple value erase with end 
    // for(int x : v) // only value
    // {
    //     cout << x <<" ";
    // }
    

    // // type - 5 : replace
    // vector<int> v = {1, 2, 3, 4, 5, 2, 2, 3, 4, 2, 5, 2 ,6};
    // replace(v.begin(), v.end(), 2, 100);
    // for(int x : v) // only value
    // {
    //     cout << x <<" ";
    // }

    // type - 6 : find
    vector<int> v = {1, 2, 3, 4, 5, 2, 2, 3, 4, 2, 5, 2 ,6};
    // vector<int> :: iterator it;
    auto it = find(v.begin(), v.end(), 17);
    if(it == v.end()) cout << "Not Found";
    else cout << "Found";
    return 0;
}