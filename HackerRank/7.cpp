//============================================================================
// Problem Name : Angry Proffessor
// Problem URL: https://www.hackerrank.com/challenges/angry-professor
// Author : Saad Ahmed
// Online Judge: HackerRank
// Online Judge Username: randinterval
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

void checkClassStatus(int min,vector <int> & arrival)
{
    int pcount=0;
    for(unsigned i=0;i<arrival.size();i++)
    {
        if(arrival[i]<=0)
            pcount++;
    }
    if(pcount>=min)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

int main(int argc,char *argv[])
{
    int cases;
    int n,k;
    int temp;
    vector <int> arrival;
    cin>>cases;
    while(cases-->0)
    {
        cin>>n;
        cin>>k;
        while(n-->0)
        {
            cin>>temp;
            arrival.push_back(temp);
        }
        checkClassStatus(k,arrival);
        arrival.clear();
    }
    return 0;
}