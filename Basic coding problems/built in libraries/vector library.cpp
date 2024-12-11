#include <iostream>
#include <stdexcept>
#define cap 10000
using namespace std;
template <typename T>
class myVector{
    private:
    T arr[cap];
    int size;
    public:
    myVector(){
        for(int i=0;i<cap;i++){
            arr[i]=T();
        }
        size=0;
    }
    bool vecEmpty(){
        return size==0;
    }
    bool vecFull(){
        return size==cap;
    }
    int vecSize(){
        return size;
    }
    void vecClear(){
        size=0;
    }
    T* vecBegin(){
        return arr;
    }
    T* vecEnd(){
        return arr+size;
    }
    T vecFront(){
        if(vecEmpty()){
            return T();
        }
        return arr[0];
    }
    T vecBack(){
        if(vecEmpty()){
            return T();
        }
        return arr[size-1];
    }
    T vecAt(int pos){
        if(vecEmpty()){
            return T();
        }
        if(pos<0 || pos>size-1){
            return T();
        }
        return arr[pos];
    }
    int vecCount(T val){
        int count=0;
        if(vecEmpty()){
            return 0;
        }
        for(int i=0;i<size;i++){
            if(arr[i]==val){
                count++;
            }
        }
        return count;
    }
    int vecFind(T val){
        if(vecEmpty()){
            return -1;
        }
        for(int i=0;i<size;i++){
            if(arr[i]==val){
                return i;
            }
        }
        return -1;
    }
    void vecPushBack(T val){
        if(vecFull()){
            cout<<"Vector is full!!"<<endl;
            return;
        }
        arr[size] = val;
        size++;
    }
    void vecPopBack(){
        if(vecEmpty()){
            cout<<"Vector is empty!!"<<endl;
            return;
        }
        size--;
    }
    void vecPushFront(T val){
        if(vecFull()){
            cout<<"Vector is full!!"<<endl;
            return;
        }
        size++;
        for(int i=0;i<size-1;i++){
            arr[i+1]=arr[i];
        }
        arr[0] = val;
    }
    void vecPopFront(){
        if(vecEmpty()){
            cout<<"Vector is empty!!"<<endl;
            return;
        }
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    void vecRemove(T val){
        if(vecEmpty()){
            cout<<"Vector is empty!!"<<endl;
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
    void vecErase(int pos){
        if(vecEmpty()){
            cout<<"Vector is empty!!"<<endl;
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
    void vecReverse() {
    for (int i=0,j=size-1;i<j;i++,j--) {
            T t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    void print(){
        if(vecEmpty()){
            cout<<"Vector is empty!!"<<endl;
            return;
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    myVector<string> v;
    v.vecPushBack("This");
    v.vecPushBack("is");
    v.vecPushBack("a");
    v.vecPushBack("custom");
    v.vecPushBack("vector");
    v.vecPushBack("library/class");
    //v.vecPopBack();
    //v.vecPopFront();
    v.print();
    return 0;
}