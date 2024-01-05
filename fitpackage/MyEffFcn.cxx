/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

#include "MyEffFcn.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

#include "EfficiencyFcn.h"

ClassImp(MyEffFcn); 

 MyEffFcn::MyEffFcn(const char *name, const char *title, 
                        RooAbsReal& _x) :
   RooAbsReal(name,title), 
   x("x","x",this,_x)
 { 
 } 


 MyEffFcn::MyEffFcn(const MyEffFcn& other, const char* name) :  
   RooAbsReal(other,name), 
   x("x",this,other.x)
 { 
 } 



 Double_t MyEffFcn::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   double res = EffFcn(x);
   return res; 
 } 



