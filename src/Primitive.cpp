#include "Primitive.h"

void Primitive::addVertex(double x, double y, double z)
{
	m_vertices.push_back(x);
	m_vertices.push_back(y);
	m_vertices.push_back(z);
}

void Primitive::addNormal(double n1, double n2, double n3)
{
	m_normals.push_back(n1);
	m_normals.push_back(n2);
	m_normals.push_back(n3);
}

void Primitive::addIndices(int index1, int index2, int index3)
{
	m_indices.push_back(index1);
	m_indices.push_back(index2);
	m_indices.push_back(index3);
}