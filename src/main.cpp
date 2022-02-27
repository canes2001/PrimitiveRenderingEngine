#include <iostream>
#include <memory>

#include "FluidObject.h"
#include "SimulationObjectRenderer.h"
#include "SolidObject.h"

int main()
{
	SimulationObjectRenderer::render(std::make_unique<SolidObject>().get());
	SimulationObjectRenderer::render(std::make_unique<FluidObject>().get());
	return 0;
}