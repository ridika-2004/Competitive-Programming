#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    //printf("%lld", t);
    for(int i=1;i<=t;i++){
        long long n,k;
        scanf("%lld %lld", &n, &k);
        long long ans =0;
        for(long long j=2;j<=n;j++){
            ans = (ans+k)%j;
        }

        printf("case %d: %lld\n", i, ans+1);

    }
    return 0;
}