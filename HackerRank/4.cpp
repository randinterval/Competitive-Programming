//============================================================================
// Problem Name : Utopian Tree
// Problem URL: https://www.hackerrank.com/challenges/utopian-tree
// Author : Saad Ahmed
// Online Judge: HackerRank
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


//This function will calculate growth and output the height after n cycles 
void COG(vector <int> &input, vector <int> &output)
{

    for(unsigned i=0;i<input.size();i++)
    {
        for(int k=1;k<=input[i];k++)
        {
            if(k%2==0)
            {
                output[i]+=1;   
            }
            else
            {
                output[i]*=2;
            }
        }
    }
    for(auto & i : output)
    {
        cout<<i<<endl;
    }
}

int main(int argc,char *argv[])
{
    int n;
    cin>>n;
    vector <int> input;
    vector <int> output;
    output.assign(n,1);
    int temp;
    while(n-->0)
    {
        cin>>temp;
        input.push_back(temp);
    }
    COG(input,output);
    return 0;
}