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


int lowestsetbit(int &num) {
    if (num == 0) return 0;
    int res = num & (-num);
    return res;
}


void clearlowestbit(int &num){
    num = num & (num-1);
}

int extractlowestbit(int &num) {
    if (num == 0) return 0;
    return num & (-num);
}


void clearsfromlsbtoith(int &num, int &i) {
    num = num & ~((1 << (i + 1)) - 1);
}


void clearsfrommsbtoith(int &num, int &i) {
    num = num & ~((1 << i) - 1);
}


void convertlowercase(char &c){
    c = c|' ';
}


void convertuppercase(char &c){
    c = c&'_';
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
    clearlowestbit(num);
    p((int)num)
    p(extractlowestbit(num))
    clearsfromlsbtoith(num, pos);
    p(num)
    clearsfrommsbtoith(num,pos);
    p(num)
    char c = 'A';
    convertlowercase(c);
    p(c)
    convertuppercase(c);
    p(c)
    return 0;
}