//============================================================================
// Problem Name : A. Jzzhu and Children
// Problem URL: http://codeforces.com/problemset/problem/450/A
// Author : Saad Ahmed
// Online Judge: CodeForces
// Online Judge Username: randinterval
// Problem Type : Adhoc/Implementation/Data Structure
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

struct child
{
    int n;
    int candy;
};

void printOrder(int m,queue <child> &n)
{
    int lastchild = -1;
    while(!n.empty())
    {
        child ch = n.front();
        n.pop();
        ch.candy-=m;
        lastchild = ch.n;
        if(ch.candy>0)
        {
            n.push(ch);
        }
    }
    cout<<lastchild<<endl;
}

int main(int argc,char *argv[])
{
    int n,m,temp;
    queue <child> Children;
    cin>>n;
    cin>>m;
    int i=1;
    while(n-->0)
    {
        cin>>temp;
        child ch;
        ch.n = i++;
        ch.candy = temp;
        Children.push(ch);
    }
    printOrder(m,Children);
    return 0;
}