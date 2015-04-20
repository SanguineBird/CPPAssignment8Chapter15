/*
This is the header file for the class 'Pistol'.
The class 'Pistol' is derived from the class 'Handgun'
which is derived from the class 'Gun'.
*/

#ifndef PISTOL_H
#define PISTOL_H

#include <string>
using std::string;
#include <iostream> //cout, endl
using std::cout;
using std::endl;
#include "handgun.h"

namespace gunsMMoore{
  class Pistol : public Handgun{
    public:
      Pistol();
      Pistol(const string& theManufacturer, const string& theCaliber, const string& theGrips, const string& theSights, bool theLaser, bool theSemiauto);
      bool getSemiauto() const;
      void setSemiauto(bool theSemiauto);
      string printSemiauto();
      void print();
    private:
      bool semiauto;
  };
}

#endif //PISTOL_H
