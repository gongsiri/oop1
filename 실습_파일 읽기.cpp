#include<iostream>
#include<fstream>
using namespace std;

int main() {

	//#2 파일 읽기
	ifstream inFile;
	inFile.open("new_file.txt");

	if (!inFile.is_open()) {
		cout << "파일을 여는 데 실패했습니다." << endl;
		return 0;
	}

	char c;
	while (inFile.get(c)) {  // cin -> inFile로 바뀜
		cout.put(c);
	}

	//string 으로 바꾸려면
	string list[10];
	char tmp[100];
	int index = 0;
	while (inFile.getline(tmp, 100)) {
		list[index] = tmp; //string 배열에 값을 넣는 부분
		index++;
	}
	for (int a = 0; a < 10; a++) { //내가 만든 string 배열에 잘 들어갔나?? 확인하는 부분
		cout << list[a] << endl;
	}

	inFile.close();
	return 0;
}