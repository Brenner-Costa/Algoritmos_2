#include <iostream>
#include <fstream>

using namespace std;

void exer4 () {

    ofstream arquivo;
    string novosNomes;
    arquivo.open("nomesExer4.txt", ios::app);

    if(!arquivo) {
        cout << "ERRO AO ABRIR O ARQUIVO";

    }

    int quantNomes;

    cout << "Quantos nomes serao adicionados: ";
    cin >> quantNomes;

    for (int i = 0; i < quantNomes; i++) {
        cout << endl << "Digite o " << i+1 << " nome: ";
        cin >> novosNomes;
        arquivo << novosNomes << endl;
    }

    arquivo.close();

}

void exer3 () {

    ofstream inFile;
    string nome;
    inFile.open("nomesExer3.txt", ios::app);
    if(!inFile) {
        cout << "ERRO NO ARQUIVO";
    }
    for (int i = 0; i < 3; i++) {
        cin >> nome;
        inFile << nome << endl;
    }
    inFile.close();

}

void exer2 () {

    ofstream file;
    int numero = 0;
    file.open("exer1.txt", ios::out);
    if(!file)
    {
        cout << "ERRO NO ARQUIVO";
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> numero;
        file << numero << " ";
    }
    file.close();

}

int main()

{
    /*
    1) Faca um programa que crie um arquivo texto com um
    nome a sua escolha e extensao .txt e escreva um numero  ́
    inteiro lido do teclado nesse arquivo criado.

    2) Faca um programa que abra o arquivo texto criado no
    exercıcio anterior e imprima o conteudo na tela.



    --------------------
    3) Faca um programa que crie um novo arquivo texto
    chamado “nomes.txt” e escreva uma string contendo um
    nome lido do teclado.

    exer3();

    /*
    ---------------------------
    Fac ̧a um programa que abra o arquivo “nomes.txt” sem
    apagar seu conteudo posicionando o cursor ao final e  ́
    solicite que o usuario digite novos nomes. O programa  ́
    deve inserir um nome em cada linha. Insira pelo menos
    mais 5 nomes no arquivo a partir do teclado.


    exer4();

    Fac ̧a um programa que calcule o tamanho de um arquivo.
    Dica: utilize as func ̧oes  ̃ seekg() e tellg().

    */






    return 0;

}
