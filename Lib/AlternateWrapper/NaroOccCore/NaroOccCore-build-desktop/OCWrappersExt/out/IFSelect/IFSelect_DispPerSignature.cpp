// File generated by CPPExt (CPP file)
//

#include "IFSelect_DispPerSignature.h"
#include "../Converter.h"
#include "IFSelect_SignCounter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../Interface/Interface_Graph.h"


using namespace OCNaroWrappers;

OCIFSelect_DispPerSignature::OCIFSelect_DispPerSignature(Handle(IFSelect_DispPerSignature)* nativeHandle) : OCIFSelect_Dispatch((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_DispPerSignature(*nativeHandle);
}

OCIFSelect_DispPerSignature::OCIFSelect_DispPerSignature() : OCIFSelect_Dispatch((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_DispPerSignature(new IFSelect_DispPerSignature());
}

OCIFSelect_SignCounter^ OCIFSelect_DispPerSignature::SignCounter()
{
  Handle(IFSelect_SignCounter) tmp = (*((Handle_IFSelect_DispPerSignature*)nativeHandle))->SignCounter();
  return gcnew OCIFSelect_SignCounter(&tmp);
}

 void OCIFSelect_DispPerSignature::SetSignCounter(OCNaroWrappers::OCIFSelect_SignCounter^ sign)
{
  (*((Handle_IFSelect_DispPerSignature*)nativeHandle))->SetSignCounter(*((Handle_IFSelect_SignCounter*)sign->Handle));
}

 System::String^ OCIFSelect_DispPerSignature::SignName()
{
  return OCConverter::StandardCStringToString((*((Handle_IFSelect_DispPerSignature*)nativeHandle))->SignName());
}

OCTCollection_AsciiString^ OCIFSelect_DispPerSignature::Label()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_DispPerSignature*)nativeHandle))->Label();
  return gcnew OCTCollection_AsciiString(tmp);
}

 System::Boolean OCIFSelect_DispPerSignature::LimitedMax(Standard_Integer nbent, Standard_Integer& max)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_DispPerSignature*)nativeHandle))->LimitedMax(nbent, max));
}

 void OCIFSelect_DispPerSignature::Packets(OCNaroWrappers::OCInterface_Graph^ G, )
{
  (*((Handle_IFSelect_DispPerSignature*)nativeHandle))->Packets(*((Interface_Graph*)G->Handle), );
}


