//============================================================================
// Problem Name : Project Euler #1: Multiples of 3 and 5
// Problem URL: hackerrank.com/contests/projecteuler/challenges/euler001
// Author : Saad Ahmed
// Online Judge: HackerRank
// Online Judge Username:  randinterval
// Problem Type : Maths/Implementation
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

int calSum(long int n,long int limit)
{
    return  n*(limit/n)*((limit/n)+1)/2;
}

void sumMultiples(long int n)
{
    //cout<<calSum(3,n-1)<<" "<<calSum(5,n-1)<<" "<<calSum(15,n-1)<<endl;
    cout<<calSum(3,n-1)+calSum(5,n-1)-calSum(15,n-1)<<endl;
}

int main(int argc,char *argv[])
{
    int n;
    long int temp;
    cin>>n;
    while(n-->0)
    {
        cin>>temp;
        sumMultiples(temp);
    }
    return 0;
}