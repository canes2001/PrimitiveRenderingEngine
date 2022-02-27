#ifndef SphereBuilder_h
#define SphereBuilder_h

#include "IPrimitiveBuilder.h"

/*
* SphereBuilder is a class whos only responsibility is to generate the vertex, normal and connectivity data
* of a sphere, and populate the primitive object
*/
class SphereBuilder : public IPrimitiveBuilder
{
public:
	SphereBuilder();
	~SphereBuilder() = default;

	void build(Primitive* primitive) override;

private:
	SphereBuilder(const SphereBuilder& other) = delete;
	SphereBuilder(SphereBuilder&& other) = delete;
	SphereBuilder& operator=(const SphereBuilder& other) = delete;
	SphereBuilder& operator=(SphereBuilder&& other) = delete;
};

#endif
