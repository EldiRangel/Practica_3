#include<iostream>
#include<cmath>
using namespace std;

bool dentroDelCuadrante(double x, double y, double x_min, double x_max, double y_min, double y_max){
    return (x>=x_min&&x<=x_max&&y>=y_min&&y<=y_max);
}
double Distancia(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
}
