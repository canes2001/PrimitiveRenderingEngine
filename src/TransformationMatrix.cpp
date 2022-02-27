#include "TransformationMatrix.h"

TransformationMatrix::TransformationMatrix()
	:m_matrix{}
{
	// Matrices for OpenGL are always of size 16
	m_matrix.reserve(16);
	m_matrix.resize(16);

	// initialize with identity matrix
	m_matrix[0] = 1.0;
	m_matrix[1] = 0.0;
	m_matrix[2] = 0.0;
	m_matrix[3] = 0.0;

	m_matrix[4] = 0.0;
	m_matrix[5] = 1.0;
	m_matrix[6] = 0.0;
	m_matrix[7] = 0.0;

	m_matrix[8] = 0.0;
	m_matrix[9] = 0.0;
	m_matrix[10] = 1.0;
	m_matrix[11] = 0.0;

	m_matrix[12] = 0.0;
	m_matrix[13] = 0.0;
	m_matrix[14] = 0.0;
	m_matrix[15] = 1.0;
}