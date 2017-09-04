// File generated by CPPExt (CPP file)
//

#include "IntTools_SurfaceRangeLocalizeData.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../TColgp/TColgp_HArray2OfPnt.h"
#include "IntTools_SurfaceRangeSample.h"
#include "../Bnd/Bnd_Box.h"
#include "IntTools_ListOfSurfaceRangeSample.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCIntTools_SurfaceRangeLocalizeData::OCIntTools_SurfaceRangeLocalizeData(IntTools_SurfaceRangeLocalizeData* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntTools_SurfaceRangeLocalizeData::OCIntTools_SurfaceRangeLocalizeData() 
{
  nativeHandle = new IntTools_SurfaceRangeLocalizeData();
}

OCIntTools_SurfaceRangeLocalizeData::OCIntTools_SurfaceRangeLocalizeData(Standard_Integer theNbSampleU, Standard_Integer theNbSampleV, Standard_Real theMinRangeU, Standard_Real theMinRangeV) 
{
  nativeHandle = new IntTools_SurfaceRangeLocalizeData(theNbSampleU, theNbSampleV, theMinRangeU, theMinRangeV);
}

OCIntTools_SurfaceRangeLocalizeData::OCIntTools_SurfaceRangeLocalizeData(OCNaroWrappers::OCIntTools_SurfaceRangeLocalizeData^ Other) 
{
  nativeHandle = new IntTools_SurfaceRangeLocalizeData(*((IntTools_SurfaceRangeLocalizeData*)Other->Handle));
}

OCIntTools_SurfaceRangeLocalizeData^ OCIntTools_SurfaceRangeLocalizeData::Assign(OCNaroWrappers::OCIntTools_SurfaceRangeLocalizeData^ Other)
{
  IntTools_SurfaceRangeLocalizeData* tmp = new IntTools_SurfaceRangeLocalizeData();
  *tmp = ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->Assign(*((IntTools_SurfaceRangeLocalizeData*)Other->Handle));
  return gcnew OCIntTools_SurfaceRangeLocalizeData(tmp);
}

 Standard_Integer OCIntTools_SurfaceRangeLocalizeData::GetNbSampleU()
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetNbSampleU();
}

 Standard_Integer OCIntTools_SurfaceRangeLocalizeData::GetNbSampleV()
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetNbSampleV();
}

 Standard_Real OCIntTools_SurfaceRangeLocalizeData::GetMinRangeU()
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetMinRangeU();
}

 Standard_Real OCIntTools_SurfaceRangeLocalizeData::GetMinRangeV()
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetMinRangeV();
}

 void OCIntTools_SurfaceRangeLocalizeData::AddOutRange(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ theRange)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->AddOutRange(*((IntTools_SurfaceRangeSample*)theRange->Handle));
}

 void OCIntTools_SurfaceRangeLocalizeData::AddBox(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ theRange, OCNaroWrappers::OCBnd_Box^ theBox)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->AddBox(*((IntTools_SurfaceRangeSample*)theRange->Handle), *((Bnd_Box*)theBox->Handle));
}

 System::Boolean OCIntTools_SurfaceRangeLocalizeData::FindBox(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ theRange, OCNaroWrappers::OCBnd_Box^ theBox)
{
  return OCConverter::StandardBooleanToBoolean(((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->FindBox(*((IntTools_SurfaceRangeSample*)theRange->Handle), *((Bnd_Box*)theBox->Handle)));
}

 System::Boolean OCIntTools_SurfaceRangeLocalizeData::IsRangeOut(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ theRange)
{
  return OCConverter::StandardBooleanToBoolean(((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->IsRangeOut(*((IntTools_SurfaceRangeSample*)theRange->Handle)));
}

 void OCIntTools_SurfaceRangeLocalizeData::ListRangeOut(OCNaroWrappers::OCIntTools_ListOfSurfaceRangeSample^ theList)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->ListRangeOut(*((IntTools_ListOfSurfaceRangeSample*)theList->Handle));
}

 void OCIntTools_SurfaceRangeLocalizeData::RemoveRangeOutAll()
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->RemoveRangeOutAll();
}

 void OCIntTools_SurfaceRangeLocalizeData::SetGridDeflection(Standard_Real theDeflection)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->SetGridDeflection(theDeflection);
}

 Standard_Real OCIntTools_SurfaceRangeLocalizeData::GetGridDeflection()
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetGridDeflection();
}

 void OCIntTools_SurfaceRangeLocalizeData::SetRangeUGrid(Standard_Integer theNbUGrid)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->SetRangeUGrid(theNbUGrid);
}

 Standard_Integer OCIntTools_SurfaceRangeLocalizeData::GetRangeUGrid()
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetRangeUGrid();
}

 void OCIntTools_SurfaceRangeLocalizeData::SetUParam(Standard_Integer theIndex, Standard_Real theUParam)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->SetUParam(theIndex, theUParam);
}

 Standard_Real OCIntTools_SurfaceRangeLocalizeData::GetUParam(Standard_Integer theIndex)
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetUParam(theIndex);
}

 void OCIntTools_SurfaceRangeLocalizeData::SetRangeVGrid(Standard_Integer theNbVGrid)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->SetRangeVGrid(theNbVGrid);
}

 Standard_Integer OCIntTools_SurfaceRangeLocalizeData::GetRangeVGrid()
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetRangeVGrid();
}

 void OCIntTools_SurfaceRangeLocalizeData::SetVParam(Standard_Integer theIndex, Standard_Real theVParam)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->SetVParam(theIndex, theVParam);
}

 Standard_Real OCIntTools_SurfaceRangeLocalizeData::GetVParam(Standard_Integer theIndex)
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetVParam(theIndex);
}

 void OCIntTools_SurfaceRangeLocalizeData::SetGridPoint(Standard_Integer theUIndex, Standard_Integer theVIndex, OCNaroWrappers::OCgp_Pnt^ thePoint)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->SetGridPoint(theUIndex, theVIndex, *((gp_Pnt*)thePoint->Handle));
}

OCgp_Pnt^ OCIntTools_SurfaceRangeLocalizeData::GetGridPoint(Standard_Integer theUIndex, Standard_Integer theVIndex)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetGridPoint(theUIndex, theVIndex);
  return gcnew OCgp_Pnt(tmp);
}

 void OCIntTools_SurfaceRangeLocalizeData::SetFrame(Standard_Real theUMin, Standard_Real theUMax, Standard_Real theVMin, Standard_Real theVMax)
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->SetFrame(theUMin, theUMax, theVMin, theVMax);
}

 Standard_Integer OCIntTools_SurfaceRangeLocalizeData::GetNBUPointsInFrame()
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetNBUPointsInFrame();
}

 Standard_Integer OCIntTools_SurfaceRangeLocalizeData::GetNBVPointsInFrame()
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetNBVPointsInFrame();
}

OCgp_Pnt^ OCIntTools_SurfaceRangeLocalizeData::GetPointInFrame(Standard_Integer theUIndex, Standard_Integer theVIndex)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetPointInFrame(theUIndex, theVIndex);
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCIntTools_SurfaceRangeLocalizeData::GetUParamInFrame(Standard_Integer theIndex)
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetUParamInFrame(theIndex);
}

 Standard_Real OCIntTools_SurfaceRangeLocalizeData::GetVParamInFrame(Standard_Integer theIndex)
{
  return ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->GetVParamInFrame(theIndex);
}

 void OCIntTools_SurfaceRangeLocalizeData::ClearGrid()
{
  ((IntTools_SurfaceRangeLocalizeData*)nativeHandle)->ClearGrid();
}

