#include <bitset>
#include <vector>

#define N 100001

int solution(std::vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size(), result=1;
    std::bitset<N> cnt;
    cnt.reset();  
    for(int i : A){
        if(i<1 || i>n || cnt.test(i)){
            result = 0;
            break;
        }else{
            cnt.set(i);
        }
    }
    return result;
}