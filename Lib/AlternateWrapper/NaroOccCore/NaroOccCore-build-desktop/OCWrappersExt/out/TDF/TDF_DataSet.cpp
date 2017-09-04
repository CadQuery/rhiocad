// File generated by CPPExt (CPP file)
//

#include "TDF_DataSet.h"
#include "../Converter.h"
#include "TDF_Label.h"
#include "TDF_LabelMap.h"
#include "TDF_Attribute.h"
#include "TDF_AttributeMap.h"
#include "TDF_LabelList.h"


using namespace OCNaroWrappers;

OCTDF_DataSet::OCTDF_DataSet(Handle(TDF_DataSet)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDF_DataSet(*nativeHandle);
}

OCTDF_DataSet::OCTDF_DataSet() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDF_DataSet(new TDF_DataSet());
}

 void OCTDF_DataSet::Clear()
{
  (*((Handle_TDF_DataSet*)nativeHandle))->Clear();
}

 System::Boolean OCTDF_DataSet::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDF_DataSet*)nativeHandle))->IsEmpty());
}

 void OCTDF_DataSet::AddLabel(OCNaroWrappers::OCTDF_Label^ aLabel)
{
  (*((Handle_TDF_DataSet*)nativeHandle))->AddLabel(*((TDF_Label*)aLabel->Handle));
}

 System::Boolean OCTDF_DataSet::ContainsLabel(OCNaroWrappers::OCTDF_Label^ aLabel)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDF_DataSet*)nativeHandle))->ContainsLabel(*((TDF_Label*)aLabel->Handle)));
}

OCTDF_LabelMap^ OCTDF_DataSet::Labels()
{
  TDF_LabelMap* tmp = new TDF_LabelMap(0);
  *tmp = (*((Handle_TDF_DataSet*)nativeHandle))->Labels();
  return gcnew OCTDF_LabelMap(tmp);
}

 void OCTDF_DataSet::AddAttribute(OCNaroWrappers::OCTDF_Attribute^ anAttribute)
{
  (*((Handle_TDF_DataSet*)nativeHandle))->AddAttribute(*((Handle_TDF_Attribute*)anAttribute->Handle));
}

 System::Boolean OCTDF_DataSet::ContainsAttribute(OCNaroWrappers::OCTDF_Attribute^ anAttribute)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDF_DataSet*)nativeHandle))->ContainsAttribute(*((Handle_TDF_Attribute*)anAttribute->Handle)));
}

OCTDF_AttributeMap^ OCTDF_DataSet::Attributes()
{
  TDF_AttributeMap* tmp = new TDF_AttributeMap(0);
  *tmp = (*((Handle_TDF_DataSet*)nativeHandle))->Attributes();
  return gcnew OCTDF_AttributeMap(tmp);
}

 void OCTDF_DataSet::AddRoot(OCNaroWrappers::OCTDF_Label^ aLabel)
{
  (*((Handle_TDF_DataSet*)nativeHandle))->AddRoot(*((TDF_Label*)aLabel->Handle));
}

OCTDF_LabelList^ OCTDF_DataSet::Roots()
{
  TDF_LabelList* tmp = new TDF_LabelList();
  *tmp = (*((Handle_TDF_DataSet*)nativeHandle))->Roots();
  return gcnew OCTDF_LabelList(tmp);
}

 Standard_OStream& OCTDF_DataSet::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDF_DataSet*)nativeHandle))->Dump(anOS);
}

