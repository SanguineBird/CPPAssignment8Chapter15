/*
This is the header file for the class 'Gun'.
This is primarily intended to be used as a base class
to derive classes for different kinds of guns.
*/

#ifndef GUN_H
#define GUN_H

#include <string>
using std::string;
#include <iostream> //cout, endl
using std::cout;
using std::endl;

namespace gunsMMoore{
  class Gun{
    public:
      Gun();
      Gun(const string& theManufacturer, const string& theCaliber);
      string getManufacturer() const;
      string getCaliber() const;
      void setManufacturer(const string& theManufacturer);
      void setCaliber(const string& theCaliber);
      virtual void print();
    private:
      string manufacturer;
      string caliber;
  };
}

#endif //GUN_H
