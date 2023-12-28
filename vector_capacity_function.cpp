#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    // type - 1 : maximum size 
    // cout << v.max_size() << endl;

    // type - 2 : add new value use push_back()
    // cout << v.capacity() << endl; // capacity 0
    // v.push_back(10);
    // cout << v.capacity() << endl; // capacity 1
    // v.push_back(20);
    // cout << v.capacity() << endl; // capacity 2
    // v.push_back(20);
    // cout << v.capacity() << endl; // capacity 4 cause it double when it exit it capacity

    // type - 3 : value clear not delete
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear(); // whole data will be clear
    // cout << v.size() << endl;
    // // for(int i=0; i<v.size(); i++)
    // // {
    // //     cout << v[i] <<" ";
    // // } 
    // cout << v[3] << endl;

    // type - 4 : resize the data
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.resize(3); // here first 3 data is receive
    v.resize(7,100);
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] <<" ";
    } 
    
    return 0;
}