#ifndef INTERGATION_INTEGRATIONS_H
#define INTERGATION_INTEGRATIONS_H

#include <iostream>
#include <cmath>
using namespace std;

namespace integrations {
    double useRectangleMethod(float f(float), float xMin, float xMax, int intervalCount) {
        float dx = (xMax-xMin) / intervalCount;
        float totalArea = 0;
        float x = xMin;
        for(int i = 0; i <  intervalCount; i++) {
            totalArea += dx * f(x);
            x += dx;
        }
        return totalArea;
    }

    double useTrapezoidMethod(float f(float), float xMin, float xMax, int intervalCount) {
        float dx = (xMax-xMin) / intervalCount;
        float totalArea = 0;
        float x = xMin;
        for(int i = 0; i <  intervalCount; i++) {
            totalArea += dx * (f(x) + f(x + dx)) / 2;
            x += dx;
        }
        return totalArea;
    }
}


#endif //INTERGATION_INTEGRATIONS_H
