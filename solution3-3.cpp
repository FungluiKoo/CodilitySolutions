#include <algorithm>
#include <cmath>
#include <vector>

int solution(std::vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::vector<int> arr;
    int sum=0;
    for(int i : A){
        arr.push_back(sum);
        sum+=i;
    }
    int diff = (1<<31)-1;
    for(size_t i=1; i<arr.size(); i++){
        diff = (std::abs(sum-2*arr[i])<diff) ? std::abs(sum-2*arr[i]) : diff;
    }
    return diff;
}