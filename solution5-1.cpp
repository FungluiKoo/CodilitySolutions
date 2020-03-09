int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    return (A>1) ? (B/K - (A-1)/K) : (B/K - (A+K-1)/K + 1);
}