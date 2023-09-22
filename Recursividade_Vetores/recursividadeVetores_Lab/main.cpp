#include <iostream>

using namespace std;

int menor(int vet[], int n)
{
    /*
    Desenvolver uma funcao recursiva para calcular e retornar
    o menor valor de um vetor com n numeros inteiros.
    */

    if(n == 1)
    {
        cout << "Caso base: " << vet[0] << endl;
        return vet[0];
    }

    int m = menor(vet, n-1);

    if(m < vet[n-1])
    {
        cout << "Menor: " << m << endl;
        return m;
    }
    else
    {
        return vet[n-1];
    }


}

int main()
{

    //Exercicio 1
    int n = 0;
    cout << "Digite um tamanho pro vetor: ";
    cin >> n;

    int *vet = new int [n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite um valor para a posicao " << i+1 << " do vator: ";
        cin >> vet[i];
    }


    menor(vet, n);

    /*
    cout << endl << "Verificando os valores do vetor..." << endl;
    for(int i = 0; i < n; i++)
    {
        cout << vet[i] << endl;
    }
    */

    return 0;
}
