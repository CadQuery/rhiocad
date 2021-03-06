// File generated by CPPExt (CPP file)
//

#include "AIS_PlaneTrihedron.h"
#include "../Converter.h"
#include "../Geom/Geom_Plane.h"
#include "AIS_InteractiveObject.h"
#include "AIS_Line.h"
#include "AIS_Point.h"
#include "../PrsMgr/PrsMgr_PresentationManager3d.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_Projector.h"
#include "../PrsMgr/PrsMgr_PresentationManager2d.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Geom/Geom_Transformation.h"
#include "../SelectMgr/SelectMgr_Selection.h"
#include "../Quantity/Quantity_Color.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCAIS_PlaneTrihedron::OCAIS_PlaneTrihedron(Handle(AIS_PlaneTrihedron)* nativeHandle) : OCAIS_InteractiveObject((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_PlaneTrihedron(*nativeHandle);
}

OCAIS_PlaneTrihedron::OCAIS_PlaneTrihedron(OCNaroWrappers::OCGeom_Plane^ aPlane) : OCAIS_InteractiveObject((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_PlaneTrihedron(new AIS_PlaneTrihedron(*((Handle_Geom_Plane*)aPlane->Handle)));
}

OCGeom_Plane^ OCAIS_PlaneTrihedron::Component()
{
  Handle(Geom_Plane) tmp = (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->Component();
  return gcnew OCGeom_Plane(&tmp);
}

 void OCAIS_PlaneTrihedron::SetComponent(OCNaroWrappers::OCGeom_Plane^ aPlane)
{
  (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->SetComponent(*((Handle_Geom_Plane*)aPlane->Handle));
}

OCAIS_Line^ OCAIS_PlaneTrihedron::XAxis()
{
  Handle(AIS_Line) tmp = (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->XAxis();
  return gcnew OCAIS_Line(&tmp);
}

OCAIS_Line^ OCAIS_PlaneTrihedron::YAxis()
{
  Handle(AIS_Line) tmp = (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->YAxis();
  return gcnew OCAIS_Line(&tmp);
}

OCAIS_Point^ OCAIS_PlaneTrihedron::Position()
{
  Handle(AIS_Point) tmp = (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->Position();
  return gcnew OCAIS_Point(&tmp);
}

 void OCAIS_PlaneTrihedron::SetLength(Standard_Real theLength)
{
  (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->SetLength(theLength);
}

 Standard_Real OCAIS_PlaneTrihedron::GetLength()
{
  return (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->GetLength();
}

 System::Boolean OCAIS_PlaneTrihedron::AcceptDisplayMode(Standard_Integer aMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_PlaneTrihedron*)nativeHandle))->AcceptDisplayMode(aMode));
}

 void OCAIS_PlaneTrihedron::Compute(OCNaroWrappers::OCPrs3d_Projector^ aProjector, OCNaroWrappers::OCGeom_Transformation^ aTrsf, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation)
{
  (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->Compute(*((Handle_Prs3d_Projector*)aProjector->Handle), *((Handle_Geom_Transformation*)aTrsf->Handle), *((Handle_Prs3d_Presentation*)aPresentation->Handle));
}

 Standard_Integer OCAIS_PlaneTrihedron::Signature()
{
  return (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->Signature();
}

 OCAIS_KindOfInteractive OCAIS_PlaneTrihedron::Type()
{
  return (OCAIS_KindOfInteractive)((*((Handle_AIS_PlaneTrihedron*)nativeHandle))->Type());
}

 void OCAIS_PlaneTrihedron::SetColor(OCQuantity_NameOfColor aColor)
{
  (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->SetColor((Quantity_NameOfColor)aColor);
}

 void OCAIS_PlaneTrihedron::SetColor(OCNaroWrappers::OCQuantity_Color^ aColor)
{
  (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->SetColor(*((Quantity_Color*)aColor->Handle));
}

 void OCAIS_PlaneTrihedron::SetXLabel(OCNaroWrappers::OCTCollection_AsciiString^ aLabel)
{
  (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->SetXLabel(*((TCollection_AsciiString*)aLabel->Handle));
}

 void OCAIS_PlaneTrihedron::SetYLabel(OCNaroWrappers::OCTCollection_AsciiString^ aLabel)
{
  (*((Handle_AIS_PlaneTrihedron*)nativeHandle))->SetYLabel(*((TCollection_AsciiString*)aLabel->Handle));
}


