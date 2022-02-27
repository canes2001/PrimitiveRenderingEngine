#ifndef Primitive_h
#define Primitive_h

#include <vector>

/*
* Primitive is a simple class that holds only the data necessary for rendering, (i.e. vertices, normals, and indices for connectivity)
*/
class Primitive
{
public:
	Primitive() = default;
	Primitive(const Primitive& other) = default;
	Primitive(Primitive&& other) = default;
	Primitive& operator=(const Primitive& other) = default;
	Primitive& operator=(Primitive&& other) = default;

	~Primitive() = default;

	void addVertex(double x, double y, double z);
	void addNormal(double n1, double n2, double n3);
	void addIndices(int index1, int index2, int index3);

	std::vector<double> getVertices() const { return m_vertices; }
	std::vector<double> getNormals() const { return m_normals; }
	std::vector<int> getIndices() const { return m_indices; }

private:
	std::vector<double> m_vertices;
	std::vector<double> m_normals;
	std::vector<int> m_indices;
};

#endif
