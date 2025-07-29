#include <iostream>
using namespace std;

struct Sargento
{
    string nome;
    int idade;
};

struct Soldado
{
    string nome;
    int idade;
};
struct Tropa
{
   string nome;
   Sargento sargento;
   Soldado* soldado;
   int quantSoldados;
};

void imprimaTropaVerifica(Tropa tropa, Soldado s){
    cout<<"Tropa : "<<tropa.nome<<endl;
    cout<<"Sargento : "<<tropa.sargento.nome<<", Idade : "<<tropa.sargento.idade<<endl;
    cout<<"Soldados : "<<endl;
    bool encontrado = false;

    for(int i = 0; i<tropa.quantSoldados; i++){
        cout<<tropa.soldado[i].nome<< ", Idade : "<<tropa.soldado[i].idade<<endl;
        if(tropa.soldado[i].nome == s.nome && tropa.soldado[i].idade == s.idade){
            encontrado = true;
        }
    }
    if(encontrado){
        cout<<"O soldado "<<s.nome<<" faz parte da tropa."<<endl;
    }else{
        cout<<"O soldado "<<s.nome<<" nao faz parte da tropa."<<endl;
    }
}
int contadorSoldadoIdade(Tropa tropa, int idade){
    int contador = 0;
    for(int i = 0; i<tropa.quantSoldados; i++){
        if(tropa.soldado[i].idade == idade){
            contador++;
        }
    }
    return contador;
}

int main(){
    Sargento sargento1;
    sargento1.nome = "Sargento Rocha";
    sargento1.idade = 50;

    Tropa tropa1;
    tropa1.nome = "Tropa Alpha";
    tropa1.sargento = sargento1;
    tropa1.quantSoldados = 3;
    tropa1.soldado = new Soldado[tropa1.quantSoldados];

    tropa1.soldado[0] = {"Wesley", 25};
    tropa1.soldado[1] = {"Joao", 30};
    tropa1.soldado[2] = {"Pedro", 25};

    Soldado soldadoBuscar = {"Wesley", 25};

    imprimaTropaVerifica(tropa1, soldadoBuscar);


    int idadeBuscar = 25;
    int resultado = contadorSoldadoIdade(tropa1, idadeBuscar);
    cout<<"A quantidade de soldados com a idade "<<idadeBuscar<<" sao "<<resultado;

    return 0;

}


