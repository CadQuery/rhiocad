// File generated by CPPExt (CPP file)
//

#include "BOP_LoopClassifier.h"
#include "../Converter.h"
#include "BOP_Loop.h"


using namespace OCNaroWrappers;

OCBOP_LoopClassifier::OCBOP_LoopClassifier(BOP_LoopClassifier* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCBOP_LoopClassifier::Delete()
{
  ((BOP_LoopClassifier*)nativeHandle)->Delete();
}

