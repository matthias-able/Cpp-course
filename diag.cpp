#include <cmath>
#include <iostream>
#include <cmath>
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>

using Eigen::MatrixXd;
 
int main()
{
//c)
  MatrixXd A(2,2);
  A(0,0) = 1;
  A(0,1) = 2;
  A(1,0) = 2;
  A(1,1) = 3;
  std::cout << A << std::endl;
  
//d)
  Eigen::EigenSolver<MatrixXd> es(A);
  
//e)
  std::cout << es.eigenvalues() << std::endl; 
  std::cout << es.eigenvectors() << std::endl; 
  
  //MatrixXcd D = es.eigenvalues().asDiagonal();
  //std::cout << D << std::endl;  
  return 0;
}



