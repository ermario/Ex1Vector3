#pragma once

template <typename T>
class Vec3
{
public:
	Vec3();
	Vec3<T>(T x, T y, T z);
	Vec3(Vec3* v);
	~Vec3();
	Vec3<T> Normalized();
	float distance_to(const Vec3& u); //pasamos la referencia del objeto asi no copiamos el objeto entero
	T dot_product(const Vec3& u); // si usamos "T" devovlemos el tipo del que se ha creado el objeto (float,int,double)
	Vec3<T> cross_product(const Vec3& u);
	float angle_between(const Vec3& u);
	void getV() const;
private:
	T vector[3];
	float length();
};

