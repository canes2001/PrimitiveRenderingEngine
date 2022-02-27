#include "BoxBuilder.h"

#include "Primitive.h"

#include <iostream>

BoxBuilder::BoxBuilder()
	:IPrimitiveBuilder()
{
}

void BoxBuilder::build(Primitive* primitive)
{
	// Special logic for constructing a Box....
	std::cout << "Building box..." << std::endl;

	// Build box
	primitive->addVertex(-1.0, -1.0, 1.0);
	primitive->addVertex(1.0, -1.0, 1.0);
	primitive->addVertex(1.0, 1.0, 1.0);
	primitive->addVertex(-1.0, 1.0, 1.0);
	primitive->addNormal(0.0, 0.0, 1.0);
	primitive->addIndices(0, 1, 2);
	primitive->addIndices(2, 3, 0);

	primitive->addVertex(-1.0, -1.0, -1.0);
	primitive->addVertex(1.0, -1.0, -1.0);
	primitive->addVertex(1.0, 1.0, -1.0);
	primitive->addVertex(-1.0, 1.0, -1.0);
	primitive->addNormal(0.0, 0.0, -1.0);
	primitive->addIndices(1, 5, 6);
	primitive->addIndices(6, 2, 1);

	primitive->addVertex(-1.0, -1.0, -1.0);
	primitive->addVertex(1.0, -1.0, -1.0);
	primitive->addVertex(-1.0, -1.0, 1.0);
	primitive->addVertex(1.0, -1.0, 1.0);
	primitive->addNormal(0.0, 1.0, 0.0);
	primitive->addIndices(7, 6, 5);
	primitive->addIndices(5, 4, 7);

	primitive->addVertex(-1.0, 1.0, -1.0);
	primitive->addVertex(1.0, 1.0, -1.0);
	primitive->addVertex(-1.0, 1.0, 1.0);
	primitive->addVertex(1.0, 1.0, 1.0);
	primitive->addNormal(0.0, -1.0, 1.0);
	primitive->addIndices(4, 0, 3);
	primitive->addIndices(3, 7, 4);

	primitive->addVertex(-1.0, -1.0, -1.0);
	primitive->addVertex(-1.0, -1.0, 1.0);
	primitive->addVertex(-1.0, 1.0, -1.0);
	primitive->addVertex(-1.0, 1.0, 1.0);
	primitive->addNormal(1.0, 0.0, 0.0);
	primitive->addIndices(4, 5, 1);
	primitive->addIndices(1, 0, 4);

	primitive->addVertex(1.0, -1.0, -1.0);
	primitive->addVertex(1.0, -1.0, 1.0);
	primitive->addVertex(1.0, 1.0, -1.0);
	primitive->addVertex(1.0, 1.0, 1.0);
	primitive->addNormal(-1.0, 0.0, 0.0);
	primitive->addIndices(3, 2, 6);
	primitive->addIndices(6, 7, 3);
}