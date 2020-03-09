#include <bitset>

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    std::bitset<32> arr(N);
    int result = 0;
    int prev_1 = -1;
    for(int i=0; i<32; i++){
        if(arr.test(i)){
            if(prev_1>=0){
                result = (i-prev_1-1>result) ? i-prev_1-1 : result;
            }
            prev_1 = i;
        }
    }
    return result;
}