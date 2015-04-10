//============================================================================
// Problem Name : A. Team Olympiad
// Problem URL: http://codeforces.com/problemset/problem/490/A
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

void printTeams(vector <int> &pr,vector <int> &mt,vector <int> &pe)
{
    vector <int> teams;
    while(!pr.empty() && !mt.empty() && !pe.empty())
    {
        teams.push_back(pr.back());
        teams.push_back(mt.back());
        teams.push_back(pe.back());
        pr.pop_back();
        mt.pop_back();
        pe.pop_back();
    }
    cout<<teams.size()/3<<endl;
    int print = 1;
    for(unsigned i=0;i<teams.size();i++)
    {
        if(print%3==0)
        {
            cout<<teams[i]<<endl;
            print++;
        }
        else
        {
            cout<<teams[i]<<" ";
            print++;
        }
    }
}

int main(int argc,char *argv[])
{
    vector <int> pr; //Programmers
    vector <int> mt; //Mathematicians
    vector <int> pe; //Phsycists
    int n;
    cin>>n;
    int temp;
    int i=1;
    while(n-->0)
    {
        cin>>temp;
        switch(temp)
        {
            case 1:
            {
                pr.push_back(i++);
                break;
            }
            case 2:
            {
                mt.push_back(i++);
                break;
            }
            case 3:
            {
                pe.push_back(i++);
                break;
            }
        }
    }
    printTeams(pr,mt,pe);
    return 0;
}