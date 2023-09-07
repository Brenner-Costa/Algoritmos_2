#include <iostream>

using namespace std;

void exercicio1()
{

    /*
    Faca um programa que leia um numero inteiro n e aloque
    um vetor com n inteiros de forma dinamica (use o
    operador new). Em seguida, o programa deve ler os
    valores do vetor e calcular a media dos elementos desse
    vetor. Por fim, deve desalocar (use o operador delete) a
    memoria usada para armazenar os seus elementos.

    */

    int n = 0, media = 0, divisao = 0;

    cout << "Digite o tamanho para o vetor: ";
    cin >> n;
    int *vet = new int [n];

    for(int i = 0; i < n; i++)
    {
        cout << "Digite o valor para a posicao " << i+1 << " do vetor: ";
        cin >> vet[i];
        media+=vet[i];
        //fazer a verificação para valores negativos
    }

    divisao = media/n;
    cout << "Media dos elementos do vetor: " << divisao << endl;

    cout << endl << "Verificando os valores do vetor..." << endl;
    for(int i = 0; i < n; i++)
    {
        cout << vet[i] << endl;
    }


    delete [] vet;


    cout << endl << "Verificando desalocacao dos valores do vetor..." << endl;
    for(int i = 0; i < n; i++)
    {
        cout << vet[i] << endl;
    }
}

void exercicio2(int n, float vet1[], float vet2[])
{
    /*
    Implemente uma funcao que calcule o produto escalar
    entre dois vetores do tipo de dados float. No programa
    principal voce deve ler o tamanho n dos vetores, os quais
    devem ser alocados dinamicamente usando new. Depois,
    voce deve ler os dados dos vetores e chamar a funcao para
    calcular o produto escalar. Por fim, use o operador
    delete para desalocar toda memoria alocada de forma  ́
    dinamica.

    */

    float soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma= soma + vet1[i]*vet2[i];
        cout << "Somando os valores das posicoes " << i+1 << " dos vetores..." << endl;
    }

    cout << endl << "Total do produto escalar entre os dois vetores: " << soma << endl;

}


int* indicesPares(int vet[], int n)
{

    //descobrir quais indices sao pares no vetor passado por referencia
    int acumula = 0;

    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        {
            cout << "Posicao " << i << " -> PAR" << endl;
            acumula++;
        }
        else
        {
            cout << " " << endl;
        }
    }

    int *novoVet = new int [acumula];

    for (int j = 0; j < acumula; j++)
    {
        novoVet[j] = vet[j];
        cout << "Valor da posicao " << j << " do ANTIGO vetor: " << vet[j] << endl;
        cout << "Valor da posicao " << j << " do NOVO vetor: " << novoVet[j] << endl;
    }
}


int main()
{

    //exercicio1();

    //exercicio 2

    /*
    int n = 0;
    cout << "Digite o tamanho para os dois vetores: ";
    cin >> n;

    float *vet1 = new float [n], *vet2 = new float [n];

    for (int i = 0; i < n; i++) {
        cout << "Digite um valor para a posicao " << i+1 << " do vator 1: ";
        cin >> vet1[i];

        cout << "Digite um valor para a posicao " << i+1 << " do vator 2: ";
        cin >> vet2[i];

     }

     cout << endl << "Vetores completados!" << endl;

     exercicio2(n, vet1, vet2);

     delete [] vet1;
     delete [] vet2;

    */

    //exercicio 3

    int n = 0;
    cout << "Digite o tamanho para o vetor: ";
    cin >> n;

    int *vet = new int [n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite um valor para a posicao " << i << " do ANTIGO vetor: ";
        cin >> vet[i];
        cout << endl;

    }

    indicesPares(vet, n);



    return 0;
}
