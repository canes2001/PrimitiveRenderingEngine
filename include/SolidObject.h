#ifndef SolidObject_h
#define SolidObject_h

#include "AbstractSimulationObject.h"

/*
* SolidObject is a derived class that represents solid objects in simulations.  For purposes of this prototype
* we are saying Solids can only be represented by box primitives.  This is not much different from the real life example
* since there are limitations to what kind of primitives specific simulation objects can be represented as
*/
class SolidObject : public AbstractSimulationObject
{
public:
	SolidObject();
	SolidObject(const SolidObject& other) = default;
	SolidObject(SolidObject&& other) = default;
	SolidObject& operator=(const SolidObject& other) = default;
	SolidObject& operator=(SolidObject&& other) = default;

	~SolidObject() = default;
};

#endif