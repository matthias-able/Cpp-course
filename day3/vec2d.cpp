#include <iostream>
#include <cmath>

struct Matrix2D {
	double x1;
	double x2;
	double x3;
	double x4;
	
	// Konstruktor mit zwei Parametern
	Matrix2D(	double const value_x1, 
				double const value_x2,
				double const value_x3,
				double const value_x4 ) : 
				x1{value_x1}, 
				x2{value_x2},
				x3{value_x3},
				x4{value_x4} {}
		

};

struct Vector2D {
public:
	double x = 0;
	double y = 0;

	// Konstruktor ohne Parameter
	Vector2D() : x{0}, y{0} {}

	// Konstruktor mit zwei Parametern
	Vector2D(double const value_x, double const value_y)
	: x{value_x}, y{value_y} {}

	void printToCOut() const {
		std::cout << "(" << x << " " << y << ")\n";
	}
	double length() const {
		return std::sqrt(x*x + y*y);
	}
	
	Vector2D operator * ( double const scale ) const {
		return Vector2D (x*scale , y*scale);
	}
	
// h 
Vector2D toUnitVector(){
		if (x==0 and y==0 ){
			std::cout <<"Error: No unit vec possible";
			std::abort();
		} else {
			return *this * (1 / length());
		}
	}

};

	bool operator == (Vector2D const& vec1, Vector2D const& vec2){
		return vec1.x == vec2.x and vec1.y == vec2.y;
	}
	
// f and g
	std::ostream & operator << (std :: ostream &os , Vector2D vector ){
		os << "(" << vector.x << " " << vector.y << ")";
		return os;
	}	
	
	
//i		

Matrix2D rotation_matrix(double const& angle){
		// x1 x2
 		// x3 x4
 	return Matrix2D( cos(angle), sin(angle), -sin(angle), cos(angle));
}
	
	
// j 
	Vector2D dot (Matrix2D const& M , Vector2D const& v){
		return Vector2D (M.x1 * v.x + M.x2 * v.y, 
						 M.x3 * v.x + M.x4 * v.y);
	}
	
	//als memberfunktion?
	void rotate(Vector2D & v, double const phi){
		Matrix2D M = rotation_matrix(phi);
		v = dot(M, v);
	}
	
// k 
	double dot (Vector2D a, Vector2D b){
		return a.x*b.x + a.y*b.y ;
	}
	
int main() {
	//a
	Vector2D v0 , v1 (1 ,1) , v2 (2 ,0) , v3 (0 ,3) , v4 (0 ,4) , v5 (1 ,1) , v6 ( -2 ,0);
	
	//b
	v1.printToCOut();

	//c
	std::cout << v1.length() <<"\n";
	v1 = v1 * 5.;
	std::cout << "length of v1*5: " << v1.length() <<"\n";	

	//f
	std::cout << v2 << "\n";
	
	//h
	std::cout << v3.toUnitVector() << "\n";
	std::cout << v3 << v3 << "\n";	
	
	std::cout << ( v1==v2) <<"\n";
	std::cout << (v1==v1) <<"\n";
	return 0;
}
