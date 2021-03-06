#ifndef _ConfigurableTrimmedKalmanFinder_H_
#define _ConfigurableTrimmedKalmanFinder_H_

#include "RecoVertex/ConfigurableVertexReco/interface/AbstractConfReconstructor.h"

/**
 *  Wrap any VertexFitter into the VertexReconstructor interface
 */

class ConfigurableTrimmedKalmanFinder : public AbstractConfReconstructor
{
  public:
    ConfigurableTrimmedKalmanFinder ();
    void configure ( const edm::ParameterSet & );
    ConfigurableTrimmedKalmanFinder ( const ConfigurableTrimmedKalmanFinder & o );
    ~ConfigurableTrimmedKalmanFinder();
    ConfigurableTrimmedKalmanFinder * clone () const;
    std::vector < TransientVertex > vertices ( 
        const std::vector < reco::TransientTrack > & t ) const;
    std::vector < TransientVertex > vertices ( 
        const std::vector < reco::TransientTrack > & t,
        const reco::BeamSpot & s ) const;
    std::vector < TransientVertex > vertices ( 
        const std::vector < reco::TransientTrack > & prims,
        const std::vector < reco::TransientTrack > & secs,
        const reco::BeamSpot & s ) const;
    edm::ParameterSet defaults() const;
  private:
    const VertexReconstructor * theRector;
};

#endif
