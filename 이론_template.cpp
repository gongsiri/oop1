#include<iostream>
using namespace std;
// 함수 탬블릿
template<typename T>
void add(T n1, T n2) {
	cout << n1 + n2 << endl;
}
//void add(int n1, int n2) {
//	cout << n1 + n2 << endl;
//}
//void add(char n1, char n2) {
//	cout <<static_cast<char>(n1+n2)<< endl;
//}
//void add(double n1, double n2) {
//	cout << n1 + n2 << endl;
//}
int main() {
	add<int>(3, 7);
	add<int>(-9, 11);
	add<std::string>("abc", "def"); // 읽기 전용이라 string으로 명시해줘야 함
	add<char>('A', '2'); // 캐스팅 일어남
	add<double>(9.3, 2.11);
	return 0;
}