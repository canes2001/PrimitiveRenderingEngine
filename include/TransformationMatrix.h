#ifndef TransformationMatrix_h
#define TransformationMatrix_h

#include <vector>

/*
* Transformation Matrix is just a mock class for purposes of this prototype. Not intended to be fully implemented. Will likely use
* GLM for this
*/
class TransformationMatrix
{
public:
	TransformationMatrix();
	TransformationMatrix(const TransformationMatrix& other) = default;
	TransformationMatrix(TransformationMatrix&& other) = default;
	TransformationMatrix& operator=(const TransformationMatrix& other) = default;
	TransformationMatrix& operator=(TransformationMatrix&& other) = default;

	~TransformationMatrix() = default;

private:
	std::vector<double> m_matrix;
};

#endif
