// File generated by CPPExt (MPV)
//
#ifndef _StepData_StepReaderTool_OCWrappers_HeaderFile
#define _StepData_StepReaderTool_OCWrappers_HeaderFile

// include native header
#include <StepData_StepReaderTool.hxx>
#include "../Converter.h"

#include "../Interface/Interface_FileReaderTool.h"

#include "../Interface/Interface_GeneralLib.h"
#include "../Interface/Interface_ReaderLib.h"
#include "../Interface/Interface_FileReaderTool.h"


namespace OCNaroWrappers
{

ref class OCStepData_FileRecognizer;
ref class OCStepData_StepReaderData;
ref class OCStepData_Protocol;
ref class OCInterface_Check;
ref class OCStandard_Transient;
ref class OCInterface_InterfaceModel;


//! Specific FileReaderTool for Step; works with FileReaderData <br>
//!           provides references evaluation, plus access to litteral data <br>
//!           and specific methods defined by FileReaderTool <br>
//!           Remarks : works with a ReaderLib to load Entities <br>
public ref class OCStepData_StepReaderTool  : public OCInterface_FileReaderTool {

protected:
  // dummy constructor;
  OCStepData_StepReaderTool(OCDummy^) : OCInterface_FileReaderTool((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_StepReaderTool(StepData_StepReaderTool* nativeHandle);

// Methods PUBLIC

//! creates StepReaderTool to work with a StepReaderData according <br>
//!           to a Step Protocol. Defines the ReaderLib at this time <br>
OCStepData_StepReaderTool(OCNaroWrappers::OCStepData_StepReaderData^ reader, OCNaroWrappers::OCStepData_Protocol^ protocol);

//! Bounds empty entities to records, uses default Recognition <br>
//!           provided by ReaderLib and ReaderModule. Also calls computation <br>
//!           of references (SetEntityNumbers from StepReaderData) <br>
//!           Works only on data entities (skips header) <br>
//!           <optimize> given False allows to test some internal algorithms <br>
//!           which are normally avoided (see also StepReaderData) <br>
 /*instead*/  void Prepare(System::Boolean optimize) ;

//! Bounds empty entities to records, works with a specific <br>
//!           FileRecognizer, stored and later used in Recognize <br>
//!           Works only on data entities (skips header) <br>
//!           <optimize : same as above <br>
 /*instead*/  void Prepare(OCNaroWrappers::OCStepData_FileRecognizer^ reco, System::Boolean optimize) ;

//! recognizes records, by asking either ReaderLib (default) or <br>
//!           FileRecognizer (if defined) to do so. <ach> is to call <br>
//!           RecognizeByLib <br>
 /*instead*/  System::Boolean Recognize(Standard_Integer num, OCNaroWrappers::OCInterface_Check^ ach, OCNaroWrappers::OCStandard_Transient^ ent) ;

//! bounds empty entities and sub-lists to header records <br>
//!           works like Prepare + SetEntityNumbers, but for header <br>
//!           (N.B.: in Header, no Ident and no reference) <br>
//!           FileRecognizer is to specify Entities which are allowed to be <br>
//!           defined in the Header (not every type can be) <br>
 /*instead*/  void PrepareHeader(OCNaroWrappers::OCStepData_FileRecognizer^ reco) ;

//! fills model's header; that is, gives to it Header entities <br>
//!           and commands their loading. Also fills StepModel's Global <br>
//!           Check from StepReaderData's GlobalCheck <br>
 /*instead*/  void BeginRead(OCNaroWrappers::OCInterface_InterfaceModel^ amodel) ;

//! fills an entity, given record no; works by using a ReaderLib <br>
//!           to load each entity, which must be a Transient <br>
//!           Actually, returned value is True if no fail, False else <br>
 /*instead*/  System::Boolean AnalyseRecord(Standard_Integer num, OCNaroWrappers::OCStandard_Transient^ anent, OCNaroWrappers::OCInterface_Check^ acheck) ;

//! Ends file reading after reading all the entities <br>
//!           Here, it binds in the model, Idents to Entities (for checks) <br>
virtual /*instead*/  void EndRead(OCNaroWrappers::OCInterface_InterfaceModel^ amodel) override;

~OCStepData_StepReaderTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
