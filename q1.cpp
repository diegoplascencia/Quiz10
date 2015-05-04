#include <iostream>
using namespace std;
int findThrees(int arre[], int x){

   int suma=0;
    for (int i=0; i<x; i++){
        cout<<"Introduce los numeros de tu arerglo"<<endl;
        cin>>arre[i];
        if((arre[i]%3)==0){
            sum = sum + arre[i];
        }
    }
    return sum;
    
int main(){
    int x;
    cout<<"Indique el tamaño de la lista"<<endl;
    cin>>x;
    int arre[x];
    cout<<"La suma de todos los numeros que son divisibles entre 3 son: "<<findThrees(arre, x)<<endl;
    return 0;
    }
