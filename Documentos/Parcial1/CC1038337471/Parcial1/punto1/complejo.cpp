#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class complejo{

private:
  double parteReal;
  double parteImaginaria;

public:
  complejo(double,double);
  complejo();
  double asignarDatos();
  double obtenerParteReal();
  double obtenerParteImaginaria();
  void sumaComplejos();
  void restaComplejos();
  void imprimaComplejos();
};
complejo::complejo(){
  cout<<"HAGAMOS OPERACIONES CON COMPLEJOS"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"Los complejos ingresados son"<<endl;
}
complejo::complejo(double x, double y){
  parteReal=x;
  parteImaginaria=y;
  cout<<parteReal<<"+"<<parteImaginaria<<"i"<<endl;
}
double complejo::obtenerParteReal(){
  return parteReal;
}
double complejo::obtenerParteImaginaria(){
  return parteImaginaria;
}
void complejo::sumaComplejos(){
  //  asignarDatos();
  complejo c1(1,2);
  complejo c2(3,4);
  
  double real = c1.obtenerParteReal() +  c2.obtenerParteReal();
  double im =  c1.obtenerParteImaginaria() + c2.obtenerParteImaginaria();

  cout<<"El valor de la suma es: "<<real<<"+"<<im<<"i"<<endl;
  cout<<"---------------------------------------------------"<<endl;
  
}
void complejo::restaComplejos(){
  complejo c1(1,2);
  complejo c2(3,4);
  
  double real = c1.obtenerParteReal() -  c2.obtenerParteReal();
  double im =  c1.obtenerParteImaginaria() - c2.obtenerParteImaginaria();

  cout<<"El valor de la resta es: "<<real<<"-"<<im<<"i"<<endl;
  
}
int main(){
  complejo c;
  c.sumaComplejos();
  c.restaComplejos();
  return 0;
}

/*Es posible programar operaciones de multiplicacion y division si se conoce un resultado en forma general para estas, por ejemplo para la multiplicacion el resultado general es z1*z2=(x1+y1i)(x2+y2i)=((x1*x2-y1*y2)+(x1y2+x2y1)i)  */
