// File generated by CPPExt (CPP file)
//

#include "FEmTool_SequenceNodeOfSeqOfLinConstr.h"
#include "../Converter.h"
#include "FEmTool_ListOfVectors.h"
#include "FEmTool_SeqOfLinConstr.h"


using namespace OCNaroWrappers;

OCFEmTool_SequenceNodeOfSeqOfLinConstr::OCFEmTool_SequenceNodeOfSeqOfLinConstr(Handle(FEmTool_SequenceNodeOfSeqOfLinConstr)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_FEmTool_SequenceNodeOfSeqOfLinConstr(*nativeHandle);
}

OCFEmTool_SequenceNodeOfSeqOfLinConstr::OCFEmTool_SequenceNodeOfSeqOfLinConstr(OCNaroWrappers::OCFEmTool_ListOfVectors^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_FEmTool_SequenceNodeOfSeqOfLinConstr(new FEmTool_SequenceNodeOfSeqOfLinConstr(*((FEmTool_ListOfVectors*)I->Handle), n, p));
}

OCFEmTool_ListOfVectors^ OCFEmTool_SequenceNodeOfSeqOfLinConstr::Value()
{
  FEmTool_ListOfVectors* tmp = new FEmTool_ListOfVectors();
  *tmp = (*((Handle_FEmTool_SequenceNodeOfSeqOfLinConstr*)nativeHandle))->Value();
  return gcnew OCFEmTool_ListOfVectors(tmp);
}


