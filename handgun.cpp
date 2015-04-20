/*This is the implementation file for the class 'Handgun'.*/

#include <string>
using std::string;
#include <iostream> //cout, endl
using std::cout;
using std::endl;
#include "handgun.h"

namespace gunsMMoore{
  Handgun::Handgun() : Gun(), grips("Unknown Grips"), sights("Unknown Sights"), laser(false)
  {/*deliberately empty*/}
  
  Handgun::Handgun(const string& theManufacturer, const string& theCaliber, const string& theGrips, const string& theSights, bool theLaser) : Gun(theManufacturer, theCaliber), grips(theGrips), sights(theSights), laser(theLaser)
  {/*deliberately empty*/}
  
  string Handgun::getGrips() const
  {return grips;}
  
  string Handgun::getSights() const
  {return sights;}
  
  bool Handgun::getLaser() const
  {return laser;}
  
  void Handgun::setGrips(const string& theGrips)
  {grips = theGrips;}
  
  void Handgun::setSights(const string& theSights)
  {sights = theSights;}
  
  void Handgun::setLaser(bool theLaser)
  {laser = theLaser;}
  
  string Handgun::printLaser(){
    if (laser)
      return "laser";
    else
      return "no laser";
  }
  
  void Handgun::print(){
    cout << "Handgun: " << getManufacturer() << ", " << getCaliber() << ", " << grips << ", " << sights << ", " << printLaser() << endl;
  }
}
