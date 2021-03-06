// File generated by CPPExt (Transient)
//
#ifndef _TDF_RelocationTable_OCWrappers_HeaderFile
#define _TDF_RelocationTable_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_RelocationTable.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TDF_LabelDataMap.h"
#include "TDF_AttributeDataMap.h"
#include "../TColStd/TColStd_IndexedDataMapOfTransientTransient.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_Attribute;
ref class OCStandard_Transient;
ref class OCTDF_LabelMap;
ref class OCTDF_AttributeMap;
ref class OCTDF_LabelDataMap;
ref class OCTDF_AttributeDataMap;
ref class OCTColStd_IndexedDataMapOfTransientTransient;


//! This is a relocation dictionnary between source <br>
//!          and target labels, attributes or any <br>
//!          transient. Note that one target value may be the <br>
//!          relocation value of more than one source object. <br>
//! <br>
//!          Common behaviour: it returns true and the found <br>
//!          relocation value as target object; false <br>
//!          otherwise. <br>
//! <br>
//!          Look at SelfRelocate method for more explanation <br>
//!          about self relocation behavior of this class. <br>
public ref class OCTDF_RelocationTable : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTDF_RelocationTable(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_RelocationTable(Handle(TDF_RelocationTable)* nativeHandle);

// Methods PUBLIC

//! Creates an relocation table. <selfRelocate> says <br>
//!          if a value without explicit relocation is its own <br>
//!          relocation. <br>
OCTDF_RelocationTable(System::Boolean selfRelocate);

//! Sets <mySelfRelocate> to <selfRelocate>. <br>
//! <br>
//!          This flag affects the HasRelocation method <br>
//!          behavior like this: <br>
//! <br>
//!          <mySelfRelocate> == False: <br>
//! <br>
//!          If no relocation object is found in the map, a <br>
//!          null object is returned <br>
//! <br>
//!          <mySelfRelocate> == True: <br>
//! <br>
//!          If no relocation object is found in the map, the <br>
//!          method assumes the source object is relocation <br>
//!          value; so the source object is returned as target <br>
//!          object. <br>
 /*instead*/  void SelfRelocate(System::Boolean selfRelocate) ;

//! Returns <mySelfRelocate>. <br>
 /*instead*/  System::Boolean SelfRelocate() ;


 /*instead*/  void AfterRelocate(System::Boolean afterRelocate) ;

//! Returns <myAfterRelocate>. <br>
 /*instead*/  System::Boolean AfterRelocate() ;

//! Sets the relocation value of <aSourceLabel> to <br>
//!          <aTargetLabel>. <br>
 /*instead*/  void SetRelocation(OCNaroWrappers::OCTDF_Label^ aSourceLabel, OCNaroWrappers::OCTDF_Label^ aTargetLabel) ;

//! Finds the relocation value of <aSourceLabel> <br>
//!          and returns it into <aTargetLabel>. <br>
//! <br>
//!          (See above SelfRelocate method for more <br>
//!          explanation about the method behavior) <br>
 /*instead*/  System::Boolean HasRelocation(OCNaroWrappers::OCTDF_Label^ aSourceLabel, OCNaroWrappers::OCTDF_Label^ aTargetLabel) ;

//! Sets the relocation value of <aSourceAttribute> to <br>
//!          <aTargetAttribute>. <br>
 /*instead*/  void SetRelocation(OCNaroWrappers::OCTDF_Attribute^ aSourceAttribute, OCNaroWrappers::OCTDF_Attribute^ aTargetAttribute) ;

//! Finds the relocation value of <aSourceAttribute> <br>
//!          and returns it into <aTargetAttribute>. <br>
//! <br>
//!          (See above SelfRelocate method for more <br>
//!          explanation about the method behavior) <br>
 /*instead*/  System::Boolean HasRelocation(OCNaroWrappers::OCTDF_Attribute^ aSourceAttribute, OCNaroWrappers::OCTDF_Attribute^ aTargetAttribute) ;

//! Sets the relocation value of <aSourceTransient> to <br>
//!          <aTargetTransient>. <br>
 /*instead*/  void SetTransientRelocation(OCNaroWrappers::OCStandard_Transient^ aSourceTransient, OCNaroWrappers::OCStandard_Transient^ aTargetTransient) ;

//! Finds the relocation value of <aSourceTransient> <br>
//!          and returns it into <aTargetTransient>. <br>
//! <br>
//!          (See above SelfRelocate method for more <br>
//!          explanation about the method behavior) <br>
 /*instead*/  System::Boolean HasTransientRelocation(OCNaroWrappers::OCStandard_Transient^ aSourceTransient, OCNaroWrappers::OCStandard_Transient^ aTargetTransient) ;

//! Clears the relocation dictionnary, but lets the <br>
//!          self relocation flag to its current value. <br>
 /*instead*/  void Clear() ;

//! Fills <aLabelMap> with target relocation <br>
//!          labels. <aLabelMap> is not cleared before use. <br>
 /*instead*/  void TargetLabelMap(OCNaroWrappers::OCTDF_LabelMap^ aLabelMap) ;

//! Fills <anAttributeMap> with target relocation <br>
//!          attributes. <anAttributeMap> is not cleared before <br>
//!          use. <br>
 /*instead*/  void TargetAttributeMap(OCNaroWrappers::OCTDF_AttributeMap^ anAttributeMap) ;

//! Returns <myLabelTable> to be used or updated. <br>
//! <br>
 /*instead*/  OCTDF_LabelDataMap^ LabelTable() ;

//! Returns <myAttributeTable> to be used or updated. <br>
//! <br>
 /*instead*/  OCTDF_AttributeDataMap^ AttributeTable() ;

//! Returns <myTransientTable> to be used or updated. <br>
//! <br>
 /*instead*/  OCTColStd_IndexedDataMapOfTransientTransient^ TransientTable() ;

//! Dumps the relocation table. <br>
//! <br>
 /*instead*/  Standard_OStream& Dump(System::Boolean dumpLabels, System::Boolean dumpAttributes, System::Boolean dumpTransients, Standard_OStream& anOS) ;

~OCTDF_RelocationTable()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
