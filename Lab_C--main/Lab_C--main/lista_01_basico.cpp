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
int troca(int &a, int &b){
    int aux= a;
    a=b;
    b=aux;

   return 0;
}

void verificaPar_Impar(int x){
    if(x%2 ==0){
        cout<<"Par!"<<endl;
    }else{
        cout<<"Impar!"<<endl;
    }
    
}

//int soma_angulos(int a, int b, int c){
    //soma= a+b+c;
    
    //return soma;
//}

bool checarValid(int soma){
    if(soma == 180){
        return 1;
    }
        return 0;
    
}

float precoLuz(int kW){
    float custo;
    float custoFinal;
    if(kW <= 100){
    custo = kW * 0.5;
    }else if (kW > 100 && kW <= 200){
       custo = kW * 0.75;
    }else if (kW > 200 && kW <=250){
        custo = kW * 1,20;
    }else{
        custo = kW * 1.50;
    }
      custoFinal = custo * 0.2;
    return 0;
}



int main() {
    float kw;
    cout<<"Informe o valor de kW :";
    cin>> kw;
    cout<< "O custo final de energia eh: "<<precoLuz(kw);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //int a, b,c;
    //cout<<"Informe o angulo a : ";
    //cin>>a;
    //cout<<"Informe o angulo b : ";
    //cin>>b;
    //cout<<"Informe o angulo c :";
    //cin>>c;
    
    //int resp =soma_angulos(a,b,c);
    //if(checarValid(resp));
    
    
    
    //int num = 0;
    //cout<<"Digite um numero : ";
    //cin>> num;
    //verificaPar_Impar(num);
    
   // int x,y,teste;
   // x=0;
   // y=0;
   
    //cout<<"Informe um numero : ";
    //cin>>x;
    //cout<<"Informe outro numero : ";
    //cin>>y;
    //if(x<y){
       // troca(x,y);
   // }
    //cout << "Troca --> a: " << x <<" -->b: "<< y <<endl;
    
    
    
   //cout<<"Digite o valor de X: ";
    //cin>> x;
   // cout<<"Digite o valor de Y: ";
    //cin>>y;
   //cout<<"O resultado da funcao x^2 + y^2 - 6xy -1 eh: "<<funcaoMatematica(x,y)<<endl;
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
