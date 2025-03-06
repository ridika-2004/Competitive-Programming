#include<bits/stdc++.h>
using namespace std;

class hash_table{
private:
    int size;
    vector<int> v;
    int count;
    int choice;

    int getindex(int k){
        return k%size;
    }

    int linearprobingindex(int index, int attempt){
        return (index + attempt) % size;
    }

    int quadraticprobingindex(int index, int attempt){
        return (index + ((attempt+(attempt * attempt))/2)) % size;
    }

    int doublehashingindex(int index, int attempt, int k) {
        int num;
        for(int i=2;;i++){
            int gcdvalue = gcd(size,i);
            if(gcdvalue==1){
                num = i;
                break;
            }
        }
        int second_hash = num - (k % num);
        return (index + attempt * second_hash) % size;
    }

public:
    hash_table(int size, int choice){
        this->size = size;
        v = vector<int>(size, -1);
        count = 0;
        this->choice = choice;
    }

    

    void insert(int k){
        int index = getindex(k);
        int attempt = 0;
        int originalIndex = index;
        while(attempt<6){
            if(v[index]==-1){
                v[index] = k;
                count++;
                double lf = double(count)/size;
                cout<<"Inserted : Index-"<<index<<" (L.F=."<<lf<<")"<<endl;
                return;
            } else {
                attempt++;
                cout<<"Collision: Index-"<<index<<endl;

                if(choice==1){
                    index = linearprobingindex(originalIndex,attempt);
                } else if(choice==2){
                    index = quadraticprobingindex(originalIndex,attempt);
                } else {
                    index = doublehashingindex(originalIndex, attempt, k);
                }
            }
        }

        cout<<"Input Abandoned"<<endl;
    }

};

int main(){

    int choice,n,q;
    cin>>choice>>n>>q;

    hash_table h(n,choice);

    for(int i=0;i<q;i++){
        int num;
        cin>>num;
        h.insert(num);
    }

    return 0;
}