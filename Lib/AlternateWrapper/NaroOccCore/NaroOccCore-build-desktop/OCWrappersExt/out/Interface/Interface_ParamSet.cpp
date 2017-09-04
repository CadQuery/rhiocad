// File generated by CPPExt (CPP file)
//

#include "Interface_ParamSet.h"
#include "../Converter.h"
#include "Interface_ParamList.h"
#include "Interface_FileParameter.h"


using namespace OCNaroWrappers;

OCInterface_ParamSet::OCInterface_ParamSet(Handle(Interface_ParamSet)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Interface_ParamSet(*nativeHandle);
}

OCInterface_ParamSet::OCInterface_ParamSet(Standard_Integer nres, Standard_Integer nst) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Interface_ParamSet(new Interface_ParamSet(nres, nst));
}

 Standard_Integer OCInterface_ParamSet::Append(System::String^ val, Standard_Integer lnval, OCInterface_ParamType typ, Standard_Integer nument)
{
  return (*((Handle_Interface_ParamSet*)nativeHandle))->Append(OCConverter::StringToStandardCString(val), lnval, (Interface_ParamType)typ, nument);
}

 Standard_Integer OCInterface_ParamSet::Append(OCNaroWrappers::OCInterface_FileParameter^ FP)
{
  return (*((Handle_Interface_ParamSet*)nativeHandle))->Append(*((Interface_FileParameter*)FP->Handle));
}

 Standard_Integer OCInterface_ParamSet::NbParams()
{
  return (*((Handle_Interface_ParamSet*)nativeHandle))->NbParams();
}

OCInterface_FileParameter^ OCInterface_ParamSet::Param(Standard_Integer num)
{
  Interface_FileParameter* tmp = new Interface_FileParameter();
  *tmp = (*((Handle_Interface_ParamSet*)nativeHandle))->Param(num);
  return gcnew OCInterface_FileParameter(tmp);
}

OCInterface_FileParameter^ OCInterface_ParamSet::ChangeParam(Standard_Integer num)
{
  Interface_FileParameter* tmp = new Interface_FileParameter();
  *tmp = (*((Handle_Interface_ParamSet*)nativeHandle))->ChangeParam(num);
  return gcnew OCInterface_FileParameter(tmp);
}

 void OCInterface_ParamSet::SetParam(Standard_Integer num, OCNaroWrappers::OCInterface_FileParameter^ FP)
{
  (*((Handle_Interface_ParamSet*)nativeHandle))->SetParam(num, *((Interface_FileParameter*)FP->Handle));
}

OCInterface_ParamList^ OCInterface_ParamSet::Params(Standard_Integer num, Standard_Integer nb)
{
  Handle(Interface_ParamList) tmp = (*((Handle_Interface_ParamSet*)nativeHandle))->Params(num, nb);
  return gcnew OCInterface_ParamList(&tmp);
}

