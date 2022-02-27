#include "FluidObject.h"

#include "SphereBuilder.h"

FluidObject::FluidObject()
	:AbstractSimulationObject()
{
	SphereBuilder builder;
	builder.build(m_primitive.get());
}