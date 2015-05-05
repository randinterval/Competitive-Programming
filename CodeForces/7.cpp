//============================================================================
// Problem Name : 
// Problem URL: 
// Author : Saad Ahmed
// Online Judge: CodeForces
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

int main(int argc,char *argv[])
{
    string fnum;
    string snum;
    int count = 0;
    int limit;
    cin>>limit>>fnum>>snum;
    for(unsigned i=0;i<fnum.length();i++)
    {
        int n = fnum[i]-'0';
        int s = snum[i]-'0';
        int fn = std::max(n,s);
        int sn = std::min(n,s);
        if(fn-sn!=0)
            count += fn-sn-1;
    }
    cout<<count<<endl;
    return 0;
}
