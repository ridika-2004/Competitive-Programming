#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class BinaryHeap{
    public:
        BinaryHeap()
        {
            currentsize = 0;
        }
        bool empty()
        {
            return currentsize==0;
        }
        int size()
        {
            return currentsize;
        }
        T top()
        {
            if(empty())
            {
                throw runtime_error("Heap is empty!!");
            }
            else
            {
                return arr[0];
            }
        }

        bool insert(T const &val)
        {
            arr.push_back(val);
            currentsize++;
            percolateUp();
            return true;
        }
        bool erase()
        {
            if(empty())
            {
                throw runtime_error("Heap is empty!!");
                return false;
            }
            arr[0] = arr.back();
            arr.pop_back();
            currentsize--;
            percolateDown();
            return true;
        }

        void decrease_key(int p, int k)
        {
            if(p<0 && p>=currentsize)
            {
                throw out_of_range("Out of range!!");
            }
            arr[p]-=k;
            percolateDown();
        }
        void increase_key(int p, int k)
        {
            if(p<0 && p>=currentsize)
            {
                throw out_of_range("Out of range!!");
            }
            arr[p]+=k;
            percolateUp();
        }

        void heap_sort()
        {
            int n = currentsize;
            for(int i=(n/2)-1;i>=0;i--)
            {
                heapify(n,i);
            }
        }


    private:
        int currentsize;
        vector<T> arr;

        void heapify(int n, int i)
        {
            int maxx = i;
            int left = (2*i)+1;
            int right = (2*i)+2;

            if(left<n && arr[left]>arr[maxx])
            {
                maxx = left;
            }
            if(right<n && arr[right]>arr[maxx])
            {
                maxx = right;
            }
            if(maxx!=i)
            {
                swap(arr[i],arr[maxx]);
                heapify(n,maxx);
            }
        }

        void percolateUp()
        {
            int index = currentsize-1;
            while(index >0 && arr[(index-1)/2] <arr[index])
            {
                swap(arr[(index-1)/2], arr[index]);
                index = (index-1)/2;
            }
        }

        void percolateDown()
        {
            int index =0;
            while((2*index)+1< currentsize)
            {
                int child = (2*index)+1;
                if(child +1<currentsize && arr[child+1] > arr[child])
                {
                    child++;
                }
                if(arr[index]>=arr[child])
                {
                    break;
                }
                swap(arr[index],arr[child]);
                index = child;
            }
        }

};
