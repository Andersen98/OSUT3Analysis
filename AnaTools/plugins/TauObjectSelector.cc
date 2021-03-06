#include "OSUT3Analysis/AnaTools/interface/ObjectSelector.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#if IS_VALID(taus)
typedef ObjectSelector<osu::Tau, TYPE(taus)> TauObjectSelector;
  DEFINE_FWK_MODULE(TauObjectSelector);
#endif
