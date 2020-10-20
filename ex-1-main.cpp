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
	std::vector<int> v;
	unsigned int y = 0; //変数の個数計測
	while(a<1000000) {
		int x=0; //素数判定用の変数(0=素数、0以外=素数じゃない)
		for (unsigned int i = 2; i < a; i++) {
			if (a%i == 0) {
				x += 1;
			}
		}
		if (a == 1)
			x += 1;
		if (x == 0) {
			v.push_back(a);
			y++;
			if (y == n)
				return v[y-1];
		}
		a += d;

	}

}


int main() {
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
	//以下、同様に入出力例通りになるか確認せよ。
	std::cin.get();
	return 0;
}