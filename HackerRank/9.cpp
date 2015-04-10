//============================================================================
// Problem Name : Ice Cream Parlor
// Problem URL: https://www.hackerrank.com/challenges/icecream-parlor
// Author : Saad Ahmed
// Online Judge: HackerRank
// Online Judge Username: randinterval
// Problem Type : Search
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

void printIndexes(int m,vector<int> &prices)
{
    for(unsigned i=0;i<prices.size();i++)
    {
        int diff = m-prices[i];
        for(unsigned j=i+1;j<prices.size();j++)
        {
            if(prices[j]==diff)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
}

int main(int argc,char *argv[])
{
    int cases;
    cin>>cases;
    int m,n,temp;
    vector <int> prices;
    while(cases-->0)
    {
        cin>>m;
        cin>>n;
        while(n-->0)
        {
            cin>>temp;
            prices.push_back(temp);
        }
        printIndexes(m,prices);
        prices.clear();
    }
    return 0;
}