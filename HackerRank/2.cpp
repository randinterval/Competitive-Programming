//============================================================================
// Problem Name : Solve me Second
// Problem URL: https://www.hackerrank.com/challenges/solve-me-second
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

int sum(int a,int b)
{
    return a+b;
}

int main(int argc,char *argv[])
{
    int n;
    cin>>n;
    int first,second;
    while(n-->0)
    {
        cin>>first>>second;
        cout<<sum(first,second)<<endl;
    }
    return 0;
}