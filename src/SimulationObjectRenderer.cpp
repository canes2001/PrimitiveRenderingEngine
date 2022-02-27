#include "SimulationObjectRenderer.h"

#include <iostream>

#include "AbstractSimulationObject.h"
#include "Primitive.h"

void SimulationObjectRenderer::render(AbstractSimulationObject* object)
{
	std::cout << "Rendering Primitive..." << std::endl;

	
	// Pass transparency, color, and matrices as uniforms to OpenGL Vertex shader
	// Here is some pseudo logic...
	object->getTransparency();
	object->getColor();
	object->getTranslation();
	
	// Dummy logic...In the real code we would pass these to the uniforms in the vertex shader
	// glUniform(object->getTransparency());
	// glUniform(object->getColor());
	// glUniform(object->getTranslation());

	Primitive* primitiveToRender = object->getPrimitive();
	primitiveToRender->getVertices();
	primitiveToRender->getNormals();
	primitiveToRender->getIndices();

	// Dummy logic...In real code we would initialize the VAO/VBO if not yet initialized yet, then render.
	// GLDrawArrays(v)......
}