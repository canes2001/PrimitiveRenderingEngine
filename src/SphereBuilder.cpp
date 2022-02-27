#include "SphereBuilder.h"

#include "Primitive.h"

#include <iostream>

SphereBuilder::SphereBuilder()
	:IPrimitiveBuilder()
{
}

void SphereBuilder::build(Primitive* primitive)
{
	// Special logic for constructing a sphere....
	std::cout << "Building sphere..." << std::endl;

	// Stand-in logic to build sphere.....
	primitive->addVertex(1.0, 2.0, 3.0);
	primitive->addVertex(4.0, 6.0, 8.0);
	primitive->addVertex(2.0, 3.0, 9.0);
	primitive->addNormal(0.0, 1.0, 0.0);

	primitive->addVertex(11.0, 22.0, 33.0);
	primitive->addVertex(41.0, 64.0, 38.0);
	primitive->addVertex(24.0, 43.0, 59.0);
	primitive->addNormal(0.0, 1.0, 0.0);

	primitive->addVertex(17.0, 62.0, 43.0);
	primitive->addVertex(45.0, 46.0, 68.0);
	primitive->addVertex(23.0, 43.0, 69.0);
	primitive->addNormal(0.0, 1.0, 0.0);
}
