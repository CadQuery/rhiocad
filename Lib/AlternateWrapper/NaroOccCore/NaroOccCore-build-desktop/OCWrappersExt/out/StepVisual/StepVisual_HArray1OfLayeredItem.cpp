// File generated by CPPExt (CPP file)
//

#include "StepVisual_HArray1OfLayeredItem.h"
#include "../Converter.h"
#include "StepVisual_LayeredItem.h"
#include "StepVisual_Array1OfLayeredItem.h"


using namespace OCNaroWrappers;

OCStepVisual_HArray1OfLayeredItem::OCStepVisual_HArray1OfLayeredItem(Handle(StepVisual_HArray1OfLayeredItem)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_HArray1OfLayeredItem(*nativeHandle);
}

OCStepVisual_HArray1OfLayeredItem::OCStepVisual_HArray1OfLayeredItem(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_HArray1OfLayeredItem(new StepVisual_HArray1OfLayeredItem(Low, Up));
}

OCStepVisual_HArray1OfLayeredItem::OCStepVisual_HArray1OfLayeredItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepVisual_LayeredItem^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_HArray1OfLayeredItem(new StepVisual_HArray1OfLayeredItem(Low, Up, *((StepVisual_LayeredItem*)V->Handle)));
}

 void OCStepVisual_HArray1OfLayeredItem::Init(OCNaroWrappers::OCStepVisual_LayeredItem^ V)
{
  (*((Handle_StepVisual_HArray1OfLayeredItem*)nativeHandle))->Init(*((StepVisual_LayeredItem*)V->Handle));
}

 Standard_Integer OCStepVisual_HArray1OfLayeredItem::Length()
{
  return (*((Handle_StepVisual_HArray1OfLayeredItem*)nativeHandle))->Length();
}

 Standard_Integer OCStepVisual_HArray1OfLayeredItem::Lower()
{
  return (*((Handle_StepVisual_HArray1OfLayeredItem*)nativeHandle))->Lower();
}

 Standard_Integer OCStepVisual_HArray1OfLayeredItem::Upper()
{
  return (*((Handle_StepVisual_HArray1OfLayeredItem*)nativeHandle))->Upper();
}

 void OCStepVisual_HArray1OfLayeredItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepVisual_LayeredItem^ Value)
{
  (*((Handle_StepVisual_HArray1OfLayeredItem*)nativeHandle))->SetValue(Index, *((StepVisual_LayeredItem*)Value->Handle));
}

OCStepVisual_LayeredItem^ OCStepVisual_HArray1OfLayeredItem::Value(Standard_Integer Index)
{
  StepVisual_LayeredItem* tmp = new StepVisual_LayeredItem();
  *tmp = (*((Handle_StepVisual_HArray1OfLayeredItem*)nativeHandle))->Value(Index);
  return gcnew OCStepVisual_LayeredItem(tmp);
}

OCStepVisual_LayeredItem^ OCStepVisual_HArray1OfLayeredItem::ChangeValue(Standard_Integer Index)
{
  StepVisual_LayeredItem* tmp = new StepVisual_LayeredItem();
  *tmp = (*((Handle_StepVisual_HArray1OfLayeredItem*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepVisual_LayeredItem(tmp);
}

OCStepVisual_Array1OfLayeredItem^ OCStepVisual_HArray1OfLayeredItem::Array1()
{
  StepVisual_Array1OfLayeredItem* tmp = new StepVisual_Array1OfLayeredItem(0, 0);
  *tmp = (*((Handle_StepVisual_HArray1OfLayeredItem*)nativeHandle))->Array1();
  return gcnew OCStepVisual_Array1OfLayeredItem(tmp);
}

OCStepVisual_Array1OfLayeredItem^ OCStepVisual_HArray1OfLayeredItem::ChangeArray1()
{
  StepVisual_Array1OfLayeredItem* tmp = new StepVisual_Array1OfLayeredItem(0, 0);
  *tmp = (*((Handle_StepVisual_HArray1OfLayeredItem*)nativeHandle))->ChangeArray1();
  return gcnew OCStepVisual_Array1OfLayeredItem(tmp);
}


