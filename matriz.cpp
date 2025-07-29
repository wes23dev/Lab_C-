#include <iostream>
using namespace std;
void preencherM(int** m, int n){
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<"Informe um num : "<<endl;
            cin>>m[i][j];
        }
    }
}   

void imprimirM(int** m, int n){
    cout<<"Matriz "<<endl;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
int somaMTriangularInf(int** m, int n){
    int soma = 0;
   for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(j<=i){
                cout<<m[i][j]<<" ";
                soma += m[i][j];
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
   }
   return soma;
}
void compararMatriz(int** m1, int** m2, int n){
    int soma1 = 0;
    int soma2 = 0;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i != 0 && j != 1){
                soma1 += m1[i][j];
                soma2 += m2[i][j];
            }
        }
    }
    if(soma1 > soma2){
        cout<<"A matriz de maior valor eh a matriz 1, com o valor : "<<soma1<<endl;
        imprimirM(m1, n);
    }else if(soma2 > soma1 ){
        cout<<"A matriz de maior valor eh a matriz 2, com o valor : "<<soma2<<endl;
        imprimirM(m2, n);
    }else{
        cout<<"As duas tem o msm valor. "<<soma1<<endl;
    }
}
void substituirEContarColunas(int** matriz, int n, int valor) {
    int* contColunas = new int[n](); // inicializa com 0 ()

    cout << "Matriz apos substituicoes:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == valor) {
                matriz[i][j] = 0;
                contColunas[j]++;
            }
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    
    int maxColuna = 0;
    for (int j = 1; j < n; j++) {
        if (contColunas[j] > contColunas[maxColuna]) {
            maxColuna = j;
        }
    }
    cout << "Coluna com mais substituicoes: " << maxColuna << endl;

   
}


int main(){
    int n = 3;

    int** m1 = new int*[n];
    int** m2 = new int*[n];

    for(int i = 0 ; i < n ; i++){
        m1[i]= new int[n];
        m2[i] = new int[n];
    }
    cout<<"Matriz 1- "<<endl;
    preencherM(m1,n);
    cout<<"Matriz 2- "<<endl;
    preencherM(m2,n);

    int somaMatrizTrian = somaMTriangularInf(m1,n);
    cout<<"A soma da matriz 1 (triangularInferior) eh - "<<somaMatrizTrian<<endl;

    compararMatriz(m1,m2,n);

    int numSubtituir;
    cout<<"Informe o numero que queira substituir por 0 na matriz1 :";
    cin>>numSubtituir;
    substituirEContarColunas(m1, n, numSubtituir);
    return 0;
}
