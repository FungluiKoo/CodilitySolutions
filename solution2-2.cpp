#include <algorithm>
#include <vector>

int solution(std::vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::sort(A.begin(), A.end());
    for(size_t i=0; i<A.size(); i+=2){
        if(A[i+1]!=A[i]){
            return A[i];
        }
    }
    return 0;
}
