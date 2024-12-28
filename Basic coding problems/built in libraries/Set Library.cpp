#include<iostream>
#include<stdexcept>
#define cap 10000
using namespace std;

template<typename T>
class mySet{
    private:
    T arr[cap];
    int size;
    public:
    mySet(){
        for(int i=0;i<cap;i++){
            arr[i]=T();
        }
        size =0;
    }
    T* setBegin(){
        return arr;
    }
    T* setEnd(){
        return arr+size;
    }
    void setClear(){
        size =0;
    }
    bool setEmpty(){
        return size==0;
    }
    int setSize(){
        return size;
    }
    int setCount(T val){
        int count =0;
        if(setEmpty()){
            return 0;
        }
        for(int i=0;i<size;i++){
            if(arr[i]==val){
                count++;
            }
        }
        return count;
    }
    int setFind(T val){
        if(setEmpty()){
            return -1;
        }
        for(int i=0;i<size;i++){
            if(arr[i]==val){
                return i;
            }
        }
        return -1;
    }
    void setRemove(T val){
        if(setEmpty()){
            cout<<"Set is empty!!"<<endl;
            return;
        }
        int newSize=0;
        for(int i=0;i<size;i++){
            if(arr[i]!=val){
                arr[newSize]=arr[i];
                newSize++;
            }
        }
        size = newSize;
    }
    void setErase(int pos){
        if(setEmpty()){
            cout<<"Set is empty!!"<<endl;
            return;
        }
        if(pos<0 || pos>size-1){
            cout<<"Invalid index"<<endl;
            return;
        }
        int newSize=0;
        for(int i=0;i<size;i++){
            if(i!=pos){
                arr[newSize]=arr[i];
                newSize++;
            }
        }
        size = newSize;
    }
    void setInsert(T val) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == val) {
                return;
            }
        }
        if (size >= cap) {
            cout << "Set is full, cannot insert more elements"<<endl;
            return;
        }
        int pos = size;
        while (pos > 0 && arr[pos - 1] > val) {
            arr[pos] = arr[pos - 1];
            pos--;
        }

        arr[pos] = val;
        size++;         
    }
    void print(){
        if(setEmpty()){
            cout<<"Set is empty!!"<<endl;
            return;
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    mySet<int> ms;
    ms.setInsert(3);
    ms.setInsert(5);
    ms.setInsert(4);
    ms.print();
    return 0;
}