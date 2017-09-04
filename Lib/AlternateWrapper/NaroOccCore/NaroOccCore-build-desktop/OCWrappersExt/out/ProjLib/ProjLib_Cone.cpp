// File generated by CPPExt (CPP file)
//

#include "ProjLib_Cone.h"
#include "../Converter.h"
#include "../gp/gp_Cone.h"
#include "../gp/gp_Lin.h"
#include "../gp/gp_Circ.h"
#include "../gp/gp_Elips.h"
#include "../gp/gp_Parab.h"
#include "../gp/gp_Hypr.h"


using namespace OCNaroWrappers;

OCProjLib_Cone::OCProjLib_Cone(ProjLib_Cone* nativeHandle) : OCProjLib_Projector((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCProjLib_Cone::OCProjLib_Cone() : OCProjLib_Projector((OCDummy^)nullptr)

{
  nativeHandle = new ProjLib_Cone();
}

OCProjLib_Cone::OCProjLib_Cone(OCNaroWrappers::OCgp_Cone^ Co) : OCProjLib_Projector((OCDummy^)nullptr)

{
  nativeHandle = new ProjLib_Cone(*((gp_Cone*)Co->Handle));
}

OCProjLib_Cone::OCProjLib_Cone(OCNaroWrappers::OCgp_Cone^ Co, OCNaroWrappers::OCgp_Lin^ L) : OCProjLib_Projector((OCDummy^)nullptr)

{
  nativeHandle = new ProjLib_Cone(*((gp_Cone*)Co->Handle), *((gp_Lin*)L->Handle));
}

OCProjLib_Cone::OCProjLib_Cone(OCNaroWrappers::OCgp_Cone^ Co, OCNaroWrappers::OCgp_Circ^ C) : OCProjLib_Projector((OCDummy^)nullptr)

{
  nativeHandle = new ProjLib_Cone(*((gp_Cone*)Co->Handle), *((gp_Circ*)C->Handle));
}

 void OCProjLib_Cone::Init(OCNaroWrappers::OCgp_Cone^ Co)
{
  ((ProjLib_Cone*)nativeHandle)->Init(*((gp_Cone*)Co->Handle));
}

 void OCProjLib_Cone::Project(OCNaroWrappers::OCgp_Lin^ L)
{
  ((ProjLib_Cone*)nativeHandle)->Project(*((gp_Lin*)L->Handle));
}

 void OCProjLib_Cone::Project(OCNaroWrappers::OCgp_Circ^ C)
{
  ((ProjLib_Cone*)nativeHandle)->Project(*((gp_Circ*)C->Handle));
}

 void OCProjLib_Cone::Project(OCNaroWrappers::OCgp_Elips^ E)
{
  ((ProjLib_Cone*)nativeHandle)->Project(*((gp_Elips*)E->Handle));
}

 void OCProjLib_Cone::Project(OCNaroWrappers::OCgp_Parab^ P)
{
  ((ProjLib_Cone*)nativeHandle)->Project(*((gp_Parab*)P->Handle));
}

 void OCProjLib_Cone::Project(OCNaroWrappers::OCgp_Hypr^ H)
{
  ((ProjLib_Cone*)nativeHandle)->Project(*((gp_Hypr*)H->Handle));
}

