// File generated by CPPExt (CPP file)
//

#include "AdvApp2Var_Node.h"
#include "../Converter.h"
#include "../TColgp/TColgp_HArray2OfPnt.h"
#include "../TColStd/TColStd_HArray2OfReal.h"
#include "../gp/gp_XY.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCAdvApp2Var_Node::OCAdvApp2Var_Node(AdvApp2Var_Node* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAdvApp2Var_Node::OCAdvApp2Var_Node() 
{
  nativeHandle = new AdvApp2Var_Node();
}

OCAdvApp2Var_Node::OCAdvApp2Var_Node(Standard_Integer iu, Standard_Integer iv) 
{
  nativeHandle = new AdvApp2Var_Node(iu, iv);
}

OCAdvApp2Var_Node::OCAdvApp2Var_Node(OCNaroWrappers::OCgp_XY^ UV, Standard_Integer iu, Standard_Integer iv) 
{
  nativeHandle = new AdvApp2Var_Node(*((gp_XY*)UV->Handle), iu, iv);
}

OCgp_XY^ OCAdvApp2Var_Node::Coord()
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((AdvApp2Var_Node*)nativeHandle)->Coord();
  return gcnew OCgp_XY(tmp);
}

 void OCAdvApp2Var_Node::SetCoord(Standard_Real x1, Standard_Real x2)
{
  ((AdvApp2Var_Node*)nativeHandle)->SetCoord(x1, x2);
}

 Standard_Integer OCAdvApp2Var_Node::UOrder()
{
  return ((AdvApp2Var_Node*)nativeHandle)->UOrder();
}

 Standard_Integer OCAdvApp2Var_Node::VOrder()
{
  return ((AdvApp2Var_Node*)nativeHandle)->VOrder();
}

 void OCAdvApp2Var_Node::SetPoint(Standard_Integer iu, Standard_Integer iv, OCNaroWrappers::OCgp_Pnt^ Cte)
{
  ((AdvApp2Var_Node*)nativeHandle)->SetPoint(iu, iv, *((gp_Pnt*)Cte->Handle));
}

OCgp_Pnt^ OCAdvApp2Var_Node::Point(Standard_Integer iu, Standard_Integer iv)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((AdvApp2Var_Node*)nativeHandle)->Point(iu, iv);
  return gcnew OCgp_Pnt(tmp);
}

 void OCAdvApp2Var_Node::SetError(Standard_Integer iu, Standard_Integer iv, Standard_Real error)
{
  ((AdvApp2Var_Node*)nativeHandle)->SetError(iu, iv, error);
}

 Standard_Real OCAdvApp2Var_Node::Error(Standard_Integer iu, Standard_Integer iv)
{
  return ((AdvApp2Var_Node*)nativeHandle)->Error(iu, iv);
}


