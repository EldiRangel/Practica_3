#include<iostream>
using namespace std;

void Cuadrante(double x, double y){
if (x>0&&y>0){
    cout<<"El punto ("<<x<<", "<<y<<") ubicado en el primer cuadrante."<<endl;
    } else if (x<0&&y>0){
    cout<<"El punto ("<<x<<", "<<y<<") ubicado en el segundo cuadrante."<<endl;
    } else if (x<0&&y<0){
    cout<<"El punto ("<<x<<", "<<y<<") ubicado en el tercer cuadrante."<<endl;
    } else if (x>0&&y<0){
    cout<<"El punto ("<<x<<", "<<y<<") ubicado en el cuarto cuadrante."<<endl;
    } else if (x==0&&y==0){
    cout<<"El punto ("<<x<<", "<<y<<") ubicado en el origen."<<endl;
    } else if (x==0){
    cout<<"El punto ("<<x<<", "<<y<<") ubicado en el eje Y."<<endl;
    } else if (y==0){
     cout<<"El punto ("<<x<<", "<<y<<") ubicado en el eje X."<<endl;
    }
}

bool enLaMismaLinea(double puntos[3][2], double &A, double &B, double &C){




}
