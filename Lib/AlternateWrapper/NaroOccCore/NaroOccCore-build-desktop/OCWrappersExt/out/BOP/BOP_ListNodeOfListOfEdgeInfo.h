// File generated by CPPExt (Transient)
//
#ifndef _BOP_ListNodeOfListOfEdgeInfo_OCWrappers_HeaderFile
#define _BOP_ListNodeOfListOfEdgeInfo_OCWrappers_HeaderFile

// include the wrapped class
#include <BOP_ListNodeOfListOfEdgeInfo.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "BOP_EdgeInfo.h"


namespace OCNaroWrappers
{

ref class OCBOP_EdgeInfo;
ref class OCBOP_ListOfEdgeInfo;
ref class OCBOP_ListIteratorOfListOfEdgeInfo;



public ref class OCBOP_ListNodeOfListOfEdgeInfo : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBOP_ListNodeOfListOfEdgeInfo(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOP_ListNodeOfListOfEdgeInfo(Handle(BOP_ListNodeOfListOfEdgeInfo)* nativeHandle);

// Methods PUBLIC


OCBOP_ListNodeOfListOfEdgeInfo(OCNaroWrappers::OCBOP_EdgeInfo^ I, TCollection_MapNodePtr n);


 /*instead*/  OCBOP_EdgeInfo^ Value() ;

~OCBOP_ListNodeOfListOfEdgeInfo()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
