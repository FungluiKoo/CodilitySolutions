#include <bitset>
#include <vector>

#define N 100000

int solution(int X, std::vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::bitset<N> arr, ok;
    for(int i=0; i<X; i++){
        ok.set(i);
    }
    for(size_t t=0; t<A.size(); t++){
        arr.set(A[t]-1);
        if(arr==ok){return t;}
    }
    return -1;
}