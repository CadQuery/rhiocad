// File generated by CPPExt (MPV)
//
#ifndef _BOPTColStd_CArray1OfInteger_OCWrappers_HeaderFile
#define _BOPTColStd_CArray1OfInteger_OCWrappers_HeaderFile

// include native header
#include <BOPTColStd_CArray1OfInteger.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCBOPTColStd_CArray1OfInteger  {

protected:
  BOPTColStd_CArray1OfInteger* nativeHandle;
  OCBOPTColStd_CArray1OfInteger(OCDummy^) {};

public:
  property BOPTColStd_CArray1OfInteger* Handle
  {
    BOPTColStd_CArray1OfInteger* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTColStd_CArray1OfInteger(BOPTColStd_CArray1OfInteger* nativeHandle);

// Methods PUBLIC


OCBOPTColStd_CArray1OfInteger(Standard_Integer Length, Standard_Integer BlockLength);


 /*instead*/  void Resize(Standard_Integer theNewLength) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  Standard_Integer FactLength() ;


 /*instead*/  Standard_Integer Append(Standard_Integer Value) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  Standard_Integer Value(Standard_Integer Index) ;


 /*instead*/  Standard_Integer ChangeValue(Standard_Integer Index) ;


 /*instead*/  void SetBlockLength(Standard_Integer aBL) ;


 /*instead*/  Standard_Integer BlockLength() ;


 /*instead*/  void Purge() ;

~OCBOPTColStd_CArray1OfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif