#include <iostream>
#include <vector>

#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。

/*-----------------------------------------------------------*/
/*
* nth_prime
*
* 与えられた正整数aとdとnに対して、この等差数列に含まれるn番目の
* 素数を返す。
*
* TODO:このnth_prime関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/*-----------------------------------------------------------*/
int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	if(a<=0 || d<=0 || n<=0){
		return false;
	}
	std::vector<int> v;
	unsigned int y = 0; //変数の個数計測
	while (a<CPP2_PRIME_UPPER_LIMIT) {
		int x = 0; //素数判定用の変数(0=素数、0以外=素数じゃない)
		for (unsigned int i = 2; i < a; i++) {
			if (a%i == 0) {
				x += 1;
				break;
			}
		}
		if (a == 1)
			x += 1;
		if (x == 0) {
			v.push_back(a);
			y++;
			if (y == n)
				return v[y - 1];
		}
		a += d;

	}
	return false;
}


int main() {
	// 求めたい式・値の個数倍
	// 式12個で要素3つと答え一つのため、12*4
	int nth[48] = { 367,186,151,92809,179,10,203,6709,271,37,39,12037,103,230,1,103,27,104,185,93523,253,50,85,14503,1,1,1,2,9075,337,210,899429,307,24,79,5107,331,221,177,412717,259,170,40,22699,269,58,102,25673 };
	for (int i = 0;i < 48; i += 4) {
		std::cout << nth[i] << "," << nth[i + 1] << "," << nth[i + 2] << "=" << nth_prime(nth[i], nth[i + 1], nth[i + 2]) << "　　答え：" << nth[i + 3] << std::endl;
		if (nth_prime(nth[i], nth[i + 1], nth[i + 2]) == nth[i + 3]) {
			std::cout << "正解" << std::endl;
		}
		else
		{
			std::cout << "不正解" << std::endl;
		}

	}
	/**
	std::cout << nth_prime(367, 186, 151) << std::endl;
	std::cout << nth_prime(179, 10, 203) << std::endl;
	std::cout << nth_prime(271, 37, 39) << std::endl;
	std::cout << nth_prime(103, 230, 1) << std::endl;
	std::cout << nth_prime(27, 104, 185) << std::endl;
	std::cout << nth_prime(253, 50, 85) << std::endl;
	std::cout << nth_prime(1, 1, 1) << std::endl;
	std::cout << nth_prime(9075, 337, 210) << std::endl;
	std::cout << nth_prime(307, 24, 79) << std::endl;
	std::cout << nth_prime(331, 221, 177) << std::endl;
	std::cout << nth_prime(259, 170, 40) << std::endl;
	std::cout << nth_prime(269, 58, 102) << std::endl;
	**/
	//以下、同様に入出力例通りになるか確認せよ。
	std::cin.get();
	return 0;
}