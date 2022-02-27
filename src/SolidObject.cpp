#include "SolidObject.h"

#include "BoxBuilder.h"

SolidObject::SolidObject()
	:AbstractSimulationObject()
{
	BoxBuilder builder;
	builder.build(m_primitive.get());
}