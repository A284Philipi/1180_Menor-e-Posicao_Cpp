#include <iostream>

using namespace std;

int main()
{
    int casos, cont = 0, numero, posicao, valor = 9999999999;
    cin >> casos;
    while (cont < casos){
        cin >> numero;
        if (numero < valor){
            valor = numero;
            posicao = cont;
        }
        cont++;
    }
    cout << "Menor valor: " << valor <<endl;
    cout << "Posicao: " << posicao <<endl;
    return 0;
}
