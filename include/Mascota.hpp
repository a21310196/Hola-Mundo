#pragma once
#include<Alimento.hpp>

class Mascota{
private:
    int vida;
public:
    Mascota(){
       this->vida =0;
    }
  void Comer (Alimento alimento) {
    this->vida += 
    alimento.ExtraerEnergia();
  } 
  void jugar(){
    this->vida-=2;
  }
  int LeerVida(){
    return this->vida;
  }
};