#include <iostream>
using namespace std;

// (a) Sub-rotina que calcula fatorial
int fatorial(int n) {
    if (n < 0 || n > 12) {
        return 0;
    }
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// (b) Sub-rotina que preenche vetor com fatorial(i + 2)
void preencherVetorComFatoriais(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        v[i] = fatorial(i + 2);
    }
}

// (c) Função principal
int main() {
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tamanho inválido. Encerrando." << endl;
        return 0;
    }

    int* v = new int[n];

    // Preenche o vetor usando a sub-rotina (b)
    preencherVetorComFatoriais(v, n);

    // Loop para ler índices do usuário
    int indice;
    while (true) {
        cout << "Digite um índice (0 a " << n - 1 << "): ";
        cin >> indice;

        if (indice < 0 || indice >= n) {
            // Índice inválido: encerra
            int soma = v[0] + v[n - 1];
            cout << "Índice fora do intervalo." << endl;
            cout << "Soma do primeiro e último elemento: " << soma << endl;
            break;
        } else {
            cout << "Valor no índice " << indice << ": " << v[indice] << endl;
        }
    }

    delete[] v;
    return 0;
}
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
      custoFinal =custo+( custo * 0.2);
    return 0;
}

void alertaPoluicao(float indice){

    if(indice >= 0.05 && indice <= 0.25){
        cout<<"poluição aceitável estabelecido"<<endl;
    }else if(indice >= 0.3 && indice < 0.4){
        cout<<"Alerta - Primeiro Grupo: suspendam imediatamente suas atividades, como uma medida preventiva para reduzir a poluição"<<endl;
    }else if(indice >= 0.4 && indice < 0.5){
        cout<<"Alerta - Primeiro e Segundo Grupo:  interromper suas operações, intensificando as ações para a diminuição dos níveis de poluição"<<endl;
    }else if(indice >= 0.5 ){
        cout<<"Alerta - Os tres Grupos: parar suas atividades, visando a recuperação da qualidade ambiental."<< endl;
    }
}


float verificSaldo(float saldo){
    float resultado;
    if(saldo >=0 && saldo <=200){
        resultado = saldo;
    }else if (saldo >200 && saldo <= 400){
        resultado = saldo + (saldo *0.2);
    }else if(saldo > 400 && saldo <=600){
        resultado = saldo + (saldo * 0.3);
    }else {
        resultado = saldo + (saldo * 0.4);
    }
    return resultado;
}
 


int main() {
    float saldo;
    cout<< "Informe o seu saldo do banco : ";
    cin>>saldo;
    cout<<"Saldo e + credito : "<< verificSaldo(saldo);





   // float indice;
    //cout<<"Informe o indice de poluiçao: "<<endl;
    //cin>>indice;
    //alertaPoluicao(indice);

    //float kw;
   // cout<<"Informe o valor de kW :";
   // cin>> kw;
   // cout<< "O custo final de energia eh: "<<precoLuz(kw);
    
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
