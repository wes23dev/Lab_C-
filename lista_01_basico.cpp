#include <iostream>
using namespace std;

float soma(float a, float b) {
    return a + b;
}
float subtracao(float a, float b) {
    return a - b;
}
float multiplicacao(float a, float b) {
    return a * b;
}
float divisao(float a, float b) {
    if (b == 0) {
        cout << "Erro: Divisão por zero!" << endl;
        return 0; // ou algum valor de erro apropriado
    }
    return a / b;
}
float mediaNotas(float nota1, float nota2, float nota3, float nota4 ){
    float media = (nota1 + nota2 + nota3+ nota4 )/4;
    if (media >=6){
        cout<< "Aprovado!"<<endl;
        
    }else{
        cout<<"Reprovado!"<<endl;
    }
    return media;
}
float porcentagem (float a, float b){
    return (a/b)*100.0;
}
int funcaoMatematica(int x, int y){
    return ((x*x)+(y*y) - 6*(x*y) -1);
}

int main() {
    int x,y;
    x=0;
    y=0;
    cout<<"Digite o valor de X: ";
    cin>> x;
    cout<<"Digite o valor de Y: ";
    cin>>y;
    cout<<"O resultado da funcao x^2 + y^2 - 6xy -1 eh: "<<funcaoMatematica(x,y)<<endl;
    //float custoFabrica = 0.0;
    //float percentualDistribuidor = 0.0;
    //float percentualImpostos = 0.0;
    //float custoFinal = 0.0;

    //cout<< "Venda de carros"<<endl;
    //cout<< "Digite o custo de fabrica:";
   // cin>>custoFabrica;
    //cout<<"Digite o percentual do distribuidor:";
    //cin>>percentualDistribuidor;
    //cout<<"Digite o percentual de impostos:"; 
    //cin>>percentualImpostos;
    //custoFinal=+ custoFabrica + (porcentagem(percentualDistribuidor, custoFabrica ) + porcentagem( percentualImpostos, custoFabrica));
    //cout<<"Custo final do carro:"<<custoFinal<<" reais"<<endl;


    //num1 = 0.0;
   // num2 = 0.0;//num4 = 0.0;
   // cout<<"BOLETIM DE NOTAS"<<endl;
    //cout<<"Digite a primeira nota: ";
    //cin>> num1;
    //cout<<"Digite a segunda nota: ";
    //cin>> num2;
    //cout<<"Digite a terceira nota:";
    //cin>>num3;
   // cout<<"Digite a quarta nota:";
   // cin>>num4;
    //cout<<"Resultado da media:"<< mediaNotas(num1, num2,num3,num4)<<endl;

    return 0;
}