/*
This is the header file for the class 'Handgun'.
The class 'Handgun' is derived from the class 'Gun'.
This is primarily intended to be used as a base class
to derive classes for different kinds of handguns.
*/

#ifndef HANDGUN_H
#define HANDGUN_H

#include <string>
using std::string;
#include <iostream> //cout, endl
using std::cout;
using std::endl;
#include "gun.h"

namespace gunsMMoore{
  class Handgun : public Gun{
    public:
      Handgun();
      Handgun(const string& theManufacturer, const string& theCaliber, const string& theGrips, const string& theSights, bool theLaser);
      string getGrips() const;
      string getSights() const;
      bool getLaser() const;
      void setGrips(const string& theGrips);
      void setSights(const string& theSights);
      void setLaser(bool theLaser);
      string printLaser();
      void print(); //add 'virtual'? !!!!!!
    private:
      string grips;
      string sights;
      bool laser;
  };
}

#endif //HANDGUN_H
