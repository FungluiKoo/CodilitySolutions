#include <vector>

std::vector<int> solution(std::vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    std::vector<int> result;
    if(!A.empty()){
        for(size_t i=A.size()-K%A.size(); i<A.size(); i++){
            result.push_back(A[i]);
        }
        for(size_t i=0; i<A.size()-K%A.size(); i++){
            result.push_back(A[i]);
        }
    }
    return result;
}