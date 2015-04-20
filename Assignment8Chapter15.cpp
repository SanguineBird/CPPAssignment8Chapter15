/*
Meghan Moore
April 4, 2015
CIT 245 - Data Structures and Programming C++
Assignment 8 - Chapter 15
Purpose: Demonstrate polymorphism using the virutal function 'print()'.
*/

#include <iostream> //cin, cout, cerr, endl
#include <cstdlib> //system
using namespace std;
#include "revolver.h"
#include "pistol.h"
using gunsMMoore::Revolver;
using gunsMMoore::Pistol;

int main(){
  int numGuns = 2;
  Handgun gunCabinet[numGuns];
  
  Revolver rev("Smith & Wesson", "0.357", "hoague grips", "Trijicon", true, false, 6);
  Pistol pis("Glock", "9mm", "manufacturer's grips", "3 dot sights", false, true);
  
  gunCabinet[0] = rev;
  gunCabinet[1] = pis;
  
  cout << "My Gun Cabinet Contains:\n"
  for(int i = 0; i < numGuns; i++)
    gunCabinet[i]->print();
  
  system("pause");
  return 0;
} //end main
