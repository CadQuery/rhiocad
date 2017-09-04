// File generated by CPPExt (CPP file)
//

#include "BndLib.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 void OCBndLib::Add(OCNaroWrappers::OCgp_Lin^ L, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Lin*)L->Handle), P1, P2, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BndLib::Add(*((gp_Lin2d*)L->Handle), P1, P2, Tol, *((Bnd_Box2d*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Circ^ C, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Circ*)C->Handle), Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Circ^ C, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Circ*)C->Handle), P1, P2, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Circ2d^ C, Standard_Real Tol, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BndLib::Add(*((gp_Circ2d*)C->Handle), Tol, *((Bnd_Box2d*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Circ2d^ C, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BndLib::Add(*((gp_Circ2d*)C->Handle), P1, P2, Tol, *((Bnd_Box2d*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Elips^ C, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Elips*)C->Handle), Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Elips^ C, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Elips*)C->Handle), P1, P2, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Elips2d^ C, Standard_Real Tol, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BndLib::Add(*((gp_Elips2d*)C->Handle), Tol, *((Bnd_Box2d*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Elips2d^ C, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BndLib::Add(*((gp_Elips2d*)C->Handle), P1, P2, Tol, *((Bnd_Box2d*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Parab^ P, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Parab*)P->Handle), P1, P2, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Parab2d^ P, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BndLib::Add(*((gp_Parab2d*)P->Handle), P1, P2, Tol, *((Bnd_Box2d*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Hypr^ H, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Hypr*)H->Handle), P1, P2, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Hypr2d^ H, Standard_Real P1, Standard_Real P2, Standard_Real Tol, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BndLib::Add(*((gp_Hypr2d*)H->Handle), P1, P2, Tol, *((Bnd_Box2d*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real UMin, Standard_Real UMax, Standard_Real VMin, Standard_Real VMax, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Cylinder*)S->Handle), UMin, UMax, VMin, VMax, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real VMin, Standard_Real VMax, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Cylinder*)S->Handle), VMin, VMax, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Cone^ S, Standard_Real UMin, Standard_Real UMax, Standard_Real VMin, Standard_Real VMax, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Cone*)S->Handle), UMin, UMax, VMin, VMax, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Cone^ S, Standard_Real VMin, Standard_Real VMax, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Cone*)S->Handle), VMin, VMax, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Sphere^ S, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Sphere*)S->Handle), Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Sphere^ S, Standard_Real UMin, Standard_Real UMax, Standard_Real VMin, Standard_Real VMax, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Sphere*)S->Handle), UMin, UMax, VMin, VMax, Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Torus^ P, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Torus*)P->Handle), Tol, *((Bnd_Box*)B->Handle));
}

 void OCBndLib::Add(OCNaroWrappers::OCgp_Torus^ P, Standard_Real UMin, Standard_Real UMax, Standard_Real VMin, Standard_Real VMax, Standard_Real Tol, OCNaroWrappers::OCBnd_Box^ B)
{
  BndLib::Add(*((gp_Torus*)P->Handle), UMin, UMax, VMin, VMax, Tol, *((Bnd_Box*)B->Handle));
}

