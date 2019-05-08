#ifndef RAINPROPAGATION_H
#define RAINPROPAGATION

#include <vector>

#include "structs.h"

namespace rainprop{
class RainPropagation{

public:
    RainPropagation(double f,double d);
    RainPropagation(double f,double d,double theta,double tau);    

    SpecRainAttCoeff SpecRainAttCoeffs();
    RainAttCoeff RainAttCoeffs();

    double SpecAtt(double R);
    std::vector<std::vector<double>> SpecAtt(std::vector<std::vector<double>> R);

    std::vector<double> EffectivePathLength(std::vector<double> Rprctl);

    // double TotalRainAtt();
    // std::vector<Matrix> TotalRainAtt();
    std::vector<double> effpl;

private:

    double f;
    double d;

    double theta;
    double tau;
    SpecRainAttCoeff SpecGammaCoeffs;
    RainAttCoeff GammaCoeffs;
    

};
}


#endif