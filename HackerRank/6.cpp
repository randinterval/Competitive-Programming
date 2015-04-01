//============================================================================
// Problem Name : Cut the Sticks
// Problem URL: https://www.hackerrank.com/challenges/cut-the-sticks
// Author : Saad Ahmed
// Online Judge: HackerRank
// Online Judge Username:  randinterval
// Problem Type : Adhoc/Implementation
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
#include <climits>
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
    int n,temp;
    vector <int> lengths;
    cin>>n;
    while(n-->0)
    {
        cin>>temp;
        lengths.push_back(temp);
    }
    while(1)
    {
        int min = *min_element(lengths.begin(),lengths.end());
        int cuts = 0 ;
        for(unsigned i=0;i<lengths.size();i++)
        {
            if(lengths[i]>0 && lengths[i]!=INT_MAX)
            {
                lengths[i] = lengths[i] - min;
                cuts++;
            }
            if(lengths[i]<=0)
            {
                lengths[i]= INT_MAX;
            }
        }
        cout<<cuts<<endl;
        bool done = true;
        for(unsigned i=0;i<lengths.size();i++)
        {
            if(lengths[i]!=INT_MAX)
                done = false;
        }
        if(done)
            return 1;
    }
    return 0;
}