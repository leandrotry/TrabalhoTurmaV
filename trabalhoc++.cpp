#include <iostream>
#include <list>
using namespace std;

void menu(){
    cout << "1. Verifica se um numero é positivo ou negativo ou igual a zero." << endl;
    cout << "2. Decidir se um estudante foi aprovado em uma disciplina." << endl;
    cout << "3. Determinar se um ano é bissexto ou não." << endl;
    cout << "Digite o número da opção desejada: " << endl;
   }

void positivoNegativo(){
    int valor;
    system("clear");
    cout << "Digite o valor que deseja testar: " << endl;
    cin >> valor;
    system("clear");

    if (valor > 0){
        cout << "Valor positivo!" << endl; 
    }
    else if (valor < 0){
        cout << "valor negativo!" << endl;
    }
    else{
        cout << "O valor digitado é neutro ou igual a 0." << endl;
    }
}

void anoBissexto(){
    int ano;
    cout << "Informe o ano para testar se é bissexto ou não: " << endl;
    cin >> ano;

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        cout << "Ano Bissexto!" << endl;
    }else{
        cout << "Ano não Bissexto!" << endl;
    }    
}

void mediaEscolar(){
    int nota1, nota2;
    float media;
    system("clear");
    cout << "Digite a nota da primeira prova " << endl;
    cin >> nota1;
    cout << "Digite a nota da última prova " << endl;
    cin >> nota2;
    
    media = (nota1  + nota2) / 2;
    system("clear");
    if (media >= 6){
        cout << "Aluno APROVADO!" << endl;
    }else if (media >= 4 and media <6){
        cout << "Aluno está em RECUPERAÇÃO!" << endl;
    }else{
        cout << "Aluno REPROVADO!" << endl;
    }
}

void escolha(){
    bool retorno = true;
    while (retorno){
        menu();
        int opcao;
        cin >> opcao;
        switch (opcao){
            case 1:
                positivoNegativo();
                retorno = false;
                break;
            case 2:
                mediaEscolar();
                retorno = false;
                break;
            case 3:
                anoBissexto();
                retorno = false;
                break;
            default:
            system("clear");
            cout << "OPÇÃO INVÁLIDA" << endl;
            
                break;
        }
    }
}
bool terminar(){
    bool finalizar = true;
    
    char opcao;
    cout << "Deseja finalizar o programa?" << endl;
    cout << "s. sim" << endl;
    cout << "n. não" << endl;
    
    cin >> opcao;
    switch (opcao){
        case 's':
        case 'S':
            system("clear");
            finalizar = false;
            cout << "FIM DO PROGRAMA!" << endl;
            break;
        case 'n':
        case 'N':
            finalizar = true;
            break;
        default:
            cout << "OPÇÃO INVÁLIDA" << endl;
            break;
    }
    return finalizar;
}

int main(){
    bool finalizar;
    finalizar = true;
    while (finalizar){
        system("clear");
        escolha();
        finalizar = terminar();
    }
    return 0;
}