#include <iostream>
using namespace std;
int l;
long double ProPu (int vec1[], int vec2[]){
float dot, suma=0;   
    for(int i=0; i<l; i++)
	{
    dot=vec1[i]*vec2[i];
    suma= suma + dot;
    }   
  return suma;
}
int main (){
cout << "Escriba la longitud de sus vectores " << endl;
cin >> l;
int x, vec1[l], vec2[l];
for(int i=0; i<l; i++){
cout<<"Introduzca los valores del primer vector:"<<endl;
cin>> x;
vec1[i]=x;
}
for(int i=0; i<l; i++){
cout<<"Introduzca los valores del segundo vector:"<<endl;
cin>> x;
v2[i]=x;
}
cout<<"El producto punto es "<<ProPu (vec1, vec2)<<endl;
return 0}
