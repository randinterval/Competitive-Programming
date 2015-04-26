//============================================================================
// Problem Name : Exact Sum
// Problem URL: http://uva.onlinejudge.org/external/110/11057.html
// Author : Saad Ahmed
// Online Judge: UVA
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
#include <climits>
using namespace std;

#ifdef SAAD
ifstream fin("data.in");
#define cin fin
#endif

void compute(vector <int> &prices,int tb)
{
    int f=0,s=0;
    int diff = INT_MAX;
    for(unsigned i=0;i<prices.size();i++)
    {
        for(unsigned j=i+1;j<prices.size();j++)
        {
            if(prices[i]+prices[j]==tb)
            {
                int a = prices[i];
                int b = prices[j];
                if(b>a){std::swap(a,b);}
                if(a-b<diff)
                {
                    f=prices[i];
                    s=prices[j];
                    diff = a-b;
                }
            }
        }
    }
    prices.clear();
    if(f>s)
    {
        std::swap(f,s);
    }
    cout<<"Peter should buy books whose prices are "<<f<<" and "<<s<<"."<<endl<<endl;
}

int main(int argc,char *argv[])
{
    int q,temp,tb;
    while(cin>>q)
    {
        vector <int> prices;
        while(q-->0)
        {
            cin>>temp;
            prices.push_back(temp);
        }
        cin>>tb;
        compute(prices,tb);
    }
    return 0;
}
