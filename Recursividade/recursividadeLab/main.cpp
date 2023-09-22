#include <iostream>

using namespace std;

int exercicio1 (int n)
{
    /*
    (Aquecimento) Implementar uma funcao recursiva para
    calcular o fatorial de um numero inteiro n.
    */

    if(n == 1 || n == 0)
    {
        return 1;
    }

    return n * exercicio1(n-1);


}


void imprimeIntervalo(int a, int b, int inc)
{
    /*
    Desenvolver uma funcao recursiva que, dados tres valores
    inteiros como parametros a, b e inc, imprime o intervalo
    fechado de a ate b com incremento inc.
    */

    if( a == b )
    {
        cout << "Os intervalos A e B sao iguais (Ou chegou no caso base): " << a << endl;
    }
    else
    {
        if( a<= b)
        {
            cout << a << endl;
            imprimeIntervalo(a+inc, b, inc);

        }
    }
}

void imprimeDecrescente(int n)
{
    /*
    Desenvolver uma funcao recursiva que recebe um valor
    inteiro n e imprime todos os inteiros de n ate 0 de forma
    decrescente.

    */

    if( n == 0)
    {
        cout << "Caso base: " << n << endl;
    }
    else
    {
        cout << n << endl;
        imprimeDecrescente(n-1);

    }


}

bool ehPrimo(int n)
{
    /*
    Desenvolver uma funcao recursiva para determinar se um
    numero inteiro n > 0 e primo.  ́
    */


// A LOGICA ESTA ERRADA. PRECISA DE MANUTENCAO

    int aux = 1;
    if( n == 1)
    {
        cout << "Caso base: " << n << endl;
    }
    else
    {

        cout << n%aux << endl;
        if(n%aux > 0)
        {
            cout << n << endl;
            aux++;
            ehPrimo(n);
        } else {

        cout << "nao e primo" << endl;
        }
        /*
        se for primo, todos os numeros entre 1 e ele mesmo vao dar resto. logo para saber se é primo ou nao,
        dividimos 1 a 1 e caso o resto seja 0 antes de chegar ao numero alvo, o número nao é primo

        */
    }

}

int main()
{
    //exercicio1

    /*
    int n = 0;
    cout << "Digite um numero para fazer o calculo do fatorial: ";
    cin >> n;

    cout << "Fatorial: " << exercicio1(n);

    */

    //Exercicio 2

    /*
    int a = 0, b = 0, inc = 0;
    cout << "Digite um valor para a variavel A: ";
    cin >> a;
    cout << endl << "Digite um valor para a variavel B: ";
    cin >> b;
    cout << endl << "Digite um valor para a variavel INC: ";
    cin >> inc;

    imprimeIntervalo(a, b, inc);

    */

    //Exercicio 3

    /*

    int n = 0;

    cout << "Digite um valor: ";
    cin >> n;

    imprimeDecrescente(n);

    */

    //Exercicio 4



    int n = 1;

    cout << "Digite um valor: ";
    cin >> n;


    ehPrimo(n);


    return 0;
}
