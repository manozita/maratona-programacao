#include <iostream>
using namespace std;
 
int oMaior() {
 
    int a,b,c,maior;
    std::cin >> a >> b >> c;
    maior = (a+b+abs(a-b))/2;
    
    if (c > maior) {
        maior = c;
    }

    std::cout << maior << " eh o maior" << endl;
    return 0;
}

int paresEntreCincoNumeros() {

    int val, par;

    par = 0;
    for (int i = 0; i < 5; i++) {
        std::cin >> val;
        if (val % 2 == 0) {
            par++;
        }
    }

    std::cout << par << " valores pares" << endl;
    return 0;
}

int conversao() {

    int horas,min,seg;
    std::cin >> seg;

    horas = seg/3600;
    seg = seg%3600;
    min = seg/60;
    seg = seg%60;

    std::cout << horas << ":" << min << ":" << seg << endl;
    return 0;
}

int quadrante() {

    int x,y;
    std::string quadrante;

    std::cin >> x >> y;
    while (x != 0 && y != 0) {
        if (x > 0) {
            if (y > 0) {
                quadrante = "primeiro";
            } else {
                quadrante = "quarto";
            }
        } else {
            if (y > 0) {
                quadrante = "segundo";
            } else {
                quadrante = "terceiro";
            }
        }
        std::cout << quadrante << endl;
        std::cin >> x >> y;
    }
    return 0;
}



int main() {
    quadrante();
    return 0;
}