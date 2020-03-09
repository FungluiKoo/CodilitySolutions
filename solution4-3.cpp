#include <algorithm>
#include <vector>

int solution(std::vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::sort(A.begin(), A.end());
    int result = 1;
    auto p = std::equal_range(A.begin(), A.end(), 1);
    if(*(p.first)>1){
        result = 1;
    }else{
        while(*(p.second)==*(p.first)+1){
            p = std::equal_range(p.second, A.end(), *(p.second));
        }
        result = *(p.first)+1;
    }
    return result;
}