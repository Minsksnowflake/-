#include <iostream>
using namespace std;

int main() {
    int N, X, Y, Z, A, k = -1,f;//����������N��ǧ��ʮλ���ֱ�ΪXYZ���Լ��ܼ۸�A���Լ�����k������ֵΪ-1
    std::cin >> N;//���������N
    std::cin >> X >> Y >> Z;//����ǧ��ʮλ��XYZ
    for (int i = 102; i < 100000; ++i) {//101*99=9999 < ��λ�� <100000*1=100000
        A = i * N; //������λ���ܼ�
        if (A / 100000 == 0 && A / 10000 != 0 && (A / 10) % 10 == Z && (A / 100) % 10 == Y && (A / 1000) % 10 == X) {
            k = i;//��A������λ�� �� A������λ�� �� A��ʮλ����Z �� A�İ�λ����Y �� A��ǧλ����Xʱ ��k=i��
            f = A;//��f��������������Aֵ
        }
    }
    if (k == -1) {//���k���ǳ�ֵ��˵��û�н�����������������0
        std::cout << 0 << std::endl;
    }
    else {//������ǣ���������
        std::cout << f / 10000 << " " << f % 10 << " " << k << std::endl;
    }
}