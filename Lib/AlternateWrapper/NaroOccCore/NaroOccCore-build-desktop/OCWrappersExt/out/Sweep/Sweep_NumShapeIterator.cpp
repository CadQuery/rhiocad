// File generated by CPPExt (CPP file)
//

#include "Sweep_NumShapeIterator.h"
#include "../Converter.h"
#include "Sweep_NumShape.h"


using namespace OCNaroWrappers;

OCSweep_NumShapeIterator::OCSweep_NumShapeIterator(Sweep_NumShapeIterator* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCSweep_NumShapeIterator::OCSweep_NumShapeIterator() 
{
  nativeHandle = new Sweep_NumShapeIterator();
}

 void OCSweep_NumShapeIterator::Init(OCNaroWrappers::OCSweep_NumShape^ aShape)
{
  ((Sweep_NumShapeIterator*)nativeHandle)->Init(*((Sweep_NumShape*)aShape->Handle));
}

 System::Boolean OCSweep_NumShapeIterator::More()
{
  return OCConverter::StandardBooleanToBoolean(((Sweep_NumShapeIterator*)nativeHandle)->More());
}

 void OCSweep_NumShapeIterator::Next()
{
  ((Sweep_NumShapeIterator*)nativeHandle)->Next();
}

OCSweep_NumShape^ OCSweep_NumShapeIterator::Value()
{
  Sweep_NumShape* tmp = new Sweep_NumShape();
  *tmp = ((Sweep_NumShapeIterator*)nativeHandle)->Value();
  return gcnew OCSweep_NumShape(tmp);
}

 OCTopAbs_Orientation OCSweep_NumShapeIterator::Orientation()
{
  return (OCTopAbs_Orientation)(((Sweep_NumShapeIterator*)nativeHandle)->Orientation());
}


