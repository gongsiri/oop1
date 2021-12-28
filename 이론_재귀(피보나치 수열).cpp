/*************************************************************
 * �Ǻ���ġ ���� ã�� ���α׷� *
 *************************************************************/
#include <iostream>
using namespace std;
int memo[100]; //�ʹ� ������ �迭�� ����

long long fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else if (memo[n] != 0) {
        return memo[n]; // �迭�� �̹� ���� ���� ������ �� ���� �ٷ� ����
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
    cout << "0~10 ������ �Ǻ���ġ �� �׽�Ʈ" << endl;
    for (int i = 0; i <= 46; i++)
    {
        cout << "fib(" << i << ") = " << fib(i) << endl;
    }
    cout << endl;
    // 35�� 36 �Ǻ���ġ �� �׽�Ʈ
    cout << "35�� 36 �Ǻ���ġ �� �׽�Ʈ" << endl;
    cout << "fib(35) = " << fib(35) << endl;
    cout << "fib(36) = " << fib(36) << endl;
    return 0;
}