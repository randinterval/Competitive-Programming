//============================================================================
// Problem Name : A. Vasya and Socks
// Problem URL: http://codeforces.com/problemset/problem/460/A
// Author : Saad Ahmed
// Online Judge: Code Forces
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

void calculateDays(int n,int m)
{
    int j=1;
    for(int i=1;i<=n;i++)
    {
        if(n<m)
        {
            continue;
        }
        else if(i%(m*j)==0)
        {
            n++;
            j++;
        }
    }
    cout<<n<<endl;
}

int main(int argc,char *argv[])
{
    int n,m;
    cin>>n>>m;
    calculateDays(n,m);
    return 0;
}