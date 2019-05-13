
#include <iostream> //FOR TESTING PURPOSES, TO BE REMOVED LATER

#include "structs.h"
#include "control.h"
#include "RainSimulator.h"
#include "RainPropagation.h"
#include "malloc.h"


int main(){

rainprop::Control controlSettings(52.52,13.4049);

rainprop::RainSimulator rainSimulator(controlSettings);

// std::cout <<rainSimulator.GetClimaticRegion()<<std::endl;
// std::cout << rainSimulator.GetLocation().lat <<std::endl;
// std::cout << rainSimulator.GetLocation().lon <<std::endl;


rainSimulator.ITUR837_calculation();
rainSimulator.RainValues();
rainSimulator.SplitInRainEvents();
rainSimulator.SimulateRainYear();
rainSimulator.RainPercentile();

rainprop::RainPropagation RainProp(60e09,1000,0,0);


// std::vector<rainprop::Matrix> rainatt{12};
// for (int i = 0; i < rainatt.size(); i++){
//     rainatt[i].v = RainProp.SpecAtt(rainSimulator.GetSimulatedValues(i));
// }
std::vector<double> r =RainProp.EffectivePathLength(rainSimulator.GetR_001());

return 0;
}
