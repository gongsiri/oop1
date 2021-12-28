#include <iostream>
#include <string>
using namespace std;
template<typename T1, typename T2>
class Inha {
public:
    T1 first;
    T2 second;
    Inha(const T1& f, const T2& s):first(f),second(s){}
};
int main()
{
    //class
    Inha<int, int> i1(10, 20); // 두개를 한 짝으로 가질 수 있음
    cout << i1.first << ',' << i1.second << endl;
    pair<int, string> i2(1, "one");
    cout << i2.first << ',' << i2.second << endl;
   
    //STL
    pair<int, int> p1(10, 20); // 두개를 한 짝으로 가질 수 있음
    cout << p1.first << ',' << p1.second << endl;
    pair<int, string> p2(1, "one");
    cout << p2.first << ',' << p2.second << endl;
    return 0;
}