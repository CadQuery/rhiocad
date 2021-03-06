// File generated by CPPExt (CPP file)
//

#include "AlienImage_BMPAlienImage.h"
#include "../Converter.h"
#include "AlienImage_BMPAlienData.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../Image/Image_Image.h"
#include "../OSD/OSD_File.h"


using namespace OCNaroWrappers;

OCAlienImage_BMPAlienImage::OCAlienImage_BMPAlienImage(Handle(AlienImage_BMPAlienImage)* nativeHandle) : OCAlienImage_AlienUserImage((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AlienImage_BMPAlienImage(*nativeHandle);
}

OCAlienImage_BMPAlienImage::OCAlienImage_BMPAlienImage() : OCAlienImage_AlienUserImage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AlienImage_BMPAlienImage(new AlienImage_BMPAlienImage());
}

 void OCAlienImage_BMPAlienImage::SetName(OCNaroWrappers::OCTCollection_AsciiString^ aName)
{
  (*((Handle_AlienImage_BMPAlienImage*)nativeHandle))->SetName(*((TCollection_AsciiString*)aName->Handle));
}

OCTCollection_AsciiString^ OCAlienImage_BMPAlienImage::Name()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_AlienImage_BMPAlienImage*)nativeHandle))->Name();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCImage_Image^ OCAlienImage_BMPAlienImage::ToImage()
{
  Handle(Image_Image) tmp = (*((Handle_AlienImage_BMPAlienImage*)nativeHandle))->ToImage();
  return gcnew OCImage_Image(&tmp);
}

 void OCAlienImage_BMPAlienImage::FromImage(OCNaroWrappers::OCImage_Image^ anImage)
{
  (*((Handle_AlienImage_BMPAlienImage*)nativeHandle))->FromImage(*((Handle_Image_Image*)anImage->Handle));
}

 System::Boolean OCAlienImage_BMPAlienImage::Read(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_BMPAlienImage*)nativeHandle))->Read(*((OSD_File*)afile->Handle)));
}

 System::Boolean OCAlienImage_BMPAlienImage::Write(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_BMPAlienImage*)nativeHandle))->Write(*((OSD_File*)afile->Handle)));
}


