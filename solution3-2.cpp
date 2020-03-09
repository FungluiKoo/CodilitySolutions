#include <map>
#include <vector>

int solution(std::vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::map<int, char> arr;
    for(int i=1; i<=int(A.size())+1; i++){
        arr[i]=1;
    }
    for(int x : A){
        arr.erase(x);
    }
    return arr.begin()->first;
}