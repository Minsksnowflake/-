#include <iostream>
using namespace std;

int main() {
	int h;//����߶�
	std::cin >> h;//����߶�
	int e = 3 * h - 2;//�������һ�г���
	for (int i = h; i > 0; --i) {//���h��
		for (int j = 2 * i - 2; j > 0; j--) {//����ո�
			printf(" ");
		}
		for (int k = e - (2 * i - 2); k > 0; k--) {//�������ո����*��
			printf("*");
		}
		std::cout << std::endl;//����
	}
}
