#pragma once
// shape.h�ļ� ����������Shape
#ifndef Shape
class Shape
{
public:
	virtual double Area() const
	{
		return 0.0;
	}
	// ���麯������������������
	virtual void PrintShapeName() const = 0;
	virtual void Print() const = 0;
};
#endif // !Shape

