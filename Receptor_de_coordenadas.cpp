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
    double x1=puntos[0][0], y1=puntos[0][1];
    double x2=puntos[1][0], y2=puntos[1][1];

    A=y2-y1;
    B=x1-x2;
    C=x2*y1-x1*y2;

for (int i=2; i<3;++i){
        double x=puntos[i][0], y=puntos[i][1];
        if (A*x+B*y+C!= 0) return false;
    }
    return true;
}
