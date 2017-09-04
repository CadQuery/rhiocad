// File generated by CPPExt (CPP file)
//

#include "BRepPrimAPI_MakeCone.h"
#include "../Converter.h"
#include "../gp/gp_Ax2.h"
#include "../BRepPrim/BRepPrim_Cone.h"


using namespace OCNaroWrappers;

OCBRepPrimAPI_MakeCone::OCBRepPrimAPI_MakeCone(BRepPrimAPI_MakeCone* nativeHandle) : OCBRepPrimAPI_MakeOneAxis((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepPrimAPI_MakeCone::OCBRepPrimAPI_MakeCone(Standard_Real R1, Standard_Real R2, Standard_Real H) : OCBRepPrimAPI_MakeOneAxis((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeCone(R1, R2, H);
}

OCBRepPrimAPI_MakeCone::OCBRepPrimAPI_MakeCone(Standard_Real R1, Standard_Real R2, Standard_Real H, Standard_Real angle) : OCBRepPrimAPI_MakeOneAxis((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeCone(R1, R2, H, angle);
}

OCBRepPrimAPI_MakeCone::OCBRepPrimAPI_MakeCone(OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real R1, Standard_Real R2, Standard_Real H) : OCBRepPrimAPI_MakeOneAxis((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeCone(*((gp_Ax2*)Axes->Handle), R1, R2, H);
}

OCBRepPrimAPI_MakeCone::OCBRepPrimAPI_MakeCone(OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real R1, Standard_Real R2, Standard_Real H, Standard_Real angle) : OCBRepPrimAPI_MakeOneAxis((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeCone(*((gp_Ax2*)Axes->Handle), R1, R2, H, angle);
}

 Standard_Address OCBRepPrimAPI_MakeCone::OneAxis()
{
  return ((BRepPrimAPI_MakeCone*)nativeHandle)->OneAxis();
}

OCBRepPrim_Cone^ OCBRepPrimAPI_MakeCone::Cone()
{
  BRepPrim_Cone* tmp = new BRepPrim_Cone(0, 123abc, 0, 0);
  *tmp = ((BRepPrimAPI_MakeCone*)nativeHandle)->Cone();
  return gcnew OCBRepPrim_Cone(tmp);
}

