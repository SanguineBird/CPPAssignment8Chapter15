/*This is the implementation file for the class 'Gun'.*/

#include <string>
using std::string;
#include <iostream> //cout, endl
using std::cout;
using std::endl;
#include "gun.h"

namespace gunsMMoore{
  Gun::Gun() : manufacturer("Unknown Manufacturer"), caliber("Unknown Caliber")
  {/*deliberately empty*/}
  
  Gun::Gun(const string& theManufacturer, const string& theCaliber) : manufacturer(theManufacturer), caliber(theCaliber)
  {/*deliberately empty*/}
  
  string Gun::getManufacturer() const {return manufacturer;}
  
  string Gun::getCaliber() const {return caliber;}
  
  void Gun::setManufacturer(const string& theManufacturer)
  {manufacturer = theManufacturer;}
  
  void Gun::setCaliber(const string& theCaliber)
  {caliber = theCaliber;}
  
  void Gun::print(){
    cout << "Gun: " << manufacturer << ", " << caliber << endl;
  }
}
