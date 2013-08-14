// ----------------------------------------------------------------------------
///  \file   DefaultEventAction.h
///  \brief  A general-purpose user event action.
///
///  \author   J. Martin-Albo <jmalbos@ific.uv.es>
///  \date     15 Apr 2009
///  \version  $Id$ 
///
///  Copyright (c) 2009, 2010 NEXT Collaboration 
// ----------------------------------------------------------------------------

#ifndef __DEFAULT_EVENT_ACTION__
#define __DEFAULT_EVENT_ACTION__

#include <G4UserEventAction.hh>
#include <globals.hh>
#include "IonizationHit.h"
//#include <bhep/store.h>

class G4Event;


namespace nexus {
    
  /// This class is a general-purpose event run action.
  
  class DefaultEventAction: public G4UserEventAction
  {
  public:
    /// Constructor
    DefaultEventAction();
    /// Destructor
    ~DefaultEventAction() {}
    
    /// Hook at the beginning of the event loop
    void BeginOfEventAction(const G4Event*);
    /// Hook at the end of the event loop
    void EndOfEventAction(const G4Event*);

  private:
    G4int _evt_no;
  };
  
} // namespace nexus

#endif