//============================================================================
// Problem Name : Service Lane 
// Problem URL: https://www.hackerrank.com/challenges/service-lane
// Author : Saad Ahmed
// Online Judge: HackerRank
// Online Judge Username: randinterval 
// Problem Type :  Adhoc/Implementation
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
#include <climits>
using namespace std;

#ifdef SAAD
ifstream fin("data.in");
#define cin fin
#endif

int main(int argc,char *argv[])
{
    int n,t;
    cin>>n;
    cin>>t;
    vector <int> width;
    int temp;
    while(n-->0)
    {
        cin>>temp;
        width.push_back(temp);
    }
    int i,j;
    for(int k=0;k<t;k++)
    {
        cin>>i>>j;
        int min=INT_MAX;
        for(int k=i;k<=j;k++)
        {
            min = std::min(min,width[k]);
        }
        cout<<min<<endl;
    }
    return 0;
}