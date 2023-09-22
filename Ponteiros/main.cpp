#include <iostream>

using namespace std;

void exercicio1 ()
{
    /*
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

    */

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

    /*

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

void exercicio3()
{
    /*

    3) Faca o que se pede nos itens a seguir:
    ▶ Declare e inicialize um ponteiro pt1 com o endereco de x.
    ▶ Incremente o valor de x de forma indireta.
    ▶ Declare um segundo ponteiro (pt2) e faca-o apontar para y.
    ▶ Imprima a soma dos valores de x e y, sem usar as variaveis  ́
    x e y.
    ▶ Imprima o endereco da posicao de memoria localizada 16  ́
    bytes apos o endereco de x.
    ▶ Declare um terceiro ponteiro (pt3) e faca-o apontar para o
    ponteiro de y.
    ▶ Usando pt3, mova pt2 para a proxima posicao de memoria  ́
    ▶ Usando apenas pt3, imprima os enderec ̧os de pt3 e pt2.


    */

    int x = 23;
    float y = 9.7;

    int *pt1 = &x;
    float *pt2 = &y;
    float **pt3 = &pt2;

    *pt1 = *pt1 + 10;
    cout << "incrementando o valor de X: " << *pt1<< endl;

    cout << "Somando os valores de X e Y utilizando ponteiros: " << *pt1 + *pt2 << endl;
    cout << "Endereco de memoria de X: " << &x << endl;
    cout << "Endereco de memoria de X somando +16 na memoria (Com ponteiro): " << pt1 + 4 << endl;
    cout << "Endereco de memoria de X somando +16 na memoria (Com ponteiro): " << pt1 + 4 << endl;
    cout << "Endereco de memoria de X somando +16 na memoria (Com ponteiro): " << **pt3<< endl;





}


void troca(int *a, int *b)
{
    int aux = 0;

    cout << "Trocando os valores..." << endl;
    aux = *a;
    *a = *b;
    *b = aux;

}

void divisao(int num, int div, int *q, int *r)
{


    cout << "Preparando a divisao..." << endl;
    int valor = num/div;

    *q = valor;
    cout << "Descobrindo o quociente..." << endl;

    *r = num%div;
    cout << "Descobrindo o resto..." << endl;


}

bool exercicio6(int tam, int vet[], int *par, int *impar, int *negativos)
{

    /*
    6. Implemente uma unica funcao que receba um vetor de
    numeros inteiros (vet) e o seu tamanho (tam) e:
    ▶ conte o total de elementos pares;
    ▶ conte o total de elementos ımpares;
    ▶ conte o total de elementos negativos;
    ▶ retorne verdadeiro se existirem numeros negativos no
    vetor, ou retorne falso, caso contrario.
    */

    int resto = 0;

    for (int i = 0; i < tam; i++)
    {
        // cout << tam << endl;
        // cout << i << endl;

        cout << "Digite um valor para a posicao " << i+1 << " do vetor: ";
        cin >> vet[i];

        if(vet[i] >= 0)
        {
            resto = vet[i]%2;
            if(resto == 0)
            {
                cout << "Adicionando aos pares..." << endl;
                (*par)++;
            }
            else
            {
                cout << "Adicionando aos impares..." << endl;
                (*impar)++;
            }

        }
        else
        {
            cout << "Adicionando aos negativos..." << endl;
            (*negativos)++;
        }
    }

    if(*(negativos) > 0)
    {
        cout << "True" << endl;
        return true;
    }
    else
    {
        cout << "False" << endl;
        return false;
    }



// par se o resto der 0 // inpar se o resto der 1 e negativo se for menor do que 0
// faz um for percorrendo o vetor de X posicoes, pega o valor na posicao i, faz a divisao por 2 e faz a verificacao
// se for par, soma 1 na variavel acumuladora par, se for impar coloca na impar se for negativa coloca na negativa
}

void imprime(int *vet, int tam)
{
    for(int i = 0; i < tam; i++)
        cout << "O valor eh: " << vet[i] << endl;
}

void inverte(int vet[], int n)
{
    for(int i = 0; i < n/2; i++)
        troca(&vet[i], &vet[n - i - 1]);
}

int main()
{
    /*

    exercicio1();

    exercicio2();

    exercicio3();

    /*

    //------------------------------------------------------------------------------------------

    //EXERCICIO 4

    4)Implemente a funcao troca que troca o conteudo de duas  ́
    variaveis inteiras a e b. Faca um programa que teste a
    funcao implementada.



    int a = 0, b = 0;

    cout << "Digite um numero para A: ";
    cin >> a;
    cout << "Digite um numero para B: ";
    cin >> b;

    cout << "Valor das variaveis ANTES da troca: " << a << " , " << b << endl;

    troca(&a, &b);
    //Essa funcao esta com problema de declaracao no escopo

    cout << "Valor das variaveis DEPOIS da troca: " << a << " , " << b << endl;


    //------------------------------------------------------------------------------------------

    //EXERCICIO 5

    5)Dados dois numeros inteiros num e div, faca uma funcao
    para calcular e retornar o quociente e o resto da divisao
    inteira de num por div. Considerar o seguinte prototipo:  ́
    void divisao(int num, int div, int *q, int *r);
    onde:
    ▶ num e dividendo;  ́
    ▶ div e o divisor;  ́
    ▶ q e o quociente;  ́
    ▶ r e o resto.  ́


    int num = 0, div = 0, q = 0, r = 0;

    cout << "Digite o dividendo: ";
    cin >> num;

    if(num > 0)
    {

        while(div <= 0)
        {
            cout << "Digite o divisor: ";
            cin >> div;
            if(div <= 0)
            {
                cout << "Valor invalido! Digite um valor maior do que zero." << endl;
            }
        }

        divisao(num, div, &q, &r);
        //Esta dando erro de escopo na funçao divisao

    }
    else
    {
        cout << "Digite um valor maior do que 0 para conseguir fazer a divisão" << endl;
    }

    cout << "Quociente da divisao entre " << num << " e " << div << ": " << q << endl;
    cout << "Resto da divisao entre " << num << " e " << div << ": " << r;


    //------------------------------------------------------------------------------------------

    //EXERCICIO 6

    int tam = 0, par = 0, impar = 0, negativo = 0, *vet;

    cout << "Digite o tamanho do vetor: ";
    cin >> tam;

    vet = new int [tam];

    exercicio6(tam, vet, &par, &impar, &negativo);

    cout << "Existem negativos (true = 1 // false = 0) -> " << exercicio6 << endl;

    cout << "Quantidade de numeros pares no vetor: " << par << endl;
    cout << "Quantidade de numeros impares no vetor: " << impar << endl;
    cout << "Quantidade de numeros negativos no vetor: " << negativo << endl;


    //------------------------------------------------------------------------------------------

    //EXERCICIO 7

    /*
    7) Crie uma funcao que recebe como parametro um vetor
    vet de elementos inteiros e seu tamanho n. Utilizando
    obrigatoriamente a func ̧ao ̃ troca (Exercıcio 4), a funcao
    deve inverter os elementos dentro do vetor original vet,
    trocando o primeiro elemento com o ultimo, o segundo
    com o penultimo, e assim por diante. Faca um programa
    que utilize sua func ̧ao para inverter os elementos de um
    vetor. Depois, imprima o vetor invertido.


    int vet[6] = {1, 2, 3, 4, 5, 6};

    inverte(vet, 6);

    imprime(vet, 6);


    */
    return 0;
}
