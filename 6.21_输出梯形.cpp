#include <iostream>
using namespace std;

int main() {
	int h;//定义高度
	std::cin >> h;//输出高度
	int e = 3 * h - 2;//计算最后一行长度
	for (int i = h; i > 0; --i) {//输出h行
		for (int j = 2 * i - 2; j > 0; j--) {//输出空格
			printf(" ");
		}
		for (int k = e - (2 * i - 2); k > 0; k--) {//总数减空格等于*数
			printf("*");
		}
		std::cout << std::endl;//换行
	}
}
