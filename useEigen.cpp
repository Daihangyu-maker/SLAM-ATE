//use eigen to operate matrix
#include<iostream>
using namespace std;

#include<Eigen/Core>
#include<Eigen/Dense>
using namespace Eigen;

int main(int argc, char **argv)
{
Matrix<double,2,3>hangyu;
Matrix<double,3,1>shijia;
hangyu << 1,2,3,4,5,6;
shijia << 5,9,16;
Matrix<double,2,1>result = hangyu * shijia;
cout << result.transpose() << endl;
return 0;
}
