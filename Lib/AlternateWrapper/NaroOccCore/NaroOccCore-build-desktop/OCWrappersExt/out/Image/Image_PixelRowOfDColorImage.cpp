// File generated by CPPExt (CPP file)
//

#include "Image_PixelRowOfDColorImage.h"
#include "../Converter.h"
#include "../Aspect/Aspect_ColorPixel.h"


using namespace OCNaroWrappers;

OCImage_PixelRowOfDColorImage::OCImage_PixelRowOfDColorImage(Image_PixelRowOfDColorImage* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCImage_PixelRowOfDColorImage::OCImage_PixelRowOfDColorImage(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Image_PixelRowOfDColorImage(Low, Up);
}

OCImage_PixelRowOfDColorImage::OCImage_PixelRowOfDColorImage(OCNaroWrappers::OCAspect_ColorPixel^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Image_PixelRowOfDColorImage(*((Aspect_ColorPixel*)Item->Handle), Low, Up);
}

 void OCImage_PixelRowOfDColorImage::Init(OCNaroWrappers::OCAspect_ColorPixel^ V)
{
  ((Image_PixelRowOfDColorImage*)nativeHandle)->Init(*((Aspect_ColorPixel*)V->Handle));
}

 System::Boolean OCImage_PixelRowOfDColorImage::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((Image_PixelRowOfDColorImage*)nativeHandle)->IsAllocated());
}

OCImage_PixelRowOfDColorImage^ OCImage_PixelRowOfDColorImage::Assign(OCNaroWrappers::OCImage_PixelRowOfDColorImage^ Other)
{
  Image_PixelRowOfDColorImage* tmp = new Image_PixelRowOfDColorImage(0, 0);
  *tmp = ((Image_PixelRowOfDColorImage*)nativeHandle)->Assign(*((Image_PixelRowOfDColorImage*)Other->Handle));
  return gcnew OCImage_PixelRowOfDColorImage(tmp);
}

 Standard_Integer OCImage_PixelRowOfDColorImage::Length()
{
  return ((Image_PixelRowOfDColorImage*)nativeHandle)->Length();
}

 Standard_Integer OCImage_PixelRowOfDColorImage::Lower()
{
  return ((Image_PixelRowOfDColorImage*)nativeHandle)->Lower();
}

 Standard_Integer OCImage_PixelRowOfDColorImage::Upper()
{
  return ((Image_PixelRowOfDColorImage*)nativeHandle)->Upper();
}

 void OCImage_PixelRowOfDColorImage::SetValue(Standard_Integer Index, OCNaroWrappers::OCAspect_ColorPixel^ Value)
{
  ((Image_PixelRowOfDColorImage*)nativeHandle)->SetValue(Index, *((Aspect_ColorPixel*)Value->Handle));
}

OCAspect_ColorPixel^ OCImage_PixelRowOfDColorImage::Value(Standard_Integer Index)
{
  Aspect_ColorPixel* tmp = new Aspect_ColorPixel();
  *tmp = ((Image_PixelRowOfDColorImage*)nativeHandle)->Value(Index);
  return gcnew OCAspect_ColorPixel(tmp);
}

OCAspect_ColorPixel^ OCImage_PixelRowOfDColorImage::ChangeValue(Standard_Integer Index)
{
  Aspect_ColorPixel* tmp = new Aspect_ColorPixel();
  *tmp = ((Image_PixelRowOfDColorImage*)nativeHandle)->ChangeValue(Index);
  return gcnew OCAspect_ColorPixel(tmp);
}


