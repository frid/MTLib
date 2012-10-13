#include "vector.h"

//////////////////////////////////////////////////////////////////////////////////////////
// Constructor 
CVector3d::CVector3d() {

}


CVector3d::CVector3d(const double a1, const double a2,		/* Passing 3 double values */
        					  const double a3) {

	x = a1;
	y = a2;
	z = a3;

}

/* Passing a vector */
CVector3d(const CVector3d& a_source) {
	x = a_source.get(0);
	y = a_source.get(1);
	z = a_source.get(2);

}
/* Passing a double array */ 
CVector3d(const double* a_in) {

	x = a_in[0];
	y = a_in[1];
	z = a_in[2];

}

/* Passing an float array */ 
CVector3d(const float* a_in) {
	x = (double)a_in[0];
	y = (double)a_in[1];
	z = (double)a_in[2];
}



CVector3d::~CVector3d(){
}


////////////////////////////////////////////////////////////////
// Member function
// -- Init vector

/* zero vector */
inline void CVector3d::zero( void ) {
	x = 0; y = 0; z = 0;
}

/* ones vector */
inline void CVector3d::ones( void ) {
	x = 1; y = 1; z = 1;
}

// -- Set & Get
/* Get element by id */
inline double CVector3d::get(const unsigned int& a_component) {
	return d[a_component];
}

/* Set element (3 argument) */
inline void CVector3d::set(const double& a_x, const double& a_y, const double& a_z) {
	x = a_x;
	y = a_y;
	z = a_z;
}

// -- Copy 
inline void CVector3d::copyto(cVector3d& a_destination) {
	a_destination.x = x;
	a_destination.y = y;
	a_destination.z = z;
}

 
inline void CVector3d::copyfrom(const cVector3d &a_source) {
	x = a_source.x;
	y = a_source.y;
	z = a_source.z;
}

// -- Add 
inline void CVector3d::add(const cVector3d& a_vector) {
	x = x + a_vector.x;
	y = y + a_vector.y;
	z = z + a_vector.z;
}
inline void CVector3d::add(const double& a_x, const double& a_y, const double& a_z) {
	x = x + a_x; 
	y = y + a_y; 
	z = z + a_z;
}
inline void CVector3d::addr(const cVector3d& a_vector, cVector3d& a_result) {
	a_result.x = x + a_vector.x;
	a_result.y = y + a_vector.y;
	a_result.z = z + a_vector.z;
}
inline void CVector3d::addr(const double& a_x, const double& a_y, const double& a_z, cVector3d& a_result) {
	a_result.x = x + a_x;
	a_result.y = y + a_y;
	a_result.z = z + a_z;
}


// -- Substraction
inline void  CVector3d::sub(const cVector3d& a_vector) {
	x = x - a_vector.x;
	y = y - a_vector.y;
	z = z - a_vector.z;
}
inline void  CVector3d::sub(const double& a_x, const double& a_y, const double& a_z) {
	x = x - a_x;
	y = y - a_y;
	z = z - a_z;

}

inline void  CVector3d::subr(const cVector3d& a_vector, cVector3d& a_result) {
	a_result.x = x - a_vector.x;
	a_result.y = y - a_vector.y;
	a_result.z = z - a_vector.z;
}

inline void  CVector3d::subr(const double& a_x, const double& a_y, const double& a_z,
								cVector3d &a_result) {
	a_result.x = x - a_x;
	a_result.y = y - a_y;
	a_result.z = z - a_z;

}

// -- Multiply vector by a scalar
inline void CVector3d::mul(const double &a_scalar) {
	x *= a_scalar;
	y *= a_scalar;
	z *= a_scalar;
}
inline void CVector3d::mulr(const double& a_scalar, cVector3d& a_result) {
	a_result.x = x * a_scalar;
	a_result.y = y * a_scalar;
	a_result.z = z * a_scalar;
}

// -- Element by Element multiply
inline void CVector3d::elementMul(const cVector3d& a_vector) {
	x *= a_vector.x;
	y *= a_vector.y;
	z *= a_vector.z;

}
inline void CVector3d::elementMulr(const cVector3d& a_vector, cVector3d& a_result) {
	a_result.x = a_vector.x * x;
	a_result.y = a_vector.y * y;
	a_result.z = a_vector.z * z;
}

// -- Divide vector by a scalar
inline void CVector3d::div(const double &a_scalar) {
	x = x/a_scalar;
	y = y/a_scalar;
	z = z/a_scalar;
}
inline void CVector3d::divr(const double& a_scalar, cVector3d& a_result) {
	a_result.x = x/a_scalar;
	a_result.y = y/a_scalar;
	a_result.z = z/a_scalar;
}

// -- Negate vector -> v = -v
inline void CVector3d::negate() {
	x = -x;
	y = -y;
	z = -z;
}
inline void CVector3d::negater(cVector3d& a_result) {
	a_result.x = -x;
	a_result.y = -y;
	a_result.z = -z;
}
// -- Length of vector
inline double CVector3d::length() {

}
inline double CVector3d::lengthsq(void) {

}

// -- Normalized vector 
inline void CVector3d::normalize() {

}
inline void CVector3d::normalizer(cVector3d& a_result) {

}

// -- Vector Cross product and Dot product 
inline void CVector3d::cross(const cVector3d& a_vector) {

}
inline CVector3d::cVector3d crossAndReturn(const cVector3d& a_vector) {

}
inline void CVector3d::crossr(const cVector3d& a_vector, cVector3d& a_result) {

}
inline double CVector3d::dot(const cVector3d& a_vector) {

}

// -- Vector distance 
inline double CVector3d::distance(const cVector3d& a_vector) {

}
inline double CVector3d::distancesq(const cVector3d& a_vector) {

}

// -- Vector equal (test two vector are equal)
inline bool CVector3d::equals(const cVector3d& a_vector, const double epsilon=0.0) {

}
					
// -- Convert to strng
inline void CVector3d::str(string& a_string, const unsigned int a_precision=2) {

}
inline string CVector3d::str(const unsigned int a_precision=2) {

}
				
// -- Print string
inline void CVector3d::print(const unsigned int a_precision=2) {

}

// -- Operator
///* vo = v1*c  */
inline CVector3d CVector3d::operator*(const CVector3d& a_v, const double a_input)	 {

}
/* vo = v1/c  */ 
inline CVector3d CVector3d::operator/(const CVector3d& a_v, const double a_input) {

}
/* vo = v1.*v */ 
inline CVector3d CVector3d::operator*(const double a_input, const CVector3d& a_v)	{

}

/* vo = v1./v */
inline CVector3d CVector3d::operator/(const double a_input, const CVector3d& a_v)	 {

}

/* vo = v1+v2 */
inline CVector3d CVector3d::operator+(const CVector3d& a_v1, const cVector3d& a_v2)	 {

}
/* vo = v1-v2 */
inline CVector3d CVector3d::operator-(const CVector3d& a_v1, const cVector3d& a_v2)	 {

}
/* vo+=c      */ 
inline void CVector3d::operator+= (const double& a_val) {

}
/* vo-=c      */
inline void CVector3d::operator-= (const double& a_val) {

}
/* vo*=c      */
inline void CVector3d::operator*= (const double& a_val) {

}
/* vo/=c      */
inline void CVector3d::operator/= (const double& a_val) {

}
static inline std::ostream & CVector3d::operator << (std::ostream &a_os, cVector3d const& a_vec) {

}
/* d = vo[index] */ 
double& CVector3d::operator[] (unsigned int a_index) {

}
/* d = vo[index] */
double  CVector3d::operator[] (unsigned int a_index) {

}
	
			
