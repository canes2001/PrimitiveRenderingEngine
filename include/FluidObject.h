#ifndef FluidObject_h
#define FluidObject_h

#include "AbstractSimulationObject.h"

/*
* FluidObject is a derived class that represents fluid in simulations.  For purposes of this prototype
* we are saying Fluids can only be represented by sphere primitives.  This is not much different from the real life example
* since there are limitations to what kind of primitives specific simulation objects can be represented as
*/
class FluidObject : public AbstractSimulationObject
{
public:
	FluidObject();
	FluidObject(const FluidObject& other) = default;
	FluidObject(FluidObject&& other) = default;
	FluidObject& operator=(const FluidObject& other) = default;
	FluidObject& operator=(FluidObject&& other) = default;

	~FluidObject() = default;
};

#endif
