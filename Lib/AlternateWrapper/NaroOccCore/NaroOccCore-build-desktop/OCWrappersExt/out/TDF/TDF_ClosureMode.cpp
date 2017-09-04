// File generated by CPPExt (CPP file)
//

#include "TDF_ClosureMode.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTDF_ClosureMode::OCTDF_ClosureMode(TDF_ClosureMode* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTDF_ClosureMode::OCTDF_ClosureMode(System::Boolean aMode) 
{
  nativeHandle = new TDF_ClosureMode(OCConverter::BooleanToStandardBoolean(aMode));
}

 void OCTDF_ClosureMode::Descendants(System::Boolean aStatus)
{
  ((TDF_ClosureMode*)nativeHandle)->Descendants(OCConverter::BooleanToStandardBoolean(aStatus));
}

 System::Boolean OCTDF_ClosureMode::Descendants()
{
  return OCConverter::StandardBooleanToBoolean(((TDF_ClosureMode*)nativeHandle)->Descendants());
}

 void OCTDF_ClosureMode::References(System::Boolean aStatus)
{
  ((TDF_ClosureMode*)nativeHandle)->References(OCConverter::BooleanToStandardBoolean(aStatus));
}

 System::Boolean OCTDF_ClosureMode::References()
{
  return OCConverter::StandardBooleanToBoolean(((TDF_ClosureMode*)nativeHandle)->References());
}

