#ifndef IPrimitiveBuilder_h
#define IPrimitiveBuilder_h

class Primitive;


/*
* IPrimitiveBuilder serves only as an interface that specific primitive builders must implement
*/
class IPrimitiveBuilder
{
public:
	IPrimitiveBuilder() = default;
	virtual ~IPrimitiveBuilder() = default;

	virtual void build(Primitive* primitive) = 0;

private:
	IPrimitiveBuilder(const IPrimitiveBuilder& other) = delete;
	IPrimitiveBuilder(IPrimitiveBuilder&& other) = delete;
	IPrimitiveBuilder& operator=(const IPrimitiveBuilder& other) = delete;
	IPrimitiveBuilder& operator=(IPrimitiveBuilder&& other) = delete;
};

#endif
