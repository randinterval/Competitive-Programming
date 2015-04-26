//============================================================================
// Problem Name : Parentheses Balance 
// Problem URL: http://uva.onlinejudge.org/external/6/673.html
// Author : Saad Ahmed
// Online Judge: UVA
// Online Judge Username: randinterval
// Problem Type : Stack Application DSA
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

void validate(string input)
{
    bool valid = true;
    stack <char> myStack;
    for(unsigned i=0;i<input.length();i++)
    {
        if(input[i]=='(' || input[i]=='[')
        {
            myStack.push(input[i]);
        }
        else if(input[i]==')')
        {
            if(myStack.size()==0)
            {
                valid = false;
                break;
            }
            char c = myStack.top();
            myStack.pop();
            if(c!='(')
            {
                valid = false;
                break;
            }
        }
        else if(input[i]==']')
        {
            if(myStack.size()==0)
            {
                valid = false;
                break;
            }
            char c = myStack.top();
            myStack.pop();
            if(c!='[')
            {
                valid = true;
                break;
            }
        }
    }
    if(valid && myStack.size()==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}


int main(int argc,char *argv[])
{
    int cases;
    string temp;
    cin>>cases;
    cin.ignore();
    while(cases-->0)
    {
        std::getline(cin,temp);
        validate(temp);
    }
    return 0;
}
