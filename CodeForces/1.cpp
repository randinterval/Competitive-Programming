//============================================================================
// Problem Name : A. Password Check
// Problem URL: http://codeforces.com/problemset/problem/411/A
// Author : Saad Ahmed
// Online Judge: CodeForces
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

void check(string s)
{
    bool valid = true;
    bool isCapital = false,isSmall = false,isDigit = false;
    if(s.length()<5)
        valid = false;
    if(valid)
    {
        for(unsigned i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                isSmall=true;
            if(s[i]>='A' && s[i]<='Z')
                isCapital = true;
            if(s[i]>='1' && s[i]<='9')
                isDigit = true;
        }
    }
    if(isCapital && isSmall && isDigit)
    {
        cout<<"Correct"<<endl;
    }
    else
    {
        cout<<"Too weak"<<endl;
    }
}

int main(int argc,char *argv[])
{
    string s;
    cin>>s;
    check(s);
    return 0;
}