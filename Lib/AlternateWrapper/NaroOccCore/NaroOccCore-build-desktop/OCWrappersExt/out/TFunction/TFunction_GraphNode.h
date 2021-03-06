// File generated by CPPExt (Transient)
//
#ifndef _TFunction_GraphNode_OCWrappers_HeaderFile
#define _TFunction_GraphNode_OCWrappers_HeaderFile

// include the wrapped class
#include <TFunction_GraphNode.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"

#include "../TColStd/TColStd_MapOfInteger.h"
#include "TFunction_ExecutionStatus.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCStandard_GUID;
ref class OCTColStd_MapOfInteger;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;
ref class OCTDF_DataSet;


//! Provides links between functions. <br>
public ref class OCTFunction_GraphNode : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTFunction_GraphNode(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTFunction_GraphNode(Handle(TFunction_GraphNode)* nativeHandle);

// Methods PUBLIC

//! Static methods <br>
//!          ============== <br>//! Finds or Creates a graph node attribute at the label <L>. <br>
//!          Returns the attribute. <br>
static /*instead*/  OCTFunction_GraphNode^ Set(OCNaroWrappers::OCTDF_Label^ L) ;

//! Returns the GUID for GraphNode attribute. <br>//! Instant methods <br>
//!          =============== <br>//! Constructor (empty). <br>
static /*instead*/  OCStandard_GUID^ GetID() ;


OCTFunction_GraphNode();

//! Defines a reference to the function as a previous one. <br>
 /*instead*/  System::Boolean AddPrevious(Standard_Integer funcID) ;

//! Defines a reference to the function as a previous one. <br>
 /*instead*/  System::Boolean AddPrevious(OCNaroWrappers::OCTDF_Label^ func) ;

//! Removes a reference to the function as a previous one. <br>
 /*instead*/  System::Boolean RemovePrevious(Standard_Integer funcID) ;

//! Removes a reference to the function as a previous one. <br>
 /*instead*/  System::Boolean RemovePrevious(OCNaroWrappers::OCTDF_Label^ func) ;

//! Returns a map of previous functions. <br>
 /*instead*/  OCTColStd_MapOfInteger^ GetPrevious() ;

//! Clears a map of previous functions. <br>
 /*instead*/  void RemoveAllPrevious() ;

//! Defines a reference to the function as a next one. <br>
 /*instead*/  System::Boolean AddNext(Standard_Integer funcID) ;

//! Defines a reference to the function as a next one. <br>
 /*instead*/  System::Boolean AddNext(OCNaroWrappers::OCTDF_Label^ func) ;

//! Removes a reference to the function as a next one. <br>
 /*instead*/  System::Boolean RemoveNext(Standard_Integer funcID) ;

//! Removes a reference to the function as a next one. <br>
 /*instead*/  System::Boolean RemoveNext(OCNaroWrappers::OCTDF_Label^ func) ;

//! Returns a map of next functions. <br>
 /*instead*/  OCTColStd_MapOfInteger^ GetNext() ;

//! Clears a map of next functions. <br>
 /*instead*/  void RemoveAllNext() ;

//! Returns the execution status of the function. <br>
 /*instead*/  OCTFunction_ExecutionStatus GetStatus() ;

//! Defines an execution status for a function. <br>//! Implementation of Attribute methods <br>
//!          =================================== <br>
 /*instead*/  void SetStatus(OCTFunction_ExecutionStatus status) ;


 /*instead*/  OCStandard_GUID^ ID() ;


virtual /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ with) ;


virtual /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  OCTDF_Attribute^ NewEmpty() ;


virtual /*instead*/  void References(OCNaroWrappers::OCTDF_DataSet^ aDataSet) override;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;

~OCTFunction_GraphNode()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
