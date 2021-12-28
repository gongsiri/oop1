#include<iostream>
using namespace std;

//void For_each(int* begin, int* end, void (*pf)(int)) {
//	while (begin != end) 
//		pf(*begin++);
//}
template<typename T, typename Func>
void For_each(T begin, T end, Func pf) {
	while (begin != end)
		pf(*begin++);
}

//void PrintInt(int n) {
//	cout << n << " ";
//}
//void PrintString(string n) {
//	cout << n << " ";
//}

template<typename T>
void Print(T n) {
	cout << n << " ";
}

int main() {
	int arr[5] = { 1,2,-9,5,3 };
	string sarr[3] = { "abc","abcdef","hi" };
	//FOr_each(arr,arr+5,PrintInt);
	For_each<int*, void(*)(int)>(arr,arr+5,Print<int>); // 타입을 알려준다.
	cout << endl;
	For_each<string*,void(*)(string)>(sarr, sarr + 3, Print<string>);
	cout << endl;
	return 0;
}

