// File generated by CPPExt (Transient)
//
#ifndef _Quantity_HArray1OfColor_OCWrappers_HeaderFile
#define _Quantity_HArray1OfColor_OCWrappers_HeaderFile

// include the wrapped class
#include <Quantity_HArray1OfColor.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Quantity_Array1OfColor.h"


namespace OCNaroWrappers
{

ref class OCQuantity_Color;
ref class OCQuantity_Array1OfColor;



public ref class OCQuantity_HArray1OfColor : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCQuantity_HArray1OfColor(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCQuantity_HArray1OfColor(Handle(Quantity_HArray1OfColor)* nativeHandle);

// Methods PUBLIC


OCQuantity_HArray1OfColor(Standard_Integer Low, Standard_Integer Up);


OCQuantity_HArray1OfColor(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCQuantity_Color^ V);


 /*instead*/  void Init(OCNaroWrappers::OCQuantity_Color^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCQuantity_Color^ Value) ;


 /*instead*/  OCQuantity_Color^ Value(Standard_Integer Index) ;


 /*instead*/  OCQuantity_Color^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCQuantity_Array1OfColor^ Array1() ;


 /*instead*/  OCQuantity_Array1OfColor^ ChangeArray1() ;

~OCQuantity_HArray1OfColor()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif