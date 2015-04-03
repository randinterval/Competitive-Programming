//============================================================================
// Problem Name : A. Forgotten Episode
// Problem URL: http://codeforces.com/problemset/problem/440/A
// Author : Saad Ahmed
// Online Judge: CodeForces
// Online Judge Username: randinterval
// Problem Type : Adhoc
//============================================================================
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <iomanip>
#include <limits>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include <cmath>
using namespace std;

#ifdef SAAD
ifstream fin("data.in");
#define cin fin
#endif

void printMissed(vector <int> & arr)
{
    std::sort(arr.begin(),arr.end());
    for(unsigned i=0;i<arr.size()-1;i++)
    {
        if(arr[i]+1!=arr[i+1])
        {
            cout<<arr[i]+1<<endl;
            return;
        }
    }
    if(arr[arr.size()-1]!=(int)arr.size()+1)
    {
        cout<<arr.size()+1<<endl;
        return;
    }
    if(arr[0]==2)
    {
        cout<<"1"<<endl;
        return;
    }
    if(arr[0]==1)
    {
        cout<<"2"<<endl;
        return;
    }
}

int main(int argc,char *argv[])
{
    int n,temp;
    vector <int> arr;
    cin>>n;
    while(n-->1)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    printMissed(arr);
    return 0;
}