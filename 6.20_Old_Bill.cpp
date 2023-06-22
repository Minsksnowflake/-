#include <iostream>
using namespace std;

int main() {
    int N, X, Y, Z, A, k = -1,f;//声明火鸡数量N，千百十位数分别为XYZ，以及总价格A，以及单价k并给初值为-1
    std::cin >> N;//输入火鸡数量N
    std::cin >> X >> Y >> Z;//输入千百十位数XYZ
    for (int i = 102; i < 100000; ++i) {//101*99=9999 < 五位数 <100000*1=100000
        A = i * N; //计算五位数总价
        if (A / 100000 == 0 && A / 10000 != 0 && (A / 10) % 10 == Z && (A / 100) % 10 == Y && (A / 1000) % 10 == X) {
            k = i;//当A不是六位数 且 A不是四位数 且 A的十位数是Z 且 A的百位数是Y 且 A的千位数是X时 令k=i。
            f = A;//用f储存满足条件的A值
        }
    }
    if (k == -1) {//如果k还是初值，说明没有结果满足条件，则输出0
        std::cout << 0 << std::endl;
    }
    else {//如果不是，则输出结果
        std::cout << f / 10000 << " " << f % 10 << " " << k << std::endl;
    }
}