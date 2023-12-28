#include <bits/stdc++.h>
using namespace std;

int main()
{   
    // type - 1 : just initialize data type into the vector and its size is 0
    // vector<int> v; 

    // type - 2 : in v we initialize size
    // vector<int> v(5); 
    
    // type - 3 : in v we initialize size and value
    //  vector<int> v(5,10); 
    //  for(int i=0; i<v.size(); i++)
    //  {
    //     cout << v[i] <<" ";
    //  }
    //  cout <<"\n" << v.size() << endl;


    // type - 4 : in v we copy value from v2
    //  vector<int> v2(5,10); 
    //  vector<int> v(v2); 
    //  for(int i=0; i<v.size(); i++)
    //  {
    //     cout << v[i] <<" ";
    //  }
    //  cout <<"\n" << v.size() << endl;

    // type - 5 : vector initialize 
    // vector<int> v={2, 10, 3};

    // type - 6 : copy from array
     int a[6] = {1, 2, 3, 4, 5, 6};
     vector<int> v(a, a+6); 
     for(int i=0; i<v.size(); i++)
     {
        cout << v[i] <<" ";
     }
     cout <<"\n" << v.size() << endl;

    return 0;
}