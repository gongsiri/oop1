#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>

using namespace std;
class Student {
// 클래스 밖에서도 사용할 수 있게 friend로 선언
private:
	string name;
	int mid;
	int quiz;
	int fin;
	int total;
public:
	Student() {  //초기화 시켜줌
		this->name = ""; // 변수 이름 여러 개 안 만드려고 this 사용
		this->mid = 0;
		this->quiz = 0;
		this->fin = 0;
		this->total = 0;
	}
	Student(string name, int mid, int quiz, int fin) {
		this->name = name;
		this->mid = mid;
		this->quiz = quiz;
		this->fin = fin;
		this->total = mid + quiz + fin;
	}
	string GetName() const {
		return this->name;
	}

	int GetMid() const {
		return this->mid;
	}

	int GetQuiz() const {
		return this->quiz;
	}

	int GetFinal() const {
		return this->fin;
	}

	int GetTotal() const {
		return this->total;
	}
};

istream& operator>>(istream& i, Student& student) { // 객체를 cin할 수 없기에 오버로딩 필요
	cout << "이름(공백없이) 중간, 퀴즈, 기말 점수를 입력하세요 : ";
	string name;
	int mid, quiz, fin;
	i >> name >> mid >> quiz >> fin; // i는 cin과 똑같은 역할
	student = Student(name, mid, quiz, fin); // s의 생성자 작동
	cout << "학생 성적이 올바르게 입력되었습니다." << endl;
	return i;
}

int main() {
	vector<Student> students; // 클래스 Student형의 빈 벡터 students 선언 -> 여러 사람을 만들 거기 때문에 저장할 공간 필요
	int c;
	while (c != 4) {
		cout << "========== 메뉴 ==========" << endl;
		cout << "1. 성적 입력 " << endl;
		cout << "2. 전체 성적" << endl;
		cout << "3. 전체 성적 저장" << endl;
		cout << "4. 프로그램 종료" << endl;
		cout << "------------------------------------------" << endl << endl;

		cout << "원하는 작업의 번호를 입력하세요 : ";
		try {
			cin >> c;
			if (c == 1) {
				Student s; // 객체 생성 
				cin >> s; // 위에 연산자 오버로딩으로 올라가서 실행됨
				students.push_back(s); // students 벡터 뒤에 객체 s 삽입
			}
			else if (c == 2) {
				cout << "              =계절학기 성적=          " << endl;
				cout << left << setw(8) << "학번" << setw(8) << "이름" << setw(8) << "중간" << setw(8) << "퀴즈" << setw(8) << "기말" << setw(8) << "총점" << endl;
				// 왼쪽으로 붙이고 8로 일정한 간격 생성
				double average = 0;

				for (int index = 0; index < students.size(); index++) {
					cout << left << setw(8) << index << setw(8) << students[index].GetName() << setw(8) << students[index].GetMid() << setw(8) << students[index].GetQuiz() << setw(8) << students[index].GetFinal() << setw(8) << students[index].GetTotal() << endl;
					average = average + students[index].GetTotal(); // 평균값을 구하기 위해 일단 각자의 총점을 더해준다.
				}
				average = average / students.size(); // students.size == 학생 수
			     
				cout << endl << "전체 평균 : " << fixed << setprecision(2) << average << endl; // 소수점 2번째까지 보여줌
			}
			else if (c == 3) {
				try {

					ofstream ost("test.txt");
					ost << "              =계절학기 성적=          " << endl;
					ost << left << setw(8) << "학번" << setw(8) << "이름" << setw(8) << "중간" << setw(8) << "퀴즈" << setw(8) << "기말" << setw(8) << "총점" << endl;
					double average = 0;
					for (auto i = 0; i < students.size(); i++) {
						ost << left << setw(8) << i << setw(8) << students[i].GetName() << setw(8) << students[i].GetMid() << setw(8) << students[i].GetQuiz() << setw(8) << students[i].GetFinal() << setw(5) << students[i].GetTotal() << endl;
						average = average + students[i].GetTotal();
					}
					average = average / students.size();

					ost<<endl<< "전체 평균 : " << fixed << setprecision(2) << average << endl;
					cout << "텍스트 파일이 저장되었습니다." << endl;
				}
				catch (...) {
					cout << "파일 저장에 실패했습니다." << endl;
				}

			}
			else if (c == 4) {

			}
			else {
				throw "올바른 입력을 해주세요";
			}
			cout << endl;

		}
		catch (const char* e) {
				cout << e << endl;
		}
	}
	return 0;
}