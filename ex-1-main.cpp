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
int nth_prime(unsigned int a,unsigned int d,unsigned int n){
	std::vector<int> v(n);
	int y=0; //変数の個数計測
	for(;;){
		int x; //素数判定用の変数(0=素数、0以外=素数じゃない)
		for(int i=2; i < a; i++){
			if(a%i==0){
				x+=1;
			}
		}
		if(x==0){
			v.push_back(a);
			y++;
			if(y==n)
				return v(n);
		}
		a+=3;
		
	}

}


int main(){
	std::cout<<nth_prime(367,186,151)<<std::endl;
	//以下、同様に入出力例通りになるか確認せよ。
	return 0;
}
