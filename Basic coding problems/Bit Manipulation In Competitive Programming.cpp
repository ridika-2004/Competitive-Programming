#include<iostream>
#define p(x) cout<<x<<endl;
using namespace std;

void set(int &num, int &pos){
    num|=(1<<pos);
}

void unset(int &num, int &pos){
    num&=(~(1<<pos));
}

void toggle(int &num, int &pos){
    num^=(1<<pos);
}

bool setorunset(int &num, int &pos){
    bool bit = num & (1<<pos);
    return bit;
}

void onescompliment(int &num){
    num = (~num);
}

void twoscompliment(int &num){
    num = (~num+1);
}

void striplastsetbit(int &num)
{
    num = num & (num-1);
}

int lowestsetbit(int &num){
    int res = num & (-num);
    return res;
}

int main(){
    int num=4,pos=1;
    set(num,pos);
    p((int)num)
    unset(num,pos);
    p((int)num)
    toggle(num,pos);
    p((int)num)
    p(setorunset(num,pos))
    onescompliment(num);
    p((int)num)
    twoscompliment(num);
    p((int)num)
    striplastsetbit(num);
    p((int)num)
    p(lowestsetbit(num))
    return 0;
}