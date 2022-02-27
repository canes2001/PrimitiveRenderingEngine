#include "AbstractSimulationObject.h"

#include "Primitive.h"

AbstractSimulationObject::AbstractSimulationObject()
	:m_transparency{0.0}
	, m_color{0.0, 0.0, 0.0}
	, m_matrix{}
	, m_primitive{std::make_unique<Primitive>()}
{
}

AbstractSimulationObject::~AbstractSimulationObject() = default;

void AbstractSimulationObject::setColor(double red, double green, double blue)
{
	m_color[0] = red;
	m_color[1] = blue;
	m_color[2] = green;
}