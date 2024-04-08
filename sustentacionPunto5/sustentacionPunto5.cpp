#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;


struct game
{
    string nombre;
    string categoria;
    string añoLanzamiento;
    string plataforma;
    string desarrollador;
};

//Creación lista para VideoJuegos.
vector<game> videojuegos;

//Crear función para Agregar un nuevo VideoJuego.
void agregarVideojuego() {
    game nuevoJuego;
    cout<< "Ingrese el nombre del videojuego: "; 
    cin>> nuevoJuego.nombre;
    cout<< "Ingrese la categoría del videojuego: ";
    cin>> nuevoJuego.categoria;
    cout<< "Ingrese el desarrollador: ";
    cin>> nuevoJuego.desarrollador;
    cout<< "Ingrese el año de lanzamiento: ";
    cin>> nuevoJuego.añoLanzamiento;
    cout<< "Ingrese la plataforma: ";
    cin>> nuevoJuego.plataforma;
    videojuegos.push_back(nuevoJuego);
}

//función Para Mostrar VideoJuegos ordenados por Titulo.
void mostrarVideojuegosOrdenadosPorTitulo(){
}
//función para Mostrar VideoJuegos ordenados por Plataforma.
void mostrarVideojuegosPorPlataforma(){
cout<<"Ingrese la Plataforma de la cual desea ver los juegos: "<<endl;
}
//función Para Mostrar VideoJuegos ordenados por Año de Lanzamiento.
void mostrarVideojuegosOrdenadosPorAño(){

}


int main()
{
int opcion;

cout<<"Bienvenido a la plataforma de juegos"<<endl;
cout<<"****Menú Para el Usuario****"<<endl;
cout<<"1) Agregar un VideoJuego a la colección."<<endl;
cout<<"2) Consultar lista de videojuegos ordenados por titulo."<<endl;
cout<<"3) Consultar lista de videojuegos ordenados por año de lanzamiento."<<endl;
cout<<"4) Consultar videojuegos por plataforma."<<endl;
cout<<"5) Salir del Programa."<<endl;
cout<<"Ingrese su opción: ";
cin>>opcion;
//Se agrega el Switch para que el Programa pueda ejecutar la opcion le dio el Usuario.
switch (opcion)
{
case 1:
    agregarVideojuego();
    break;
case 2:
    mostrarVideojuegosOrdenadosPorTitulo();
    break;
case 3: 
    mostrarVideojuegosOrdenadosPorAño();
    break;
case 4:
    mostrarVideojuegosPorPlataforma();
    break;
case 5:
    cout<<"Vuelve pronto!!"<<endl;
}
}

//mostar lista videojuegos en orden ascendente (a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z).