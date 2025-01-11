#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// int fibonacchi(int n){
//     if(n<=1){
//         return n;
//     }
//     return fibonacchi(n-1)+fibonacchi(n-2);
// }

// int nthfibonacchiutil(int n, vector<int> &v){
//     if(n<=1){
//         return n;
//     }
//     if(v[n]!=-1){
//         return v[n];
//     }
//     v[n] = nthfibonacchiutil(n-1, v)+nthfibonacchiutil(n-2,v);
//     return v[n];
// }

// int fibonacchi(int n){
//     vector<int> v(n+1,-1);
//     return nthfibonacchiutil(n, v);
// }

// int fibonacchi(int n){
//     if(n<=1){
//         return n;
//     }

//     vector<int> v(n+1);
//     v[0]=0;
//     v[1]=1;

//     for(int i=2;i<=n;i++){
//         v[i]= v[i-1]+v[i-2];
//     }

//     return v[n];
// }

// int fibonacchi(int n){
//     if(n<=1){
//         return n;
//     }
//     int res=0,prev2=0,prev1=1;
//     for(int i=2;i<=n;i++){
//         res = prev1+prev2;
//         prev2 = prev1;
//         prev1 = res;
//     }
//     

int fibonacchi(int n){
    double phi = 1.6180339;
    int f[6]= {0,1,1,2,3,5};
    if(n<6){
        return f[n];
    }
    int res = 5,t=5;
    while(t<n){
        res = round(res*phi);
        t++;
    }
    return res;
}
int main(){
    int n = 9;
    int res = fibonacchi(n);
    cout<<res<<endl;
    return 0;
}