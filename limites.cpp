#include<iostream>
#include<cmath>
using namespace std;

bool dentroDelCuadrante(double x, double y, double x_min, double x_max, double y_min, double y_max){
    return (x>=x_min&&x<=x_max&&y>=y_min&&y<=y_max);
}
double Distancia(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
}

int main(){
    const int num_puntos=5; 
    double puntos[num_puntos][2]={
        {1.0, 2.0},
        {-1.0, -2.0},
        {3.0, 4.0},
        {5.0, 6.0},
        {7.0, 8.0}
    };
    
    double xmin, xmax, ymin, ymax;
    cout<<"Introduce los limites del cuadrante (x_minimo): ";
    cin>>xmin;
    cout<<"Introduce los limites del cuadrante (x_maximo): ";
    cin>>xmax;
    cout<<"Introduce los limites del cuadrante (y_minimo): ";
    cin>>ymin;
    cout<<"Introduce los limites del cuadrante (y_maximo): ";
    cin>>ymax;
