//============================================================================
// Problem Name : 3n+1
// Problem URL: http://uva.onlinejudge.org/external/1/100.html
// Author : Saad Ahmed
// Online Judge: randinterval
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

long long  compute(long long  i)
{
    long long count=0;
    while(i!=1)
    {
        if(i%2!=0)
        {
            i = 3*i+1;
        }
        else
        {
            i = i/2;
        }
        count++;
    }
    return count+1;
}

long long  computeCycle(long long  start,long long  end)
{
    if(start>end)
        std::swap(start,end);
    long long  count=0;
    for(int i=start;i<=end;i++)
    {
        count = std::max(count,compute(i));
    }
    return count;
}

int main(int argc,char *argv[])
{
    long long  f,s;
    while(cin>>f>>s)
    {
        cout<<f<<" "<<s<<" ";
        cout<<computeCycle(f,s)<<endl;
    }
    return 0;
}
