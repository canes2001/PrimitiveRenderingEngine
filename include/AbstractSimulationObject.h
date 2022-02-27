#ifndef AbstractSimulationObject_h
#define AbstractSimulationObject_h

#include <memory>

#include "TransformationMatrix.h"

class Primitive;

/*
* AbstractSimulationObject is the base class for higher level simulation objects.  These hold object specific properties
* that end users actually interact with in the UI
*/
class AbstractSimulationObject
{
public:
	AbstractSimulationObject();
	AbstractSimulationObject(const AbstractSimulationObject& other) = default;
	AbstractSimulationObject(AbstractSimulationObject&& other) = default;
	AbstractSimulationObject& operator=(const AbstractSimulationObject& other) = default;
	AbstractSimulationObject& operator=(AbstractSimulationObject&& other) = default;

	virtual ~AbstractSimulationObject() = 0;

	void setTransparency(double transparency) { m_transparency = transparency; }
	double getTransparency() const { return m_transparency; }

	void setColor(double red, double green, double blue);
	const double* getColor() const { return &m_color[0]; }

	void setTranslation(TransformationMatrix matrix) { m_matrix = matrix; }
	TransformationMatrix getTranslation() { return m_matrix; }

	Primitive* getPrimitive() const { return m_primitive.get(); }

protected:
	double m_transparency;
	double m_color[3];
	TransformationMatrix m_matrix;
	std::unique_ptr<Primitive> m_primitive;
};

#endif
