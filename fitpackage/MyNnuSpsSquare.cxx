/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

#include "MyNnuSpsSquare.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

#include <complex>
#include "SpsDpsFcn.h"

ClassImp(MyNnuSpsSquare); 

 MyNnuSpsSquare::MyNnuSpsSquare(const char *name, const char *title, 
                        RooAbsReal& _x,
                        RooAbsReal& _mth,
                        RooAbsReal& _a,
                        RooAbsReal& _p0,
                        RooAbsReal& _p1,
                        RooAbsReal& _p2,
                        RooAbsReal& _p3,
                        RooAbsReal& _p4,
                        RooAbsReal& _coef,
                        RooAbsReal& _phi) :
   RooAbsPdf(name,title), 
   x("x","x",this,_x),
   mth("mth","mth",this,_mth),
   a("a","a",this,_a),
   p0("p0","p0",this,_p0),
   p1("p1","p1",this,_p1),
   p2("p2","p2",this,_p2),
   p3("p3","p3",this,_p3),
   p4("p4","p4",this,_p4),
   coef("coef","coef",this,_coef),
   phi("phi","phi",this,_phi)
 { 
 } 


 MyNnuSpsSquare::MyNnuSpsSquare(const MyNnuSpsSquare& other, const char* name) :  
   RooAbsPdf(other,name), 
   x("x",this,other.x),
   mth("mth",this,other.mth),
   a("a",this,other.a),
   p0("p0",this,other.p0),
   p1("p1",this,other.p1),
   p2("p2",this,other.p2),
   p3("p3",this,other.p3),
   p4("p4",this,other.p4),
   coef("coef",this,other.coef),
   phi("phi",this,other.phi)
 { 
 } 



 Double_t MyNnuSpsSquare::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   double coef_ = coef;
   double phi_ = phi;
   std::complex<double> cpl = std::polar<double>(coef_, phi_);
   double rawSps = SqrtExpPoly(x, mth, a, p0, p1, p2, p3, p4);
   double res = std::norm(cpl) * rawSps;
   return res;
 } 



