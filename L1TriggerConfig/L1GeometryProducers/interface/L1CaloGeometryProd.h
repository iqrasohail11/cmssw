#ifndef L1GeometryProducers_L1CaloGeometryProd_h
#define L1GeometryProducers_L1CaloGeometryProd_h
// -*- C++ -*-
//
// Package:     L1GeometryProducers
// Class  :     L1CaloGeometryProd
// 
/**\class L1CaloGeometryProd L1CaloGeometryProd.h L1TriggerConfig/L1GeometryProducers/interface/L1CaloGeometryProd.h

 Description: <one line class summary>

 Usage:
    <usage>

*/
//
// Original Author:  Werner Sun
//         Created:  Tue Oct 24 00:01:12 EDT 2006
// $Id$
//

// system include files

// user include files
#include "FWCore/Framework/interface/ModuleFactory.h"
#include "FWCore/Framework/interface/ESProducer.h"
#include "FWCore/Framework/interface/ESHandle.h"

#include "L1TriggerConfig/L1Geometry/interface/L1CaloGeometry.h"
#include "L1TriggerConfig/L1Geometry/interface/L1CaloGeometryRecord.h"

// forward declarations

class L1CaloGeometryProd : public edm::ESProducer {
   public:
      L1CaloGeometryProd(const edm::ParameterSet&);
      ~L1CaloGeometryProd();

      typedef std::auto_ptr<L1CaloGeometry> ReturnType;

      ReturnType produce(const L1CaloGeometryRecord&);
   private:
      // ----------member data ---------------------------
};


#endif
