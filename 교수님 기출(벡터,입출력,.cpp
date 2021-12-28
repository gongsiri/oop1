#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>

using namespace std;
class Student {
// Ŭ���� �ۿ����� ����� �� �ְ� friend�� ����
private:
	string name;
	int mid;
	int quiz;
	int fin;
	int total;
public:
	Student() {  //�ʱ�ȭ ������
		this->name = ""; // ���� �̸� ���� �� �� ������� this ���
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

istream& operator>>(istream& i, Student& student) { // ��ü�� cin�� �� ���⿡ �����ε� �ʿ�
	cout << "�̸�(�������) �߰�, ����, �⸻ ������ �Է��ϼ��� : ";
	string name;
	int mid, quiz, fin;
	i >> name >> mid >> quiz >> fin; // i�� cin�� �Ȱ��� ����
	student = Student(name, mid, quiz, fin); // s�� ������ �۵�
	cout << "�л� ������ �ùٸ��� �ԷµǾ����ϴ�." << endl;
	return i;
}

int main() {
	vector<Student> students; // Ŭ���� Student���� �� ���� students ���� -> ���� ����� ���� �ű� ������ ������ ���� �ʿ�
	int c;
	while (c != 4) {
		cout << "========== �޴� ==========" << endl;
		cout << "1. ���� �Է� " << endl;
		cout << "2. ��ü ����" << endl;
		cout << "3. ��ü ���� ����" << endl;
		cout << "4. ���α׷� ����" << endl;
		cout << "------------------------------------------" << endl << endl;

		cout << "���ϴ� �۾��� ��ȣ�� �Է��ϼ��� : ";
		try {
			cin >> c;
			if (c == 1) {
				Student s; // ��ü ���� 
				cin >> s; // ���� ������ �����ε����� �ö󰡼� �����
				students.push_back(s); // students ���� �ڿ� ��ü s ����
			}
			else if (c == 2) {
				cout << "              =�����б� ����=          " << endl;
				cout << left << setw(8) << "�й�" << setw(8) << "�̸�" << setw(8) << "�߰�" << setw(8) << "����" << setw(8) << "�⸻" << setw(8) << "����" << endl;
				// �������� ���̰� 8�� ������ ���� ����
				double average = 0;

				for (int index = 0; index < students.size(); index++) {
					cout << left << setw(8) << index << setw(8) << students[index].GetName() << setw(8) << students[index].GetMid() << setw(8) << students[index].GetQuiz() << setw(8) << students[index].GetFinal() << setw(8) << students[index].GetTotal() << endl;
					average = average + students[index].GetTotal(); // ��հ��� ���ϱ� ���� �ϴ� ������ ������ �����ش�.
				}
				average = average / students.size(); // students.size == �л� ��
			     
				cout << endl << "��ü ��� : " << fixed << setprecision(2) << average << endl; // �Ҽ��� 2��°���� ������
			}
			else if (c == 3) {
				try {

					ofstream ost("test.txt");
					ost << "              =�����б� ����=          " << endl;
					ost << left << setw(8) << "�й�" << setw(8) << "�̸�" << setw(8) << "�߰�" << setw(8) << "����" << setw(8) << "�⸻" << setw(8) << "����" << endl;
					double average = 0;
					for (auto i = 0; i < students.size(); i++) {
						ost << left << setw(8) << i << setw(8) << students[i].GetName() << setw(8) << students[i].GetMid() << setw(8) << students[i].GetQuiz() << setw(8) << students[i].GetFinal() << setw(5) << students[i].GetTotal() << endl;
						average = average + students[i].GetTotal();
					}
					average = average / students.size();

					ost<<endl<< "��ü ��� : " << fixed << setprecision(2) << average << endl;
					cout << "�ؽ�Ʈ ������ ����Ǿ����ϴ�." << endl;
				}
				catch (...) {
					cout << "���� ���忡 �����߽��ϴ�." << endl;
				}

			}
			else if (c == 4) {

			}
			else {
				throw "�ùٸ� �Է��� ���ּ���";
			}
			cout << endl;

		}
		catch (const char* e) {
				cout << e << endl;
		}
	}
	return 0;
}