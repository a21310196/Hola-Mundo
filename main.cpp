
#include <iostream>
#include<Alimento.hpp>
#include<Mascota.hpp>
#include<Animacion.hpp>
#include<Dibujo.hpp>

   using namespace std;


int main(int argc, char const *argv[])
{
   
   Mascota firulais,mascota;
   Alimento carne(10);

   firulais.Comer(carne);
   firulais.jugar();
   firulais.jugar();
   firulais.jugar();

   cout
   <<"Vida de firulais"
   <<firulais.LeerVida()
   <<endl;
   
   Dibujo dibujo("./assetes/Lacalaca.txt");
   Dibujo dibujo2("./assetes/Fanyasmon.txt");

   list<Dibujo> dibujos;
   dibujos.push_back(dibujo);
   dibujos.push_back(dibujo2);

   Animacion animacion(dibujos);
   animacion.Reproducir();
cout<<"Lacalaca.txt"
<<endl;
    return 0;
}
