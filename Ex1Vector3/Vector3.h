#pragma once

template <typename T>
class Vec3
{
public:
	Vec3();
	Vec3<T>(T x, T y, T z);
	Vec3(Vec3* v);
	~Vec3();
	Vec3<T> Normalize();
	float distance_to(Vec3 u);
	float dot_product(Vec3 u);
	Vec3<T> cross_product(Vec3 u);
	float angle_between(Vec3 u);
	void getV() const;
private:
	T vector[3];
	float length();
};

