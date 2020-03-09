#include <vector>

std::vector<int> solution(int N, std::vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::vector<int> counters;
    for(size_t i=0; i<size_t(N); i++){
        counters.push_back(0);
    }
    int max=0;
    for(int id : A){
        if(id==N+1){ // maximum
            for(size_t i=0; i<size_t(N); i++){
                counters[i] = max;
            }
        }else{
            counters[id-1]++;
            max = (counters[id-1]>max)? counters[id-1] : max;
        }
    }
    return counters;
}