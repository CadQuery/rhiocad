// File generated by CPPExt (CPP file)
//

#include "DsgPrs_XYZAxisPresentation.h"
#include "../Converter.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_LineAspect.h"
#include "../gp/gp_Dir.h"
#include "../gp/gp_Pnt.h"
#include "../Prs3d/Prs3d_ArrowAspect.h"
#include "../Prs3d/Prs3d_TextAspect.h"


using namespace OCNaroWrappers;

OCDsgPrs_XYZAxisPresentation::OCDsgPrs_XYZAxisPresentation(DsgPrs_XYZAxisPresentation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCDsgPrs_XYZAxisPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_LineAspect^ anLineAspect, OCNaroWrappers::OCgp_Dir^ aDir, Standard_Real aVal, System::String^ aText, OCNaroWrappers::OCgp_Pnt^ aPfirst, OCNaroWrappers::OCgp_Pnt^ aPlast)
{
  DsgPrs_XYZAxisPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_LineAspect*)anLineAspect->Handle), *((gp_Dir*)aDir->Handle), aVal, OCConverter::StringToStandardCString(aText), *((gp_Pnt*)aPfirst->Handle), *((gp_Pnt*)aPlast->Handle));
}

 void OCDsgPrs_XYZAxisPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_LineAspect^ aLineAspect, OCNaroWrappers::OCPrs3d_ArrowAspect^ anArrowAspect, OCNaroWrappers::OCPrs3d_TextAspect^ aTextAspect, OCNaroWrappers::OCgp_Dir^ aDir, Standard_Real aVal, System::String^ aText, OCNaroWrappers::OCgp_Pnt^ aPfirst, OCNaroWrappers::OCgp_Pnt^ aPlast)
{
  DsgPrs_XYZAxisPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_LineAspect*)aLineAspect->Handle), *((Handle_Prs3d_ArrowAspect*)anArrowAspect->Handle), *((Handle_Prs3d_TextAspect*)aTextAspect->Handle), *((gp_Dir*)aDir->Handle), aVal, OCConverter::StringToStandardCString(aText), *((gp_Pnt*)aPfirst->Handle), *((gp_Pnt*)aPlast->Handle));
}

