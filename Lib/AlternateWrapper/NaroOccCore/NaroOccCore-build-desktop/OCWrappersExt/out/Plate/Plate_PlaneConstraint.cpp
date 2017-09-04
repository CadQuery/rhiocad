// File generated by CPPExt (CPP file)
//

#include "Plate_PlaneConstraint.h"
#include "../Converter.h"
#include "../gp/gp_XY.h"
#include "../gp/gp_Pln.h"
#include "Plate_LinearScalarConstraint.h"


using namespace OCNaroWrappers;

OCPlate_PlaneConstraint::OCPlate_PlaneConstraint(Plate_PlaneConstraint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPlate_PlaneConstraint::OCPlate_PlaneConstraint(OCNaroWrappers::OCgp_XY^ point2d, OCNaroWrappers::OCgp_Pln^ pln, Standard_Integer iu, Standard_Integer iv) 
{
  nativeHandle = new Plate_PlaneConstraint(*((gp_XY*)point2d->Handle), *((gp_Pln*)pln->Handle), iu, iv);
}

OCPlate_LinearScalarConstraint^ OCPlate_PlaneConstraint::LSC()
{
  Plate_LinearScalarConstraint* tmp = new Plate_LinearScalarConstraint();
  *tmp = ((Plate_PlaneConstraint*)nativeHandle)->LSC();
  return gcnew OCPlate_LinearScalarConstraint(tmp);
}

