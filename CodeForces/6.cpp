//============================================================================
// Problem Name : A. Tavas and Nafas
// Problem URL: http://codeforces.com/contest/535/problem/A
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

string digits[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
string ll[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
string tens[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

void printS(int num)
{
    if(num>=0 && num<=9)
    {
        cout<<digits[num]<<endl;
    }
    else if(num>=10 && num<=20)
    {
       cout<<ll[num-10]<<endl;
    }
    else if(num==30 || num==40 || num==50 ||
            num==60 || num==70 || num==80 || num==90)
    {
        num = num/10;
        cout<<tens[num]<<endl;
    }
    else
    {
        string ok = "";
        int fd = num/10;
        int sd = num%10;
        cout<<tens[fd]<<"-"<<digits[sd]<<endl;
    }
}

int main(int argc,char *argv[])
{
    int num;
    cin>>num;
    printS(num);
    return 0;
}