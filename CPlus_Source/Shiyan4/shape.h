#pragma once
// shape.h文件 定义抽象基类Shape
#ifndef Shape
class Shape
{
public:
	virtual double Area() const
	{
		return 0.0;
	}
	// 纯虚函数，在派生类中重载
	virtual void PrintShapeName() const = 0;
	virtual void Print() const = 0;
};
#endif // !Shape

