#include <iostream>

using namespace std;

void exercicio1 ()
{
    int *pt, x = 0;
    cout << "Endereco de pt: " << &pt << endl;

    cout << "Digite um valor para x: ";
    cin >> x;

    cout << "Apontando PT para X... " << endl;
    pt = &x;

    cout << "Imprimindo o conteudo apontado por pt: " << *pt << endl;

    cout << "Imprimindo o endereco de x: " << &x << endl;

    *pt = (*pt) * 10;
    cout << "Multiplicando pt por 10 e alterando o valor de X..." << endl;

    cout << "Imprimindo o conteudo apontado por pt (alterado): " << *pt << endl;

    pt = pt + 10;
    cout << "Somando 10 a variavel pt... "<< endl;

    cout << "Pt apos somar 10: " << pt << endl;

}

void exercicio2 ()
{

    int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;

    cout << "Valor de A: " << a << endl;
    cout << "Valor de B: " << b << endl;


    cout << "A e B recebendo o valor de C... " << endl;
    *pti1 = c;
    *pti2 = c;
    cout << "Valor de A = C: " << *pti1 << endl;
    cout << "Valor de B = C: " << *pti2 << endl;

    cout << "preenchendo o vetor v com os valores de seus indices somados de 1..." << endl;

    pti = v;
    for(int i =0; i < 3; i++)
    {
        cout << "Valor da posicao " << i << " do vetor: ";
        *(pti+ i) = i;
        v[i] = v[i] + 1;
        cout << v[i]<< endl;
    }

    cout << "Valor de A: " << *pti1 << endl;
    cout << "Valor de B: " << *pti2 << endl;
    cout << "Valor de C: " << c << endl;

    a = *(pti) + 99;
    cout << "Valor de A (+99) " << a << endl;

    *(pti) = *pti1 + *pti2;

    cout << "Valor da primeira posicao do vetor: " << *(pti) << endl;

    *(pti+1) = *pti2;
    cout << "Valor da segunda posicao do vetor: " << *(pti+1) << endl;

    *(pti+2) = *pti;
    cout << "Valor da segunda posicao do vetor: " << *(pti+2) << endl;



}

int main()
{
    /*
    Exercicio 1

    Faca um programa que realize as seguintes operacoes:  ̃
    ▶ Declare um ponteiro para inteiro pt.
    ▶ Imprima o endereco de pt.
    ▶ Crie uma variavel inteira x.
    ▶ Leia um valor para x.
    ▶ Faca com que pt aponte para x.
    ▶ Imprima o conteudo da variavel pt.
    ▶ Imprima o endereco de x.
    ▶ Usando apenas o ponteiro pt multiplique x por 10 e altere
    o seu valor.
    ▶ Imprima o conteudo apontado por pt.
    ▶ Some 10 a variavel pt.
    ▶ Imprima o seu conteudo novamente. Qual o significado  ́
    desta saıda?

    exercicio1();


    2 - Dadas as declaracoes e inicializacoes abaixo:
    int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;

    Faca o que se pede nos itens a seguir:
    ▶ Usando pti1 e pti2, faca com que a e b recebam o valor de c.
    ▶ Usando pti e aritmetica de ponteiros, preencha o vetor v com os valores
    de seus  ́ındices somados de 1.
    ▶ Imprima os conteudos do vetor e das variaveis a, b e c.
    ▶ Usando pti, atribua a variavel a o valor da primeira posicao do vetor  ̃
    acrescido de 99.
    ▶ Usando pti1 e pti2, atribua a primeira posicao do vetor a soma dos  ̃
    valores de a e b.
    ▶ Atribua a segunda posicao do vetor o conteudo apontado por pti2.
    ▶ Usando aritmetica de ponteiros, atribua a terceira posicao do vetor o  ̃
    conteudo apontado por pti.
    ▶ Usando ponteiros, incremente o valor de b e decremente o valor da
    segunda posicao do vetor.  ̃
    ▶ Novamente, imprima os conteudos do vetor e das variaveis a, b e c.


    */

    exercicio2();


    return 0;
}
