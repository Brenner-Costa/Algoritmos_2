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
    int acumula = 0;

    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        {
            cout << "Posicao " << i << " = " << vet[i] << " -> PAR" << endl;
            acumula++;
        }
        else
        {
            cout << " " << endl;
        }
    }

    int *novoVet = new int [acumula];

    int j = 0;

    for (int i = 0; i <= acumula; i++)
    {

        if(i%2 == 0)
        {
            novoVet[j] = vet[i];
            cout << "Valor da posicao " << i << " do NOVO vetor: " << novoVet[j] << endl;
            j++;
        }

    }

    for(int i = 0; i < acumula; i++)
    {
        cout << novoVet[i] << endl;
    }

//O VETOR NOVO ESTA RECEBENDO OS VALORES MAS ESTA PARANDO QUANDO CHEGA NA POSICAO 4

    return novoVet;
}


int* redimensiona(int vet[], int tam,int novo)
{

    cout << "Digite um tamanho para o NOVO vetor: ";
    cin >> novo;

    if(novo > tam)
    {
        cout << "O tamanho do vetor NOVO e MAIOR que o ORIGINAL..." << endl;
        int *novoVet = new int [novo];

        for(int i = 0; i < novo; i++)
        {
            novoVet[i] = vet[i];
            cout << *novoVet << endl;
            novoVet++;
            // Esta com problema para copiar os valores do vetor original para o novo.
        }

        return novoVet;

    } else {

        cout << "O vetor ORIGINAL eh MAIOR do que o NOVO!" << endl;
        return vet;

    }

}

int main()
{

//---------------------------------------------------------------------------------------

    //EXERCICIO 1

    //exercicio1();


//---------------------------------------------------------------------------------------

    //EXERCICIO 2

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

//---------------------------------------------------------------------------------------

    //EXERCICIO 3
    // AINDA ESTA COM ERROS NA FUNCAO

    /*
    int n = 0;
    cout << "Digite o tamanho para o vetor: ";
    cin >> n;

    cout << endl;

    int *vet = new int [n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite um valor para a posicao " << i << " do ANTIGO vetor: ";
        cin >> vet[i];
        cout << endl;

    }

    indicesPares(vet, n);

    */

//---------------------------------------------------------------------------------------


// EXERCICIO 4

    int tam = 0, novo = 0, *vet;

    cout <<  "Digite um tamanho para o vetor ORIGINAL: ";
    cin >> tam;

    vet = new int [tam];

    for (int i = 0; i < tam; i++)
    {
        cout << "Digite um valor para a posicao " << i << " do vetor ORIGINAL: ";
        cin >> vet[i];
        cout << endl;

    }

    redimensiona(vet, tam, novo);

    cout << redimensiona << endl;
    // DAR UMA OLHADA NO RETORNO DESSA FUNCAO. ESTA RETORNANDO TRUE E NAO O ARRAY INTEIRO.

    delete [] vet;
    //delete [] redimensiona;

    return 0;
}
