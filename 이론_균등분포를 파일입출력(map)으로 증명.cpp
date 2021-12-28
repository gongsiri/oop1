// 메르센 트위스터 난수 생성방식의 균등분포를 증명하라
// 파일입출력을 사용해서 csv 파일로 내보내기 한다.
// 파이썬 딕셔너리? 키, 밸류 == map<k, v>
#include<random>
#include<fstream>
#include<map>

using namespace std;
int main() {
	random_device rd;
	mt19937 gen(rd());
	//uniform_int_distribution<int> dis(1, 99);
	normal_distribution<double> dis(50, 10); //정규분포

	map<int, int> m;
	for (auto i = 0; i < 1000000; ++i) {
		//int rnd = dis(gen); // 난수 발생 1~99
		int rnd = static_cast<int>(dis(gen));
		// 99, 99, 3
		++(m[rnd]); // 99 : 2, 3 : 1
	}
	ofstream of("test.csv");
	for (auto i = 1; i <= 99; ++i) 
		of << i << "," << m[i] << endl;
	return 0;
} // 차트로 보면 균등분표가 증명됨