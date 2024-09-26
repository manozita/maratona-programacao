#include <iostream>
#include <iomanip>
using namespace std;

int salario() {

    double sal, mont, tot;
    std::string nome;

    std::cin >> nome >> sal >> mont;

    tot = 0.15*mont + sal;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "TOTAL = R$ " << tot << std::endl;

    return 0;
}

int pum() {

    int N;

    std::cin >> N;

    for (int i = 0, j = 1; i < N; i++, j+=4) {
        std::cout << j << " " << j+1 << " " << j+2 << " PUM" << std::endl;
    }

    return 0;
}

int experiencias() {

    int N, quantia, total, totalCoelhos, totalRatos, totalSapos;
    char tipo;
    totalCoelhos = totalRatos = totalSapos = 0;

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> quantia >> tipo;
        switch (tipo) {
            case 'C':
                totalCoelhos+=quantia; break;
            case 'R':
                totalRatos+=quantia; break;
            default:
                totalSapos+=quantia; break;
        }
    }

    total = totalCoelhos + totalRatos + totalSapos;

    std::cout << "Total: " << total << " cobaias" << std::endl;
    std::cout << "Total de coelhos: " << totalCoelhos << std::endl;
    std::cout << "Total de ratos: " << totalRatos << std::endl;
    std::cout << "Total de sapos: " << totalSapos << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Percentual de coelhos: " << static_cast<double>(totalCoelhos)*100/total << " %" << std::endl;
    std::cout << "Percentual de ratos: " << static_cast<double>(totalRatos)*100/total << " %" << std::endl;
    std::cout << "Percentual de sapos: " << static_cast<double>(totalSapos)*100/total << " %" << std::endl;

    return 0;
}

int notasEMoedas() {

    float N;
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int qtdNotas, qtdMoedas, centavos;

    std::cin >> N;
    centavos = static_cast<int>(N*100);

    std::cout << "NOTAS:" << std::endl;

    std::cout << std::fixed << std::setprecision(2);

    for (int i = 0; i < 6; ++i) {
        qtdNotas = centavos / notas[i];
        centavos %= notas[i];
        std::cout << qtdNotas << " nota(s) de R$ " << notas[i] / 100.0 << std::endl;
    }

    std::cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; ++i) {
        qtdMoedas = centavos / moedas[i];
        centavos %= moedas[i];
        std::cout << qtdMoedas << " moeda(s) de R$ " << moedas[i] / 100.0 << std::endl;
    }

    return 0;
}

