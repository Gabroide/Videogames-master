#ifndef __Vector3__
#define __Vector3__

template <class T>
class Vector3 {
	private:
		T x, y, z;
	public:
		// Constructors
		Vector3();
		Vector3(T newX, T newY, T newZ);
		Vector3(const Vector3<T>& newVec);

		// Functions
		Vector3<T> operator+(const Vector3<T>& addedVec3);
		float distance_to(const Vector3<T>& toVec3);
		Vector3<float> normalize();
		void printVector();
};

template <class T>
Vector3<T>::Vector3() : x(), y(), z() {

}

template <class T>
Vector3<T>::Vector3(T newX, T newY, T newZ) : x(newX), y(newY), z(newZ) {

};

template <class T>
Vector3<T>::Vector3(const Vector3<T>& newVec) : x(newVec.x), y(newVec.y), z(newVec.z) {

};

template <class T>
Vector3<float> Vector3<T>::normalize() {
	float vecLen = sqrt((x * x) + (y * y) + (z * z));
	return Vector3<float>(x / vecLen, y / vecLen, z / vecLen);
}

template <class T>
inline float Vector3<T>::distance_to(const Vector3<T>& toVec3) {
	return sqrt(pow(x - toVec3.x, 2) + pow(y - toVec3.y, 2) + pow(z - toVec3.z, 2));
}

template <class T>
inline Vector3<T> Vector3<T>::operator+(const Vector3<T>& addedVec3) {
	return Vector3<T>(x + addedVec3.x, y + addedVec3.y, z + addedVec3.z);
}

template <class T>
inline void Vector3<T>::printVector() {
	std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
}

#endif