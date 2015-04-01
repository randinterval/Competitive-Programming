//============================================================================
// Problem Name : Lonely Integer
// Problem URL: https://www.hackerrank.com/challenges/lonely-integer
// Author : Saad Ahmed
// Online Judge: HackerRank
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

int main(int argc,char *argv[])
{
    int n;
    cin>>n;
    int temp;
    map <int,int> myMap;
    while(n-->0)
    {
        cin>>temp;
        myMap[temp] = ++myMap[temp];
    }
    for(auto it=myMap.begin();it!=myMap.end();++it)
    {
        if(it->second==1)
        {
            cout<<it->first<<endl;
        }
    }
    return 0;
}