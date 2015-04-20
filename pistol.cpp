/*This is the implementation file for the class 'Pistol'.*/

#include <string>
#include <iostream> //cout, endl
using std::string;
using std::cout;
using std::endl;
#include "pistol.h"

namespace gunsMMoore{

  Pistol::Pistol() : Handgun(), semiauto(false)
  {/*deliberately empty*/}
  
  Pistol::Pistol(const string& theManufacturer, const string& theCaliber, const string& theGrips, const string& theSights, bool theLaser, bool theSemiauto) : Handgun(theManufacturer, theCaliber, theGrips, theSights, theLaser), semiauto(theSemiauto)
  {/*deliberately empty*/}
  
  bool Pistol::getSemiauto() const
  {return semiauto;}
  
  void Pistol::setSemiauto(bool theSemiauto)
  {semiauto = theSemiauto;}
  
  string Pistol::printSemiauto(){
    if(semiauto)
      return "semi-auto";
    else
      return "not semi-auto";
  }
  
  void Pistol::print(){
    cout << "Pistol: " << getManufacturer() << ", " << getCaliber() << ", " << getGrips() << ", " << getSights() << ", " << printLaser() << ", " << printSemiauto() << endl;
  }

}
