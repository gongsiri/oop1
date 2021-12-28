#include<iostream>
using namespace std;
// special
class Point {
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {
	}
	void print() const { std::cout << x << ", " << y << endl; }
};

template<typename T>
void print(T a) {
	std::cout << a << endl;
}

//Ư�� ���ø� - �����ε� �ʿ� x
template<>
void print(Point a) {
	a.print();
}

int main() {
	int n1 = 5;
	double n2 = 9.1;
	Point p1(100, 200);

	print(n1);
	print(n2);
	print(p1); //std::cout << p1 ������ �����ε� �ȵ�����

	return 0;
}