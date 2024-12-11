#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
#define m(x) cout<<x<<" ";
#define p(x) cout<<x<<endl;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<double> v(n);
        vector<double>a;
        for(double i=1;i<100000;i+=2){
            a.push_back(i);
        }
        double sum=0,c=0,j=1;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            double x = sqrt(sum);
            if(binary_search(a.begin(),a.end(),x)){
                c++;
            }
        }
        p(c)
    }
    return 0;
}