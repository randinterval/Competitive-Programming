//============================================================================
// Problem Name : CryptoAnalysis
// Problem URL: http://uva.onlinejudge.org/external/100/p10008.pdf
// Author : Saad Ahmed
// Online Judge: UVA
// Online Judge Username: randinterval
// Problem Type : DSA Application - Hash Tables/Maps
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
#include <iterator>
using namespace std;

#ifdef SAAD
ifstream fin("data.in");
#define cin fin
#endif




template <class _A, class _B, class _Compare=less<_A> >
class MMap : public set < pair< _A, _B >, _Compare >
{
        public :
                MMap():set< pair< _A, _B >, _Compare >(){};
                ~MMap(){};
};

template< typename InPair >
struct MMapComp{
        bool operator() (InPair a , InPair b){
                
                if( a.second > b.second ) 
                {
                    return true;
                }
                else if(a.second<b.second)
                {
                        return false;
                }
                else return a.first<b.first;
        }
};

void check(string temp)
{
    std::map <char,int> myMap;
    for(char i='A';i<='Z';i++)
    {
        myMap[i]=0;
    }
    for(unsigned i=0;i<temp.length();i++)
    {
        if(temp[i]>='a' && temp[i]<='z')
        {
            myMap[toupper(temp[i])] = myMap[toupper(temp[i])]+1;
        }
        else if(temp[i]>='A' && temp[i]<='Z')
        {
            myMap[temp[i]] = myMap[temp[i]]+1;
        }
    }
    stack <string> myStack;

    MMap<char,int,MMapComp< pair<char , int > > > test;
    for (std::map<char,int>::iterator it=myMap.begin(); it!=myMap.end(); ++it)
  {
      if(it->second==0)
        continue;
      else
        test.insert(make_pair(it->first,it->second));      
  }
    
    for( MMap<char,int >::iterator it = test.begin(); it != test.end(); it++ )
    {
             cout << (*it).first << " " << (*it).second << endl;
    }

}

int main(int argc,char *argv[])
{
    int cases;
    string temp;
    cin>>cases;
    string main;
    cin.ignore();
    while(cases-->0)
    {
        getline(cin,temp);
        main+=temp;
    }
    check(main);
    return 0;
}
