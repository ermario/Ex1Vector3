#include "Vector3.h"
#include "Globals.h"

#define EPSILON 1e-5 //para no comparar con 0 y arriesgarnos a un error de div/0

template<typename T>
Vec3<T>::Vec3()
{
	vector[0] = T(0); // casting el valor inicial 0 al tipo del template
	vector[1] = T(0);
	vector[2] = T(0);
}

template<typename T>
Vec3<T>::Vec3(T x, T y, T z)
{
	vector[0] = x;
	vector[1] = y;
	vector[2] = z;
}

template<typename T>
Vec3<T>::Vec3(Vec3* v)
{
	vector[0] = 5;
	vector[1] = 5;
	vector[2] = 5;
}

template<typename T>
Vec3<T>::~Vec3()
{
}

template<typename T>
Vec3<T> Vec3<T>::Normalized()
{
	float l = length();
	Vec3 w(vector[0] / l, vector[1] / l, vector[2] / l); // Division expensive, do inverse multiplication
	return w;
}

template<typename T>
float Vec3<T>::distance_to(const Vec3& u)
{
	float distance_to = 0.0f;
	distance_to = sqrt(pow((vector[0] - u.vector[0]), 2) + pow((vector[1] - u.vector[1]), 2) + pow((vector[2] - u.vector[2]), 2)); //POW function expensive in comput
	return distance_to;
}



template<typename T>
T Vec3<T>::dot_product(const Vec3& u)
{
	float product = 0.0f;
	product = ((vector[0]*u.vector[0]) + (vector[1] * u.vector[1]) + (vector[2] * u.vector[2]));
	return product;
}

template<typename T>
Vec3<T> Vec3<T>::cross_product(const Vec3& u)
{
	Vec3 w(vector[1] * u.vector[2] - vector[2] * u.vector[1], vector[2] * u.vector[0] - vector[0] * u.vector[2], vector[0] * u.vector[1] - vector[1] * u.vector[0]);
	return w;
}



template<typename T>
float Vec3<T>::angle_between(const Vec3& u)
{
	float angle = 0.0f;
	angle = acos(dot_product(u) / (length()* u.length())); // Division expensive, do inverse multiplication
	angle *= (180 / M_PI);
	return angle;
}

template<typename T>
void Vec3<T>::getV() const
{
	std::cout << "[" <<vector[0] << "," << vector[1] << "," << vector[2] << "]\n";
}

template<typename T>
float Vec3<T>::length()
{
	float length = 0;
	length = sqrt(vector[0] * vector[0] + vector[1] * vector[1] + vector[2] * vector[2]);
	return length;
}

template class Vec3<float>;
template class Vec3<int>;


