/*************************************************************
 * 피보나치 수를 찾는 프로그램 *
 *************************************************************/
#include <iostream>
using namespace std;
int memo[100]; //너무 느려서 배열을 만듦

long long fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else if (memo[n] != 0) {
        return memo[n]; // 배열에 이미 계산된 값이 있으면 그 값을 바로 리턴
    }
    else
    {
        memo[n] = (fib(n - 2) + fib(n - 1));
        return memo[n];
        // return (fib(n - 2) + fib(n - 1));
    }
}
int main()
{
    cout << "0~10 범위의 피보나치 수 테스트" << endl;
    for (int i = 0; i <= 46; i++)
    {
        cout << "fib(" << i << ") = " << fib(i) << endl;
    }
    cout << endl;
    // 35와 36 피보나치 수 테스트
    cout << "35와 36 피보나치 수 테스트" << endl;
    cout << "fib(35) = " << fib(35) << endl;
    cout << "fib(36) = " << fib(36) << endl;
    return 0;
}