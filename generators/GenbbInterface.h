// ----------------------------------------------------------------------------
///  \file   GenbbInterface.h
///  \brief  Primary generator interface for GENBB output files.
///  
///  \author   J Martin-Albo <jmalbos@ific.uv.es>    
///  \date     27 Mar 2009
///  \version  $Id$
///
///  Copyright (c) 2009, 2010 NEXT Collaboration
// ----------------------------------------------------------------------------

#ifndef __GENBB_INTERFACE__
#define __GENBB_INTERFACE__

#include <G4VPrimaryGenerator.hh>
#include <fstream>

class G4Event;
class G4PrimaryParticle;


namespace nexus {

  class DetectorConstruction;
  

  /// This primary generator sets the G4Event objects according to the
  /// information read from an ascii file produced by the GENBB 
  /// Monte-Carlo event generator.

  class GenbbInterface : public G4VPrimaryGenerator
  {
  public:
    /// Constructor
    GenbbInterface();
    /// Destructor
    ~GenbbInterface();

    /// Read an event from file and generate primary particles
    /// and primary vertices accordingly
    void GeneratePrimaryVertex(G4Event*);

  private:
    /// Parse information in the file header
    void ProcessHeader();
    
    /// Return the PDG code equivalent to a given GEANT3 particle code
    G4int G3toPDG(const G4int);

  private:
    std::ifstream _genbb; ///< ASCII file produced by GENBB
    G4String _region; ///< region of generation of vertices in geometry
    
    // pointer to the detector construction initialization class 
    DetectorConstruction* _detConst; 
  };

  
} //end namespace nexus  




#endif