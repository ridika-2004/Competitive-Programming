#include<iostream>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#include<iomanip>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
#include<iomanip>
#include<algorithm>
#include<numeric>
#define ll long long
using namespace std;


int main ()
{
    double arr[3];
    double sum=0;
    for(ll i=0;i<3;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    double rem = 4-sum;
    double p1 = (arr[0]*1)+(arr[1]*0.5);
    double p2 = (arr[2]*1)+(arr[1]*0.5);
    double ch = rem*1;
    double fin = ch+p1;
    if(fin>p2)
    {
        p("Yes")
    }
    else
    {
        p("No")
    }
    return 0;
}

