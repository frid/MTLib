
#ifndef H_CVECTOR3D
#define H_CVECTOR3D

namespace MTLib {

		/*
		 * =====================================================================================
		 *        Class:  CVector
		 *  Description:  Vector 3 double element
		 * =====================================================================================	
		 */
		class CVector3d
		{
				public:
					// Data
					double d[3];
//					static double & x = d[0];
//					const double & y = d[1];
//					const double & z = d[2];

					// Constructor
					CVector3d();									/* Passing nothing */
    			CVector3d(const double a1, const double a2,		/* Passing 3 double values */
        					  const double a3);
    			CVector3d(const CVector3d& a_source);			/* Passing a vector */
					CVector3d(const double* a_in);					/* Passing a double array */ 
					CVector3d(const float* a_in);					/* Passing an float array */ 

					// Deconstructor
					~CVector3d();
					
						// Member function
						// -- x, y, z access
						double & x() { return d[0]; };
						double & y() { return d[1]; };
						double & z() { return d[2]; };


					// -- Init vector
					inline void zero( void );						/* zero vector */
					inline void ones( void );						/* ones vector */

//					// -- Set & Get 
//					inline double get(const unsigned int& a_component); 					  /* Get element by id */
//					inline void set(const double& a_x, const double& a_y, const double& a_z); /* Set element (3 argument) */
//
//					// -- Copy 
//					inline void copyto(cVector3d& a_destination);
//					inline void copyfrom(const cVector3d &a_source);
//
//					// -- Add 
//					inline void add(const cVector3d& a_vector);
//					inline void add(const double& a_x, const double& a_y, const double& a_z);
//					inline void addr(const cVector3d& a_vector, cVector3d& a_result);
//					inline void addr(const double& a_x, const double& a_y, const double& a_z, cVector3d& a_result);
//
//					// -- Substraction
//					inline void sub(const cVector3d& a_vector);
//					inline void sub(const double& a_x, const double& a_y, const double& a_z);
//					inline void subr(const cVector3d& a_vector, cVector3d& a_result);
//					inline void subr(const double& a_x, const double& a_y, const double& a_z,
//								cVector3d &a_result); 
//
//					// -- Multiply vector by a scalar
//					inline void mul(const double &a_scalar);
//					inline void mulr(const double& a_scalar, cVector3d& a_result);
//
//					// -- Element by Element multiply
//					inline void elementMul(const cVector3d& a_vector);
//					inline void elementMulr(const cVector3d& a_vector, cVector3d& a_result);
//
//					// -- Divide vector by a scalar
//					inline void div(const double &a_scalar);
//					inline void divr(const double& a_scalar, cVector3d& a_result);
//
//					// -- Negate vector -> v = -v
//					inline void negate();
//					inline void negater(cVector3d& a_result);
//
//					// -- Length of vector
//					inline double length();
//					inline double lengthsq(void);
//
//					// -- Normalized vector 
//					inline void normalize();
//					inline void normalizer(cVector3d& a_result); 
//
//					// -- Vector Cross product and Dot product 
//					inline void cross(const cVector3d& a_vector);
//					inline cVector3d crossAndReturn(const cVector3d& a_vector);
//					inline void crossr(const cVector3d& a_vector, cVector3d& a_result);
//					inline double dot(const cVector3d& a_vector);
//
//					// -- Vector distance 
//					inline double distance(const cVector3d& a_vector); 
//					inline double distancesq(const cVector3d& a_vector);
//
//					// -- Vector equal (test two vector are equal)
//					inline bool equals(const cVector3d& a_vector, const double epsilon=0.0); 
//					
//					// -- Convert to strng
//					inline void str(string& a_string, const unsigned int a_precision=2); 
//					inline string str(const unsigned int a_precision=2);
//				
//					// -- Print string
//					inline void print(const unsigned int a_precision=2); 
//
//
//					// -- Operator
//					inline CVector3d operator*(const CVector3d& a_v, const double a_input);	/* vo = v1*c  */
//					inline CVector3d operator/(const CVector3d& a_v, const double a_input);	/* vo = v1/c  */
//					inline CVector3d operator*(const double a_input, const CVector3d& a_v);	/* vo = v1.*v */
//					inline CVector3d operator/(const double a_input, const CVector3d& a_v);	/* vo = v1./v */
//					inline CVector3d operator+(const CVector3d& a_v1, const cVector3d& a_v2);	/* vo = v1+v2 */
//					inline CVector3d operator-(const CVector3d& a_v1, const cVector3d& a_v2);	/* vo = v1-v2 */
//    				inline void operator+= (const double& a_val);							/* vo+=c      */
//    				inline void operator-= (const double& a_val);							/* vo-=c      */
//    				inline void operator*= (const double& a_val);							/* vo*=c      */
//    				inline void operator/= (const double& a_val);							/* vo/=c      */
//					static inline std::ostream &operator << (std::ostream &a_os, cVector3d const& a_vec);
//    				double& operator[] (unsigned int a_index);								/* d = vo[index] */ 
//    				double  operator[] (unsigned int a_index);								/* d = vo[index] */ 
	
						
				protected:
						

				private:

		}; /* -----  end of class CVector  ----- */

}		/* -----  end of namespace MTLib  ----- */

#endif
