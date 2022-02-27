#ifndef BoxBuilder_h
#define BoxBuilder_h

#include "IPrimitiveBuilder.h"

/*
* BoxBuilder is a class whos only responsibility is to generate the vertex, normal and connectivity data
* of a box primitive, and populate the primitive object
*/
class BoxBuilder : public IPrimitiveBuilder
{
public:
	BoxBuilder();
	~BoxBuilder() = default;

	void build(Primitive* primitive) override;

private:
	BoxBuilder(const BoxBuilder& other) = delete;
	BoxBuilder(BoxBuilder&& other) = delete;
	BoxBuilder& operator=(const BoxBuilder& other) = delete;
	BoxBuilder& operator=(BoxBuilder&& other) = delete;
};

#endif