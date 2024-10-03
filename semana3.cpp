#include <iostream>
#include <iomanip>
using namespace std;

int sortSimples() {

    int nos[3], t;

    std::cin >> nos[0] >> nos[1] >> nos[2];

    int ord[3] = {nos[0], nos[1], nos[2]};
    int ordenados[3] = {nos[0], nos[1], nos[2]};

    if (ord[0] > ord[1]) {
        t = ord[0];
        ord[0] = ord[1];
        ord[1] = t;
    }
    if (ord[1] > ord[2]) {
        t = ord[1];
        ord[1] = ord[2];
        ord[2] = t;
    }
    if (ord[1] < ord[0]) {
        t = ord[1];
        ord[1] = ord[0];
        ord[0] = t;
    }

    std::cout << ord[0] << std::endl << ord[1] << std::endl << ord[2] << std::endl;

    std::cout << std::endl << nos[0] << std::endl << nos[1] << std::endl << nos[2] << std::endl;

    return 0;
}

int ultrapassando() {
    int X, Z, res=0, count=0;
    std::cin >> X;

    do {
        std::cin >> Z;
    } while (Z <= X);

    do {
        res += X+count;
        count++;
    } while (res <= Z);

    std::cout << count << std::endl;

    return 0;
}

int matriz() {
    int L;
    char T;
    float M[12][12], result = 0.0f;

    std::cin >> L >> T;

    for (int lin = 0; lin < 12; ++lin) {
        for (int col = 0; col < 12; ++col) {
            std::cin >> M[lin][col];
        }
    }

    for (int col = 0; col < 12; ++col) {
        result += M[L][col];
    }

    if (T == 'M') {
        result /= 12.0f;
    }

    std::cout << std::fixed << std::setprecision(1) << result << std::endl;

    return 0;
}

int main () {
    int N, len1, len2;
    string a, b, fin;
    std::cin >> N;
    while (N--) {
        cin >> a >> b;
        len1 = a.length(); len2 = b.length();
        int minLen = min(len1, len2);

        for (int i = 0; i < minLen; ++i) {
            fin += a[i];
            fin += b[i];
        }

        if (len1 > len2) {
            fin += b.substr(minLen);
        } else {
            fin += a.substr(minLen);
        }

        std::cout << fin << std::endl;
    }
    return 0;
}