// File generated by CPPExt (CPP file)
//

#include "Prs3d_Root.h"
#include "../Converter.h"
#include "../Graphic3d/Graphic3d_Group.h"
#include "Prs3d_Presentation.h"


using namespace OCNaroWrappers;

OCPrs3d_Root::OCPrs3d_Root(Prs3d_Root* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_Group^ OCPrs3d_Root::CurrentGroup(OCNaroWrappers::OCPrs3d_Presentation^ Prs3d)
{
  Handle(Graphic3d_Group) tmp = Prs3d_Root::CurrentGroup(*((Handle_Prs3d_Presentation*)Prs3d->Handle));
  return gcnew OCGraphic3d_Group(&tmp);
}

OCGraphic3d_Group^ OCPrs3d_Root::NewGroup(OCNaroWrappers::OCPrs3d_Presentation^ Prs3d)
{
  Handle(Graphic3d_Group) tmp = Prs3d_Root::NewGroup(*((Handle_Prs3d_Presentation*)Prs3d->Handle));
  return gcnew OCGraphic3d_Group(&tmp);
}

