// File generated by CPPExt (CPP file)
//

#include "XSControl_ConnectedShapes.h"
#include "../Converter.h"
#include "XSControl_TransferReader.h"
#include "../Standard/Standard_Transient.h"
#include "../Interface/Interface_Graph.h"
#include "../Interface/Interface_EntityIterator.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../TColStd/TColStd_HSequenceOfTransient.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Transfer/Transfer_TransientProcess.h"


using namespace OCNaroWrappers;

OCXSControl_ConnectedShapes::OCXSControl_ConnectedShapes(Handle(XSControl_ConnectedShapes)* nativeHandle) : OCIFSelect_SelectExplore((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_XSControl_ConnectedShapes(*nativeHandle);
}

OCXSControl_ConnectedShapes::OCXSControl_ConnectedShapes() : OCIFSelect_SelectExplore((OCDummy^)nullptr)

{
  nativeHandle = new Handle_XSControl_ConnectedShapes(new XSControl_ConnectedShapes());
}

OCXSControl_ConnectedShapes::OCXSControl_ConnectedShapes(OCNaroWrappers::OCXSControl_TransferReader^ TR) : OCIFSelect_SelectExplore((OCDummy^)nullptr)

{
  nativeHandle = new Handle_XSControl_ConnectedShapes(new XSControl_ConnectedShapes(*((Handle_XSControl_TransferReader*)TR->Handle)));
}

 void OCXSControl_ConnectedShapes::SetReader(OCNaroWrappers::OCXSControl_TransferReader^ TR)
{
  (*((Handle_XSControl_ConnectedShapes*)nativeHandle))->SetReader(*((Handle_XSControl_TransferReader*)TR->Handle));
}

 System::Boolean OCXSControl_ConnectedShapes::Explore(Standard_Integer level, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_Graph^ G, OCNaroWrappers::OCInterface_EntityIterator^ explored)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_XSControl_ConnectedShapes*)nativeHandle))->Explore(level, *((Handle_Standard_Transient*)ent->Handle), *((Interface_Graph*)G->Handle), *((Interface_EntityIterator*)explored->Handle)));
}

OCTCollection_AsciiString^ OCXSControl_ConnectedShapes::ExploreLabel()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_XSControl_ConnectedShapes*)nativeHandle))->ExploreLabel();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCTColStd_HSequenceOfTransient^ OCXSControl_ConnectedShapes::AdjacentEntities(OCNaroWrappers::OCTopoDS_Shape^ ashape, OCNaroWrappers::OCTransfer_TransientProcess^ TP, OCTopAbs_ShapeEnum type)
{
  Handle(TColStd_HSequenceOfTransient) tmp = XSControl_ConnectedShapes::AdjacentEntities(*((TopoDS_Shape*)ashape->Handle), *((Handle_Transfer_TransientProcess*)TP->Handle), (TopAbs_ShapeEnum)type);
  return gcnew OCTColStd_HSequenceOfTransient(&tmp);
}

