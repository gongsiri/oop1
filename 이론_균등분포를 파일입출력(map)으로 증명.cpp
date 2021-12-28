// �޸��� Ʈ������ ���� ��������� �յ������ �����϶�
// ����������� ����ؼ� csv ���Ϸ� �������� �Ѵ�.
// ���̽� ��ųʸ�? Ű, ��� == map<k, v>
#include<random>
#include<fstream>
#include<map>

using namespace std;
int main() {
	random_device rd;
	mt19937 gen(rd());
	//uniform_int_distribution<int> dis(1, 99);
	normal_distribution<double> dis(50, 10); //���Ժ���

	map<int, int> m;
	for (auto i = 0; i < 1000000; ++i) {
		//int rnd = dis(gen); // ���� �߻� 1~99
		int rnd = static_cast<int>(dis(gen));
		// 99, 99, 3
		++(m[rnd]); // 99 : 2, 3 : 1
	}
	ofstream of("test.csv");
	for (auto i = 1; i <= 99; ++i) 
		of << i << "," << m[i] << endl;
	return 0;
} // ��Ʈ�� ���� �յ��ǥ�� �����