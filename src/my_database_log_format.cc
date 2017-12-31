#include "my_database_log_format.h"

std::string MyDatabaseLogFormat(const Eigen::Matrix4d & m) {
  std::stringstream ss;
  ss<<m(0, 0)<<", "<<m(0, 1)<<", "<<m(0, 2)<<", "<<m(0, 3)<<", "
    <<m(1, 0)<<", "<<m(1, 1)<<", "<<m(1, 2)<<", "<<m(1, 3)<<", "
    <<m(2, 0)<<", "<<m(2, 1)<<", "<<m(2, 2)<<", "<<m(2, 3)<<", "
    <<m(3, 0)<<", "<<m(3, 1)<<", "<<m(3, 2)<<", "<<m(3, 3);
  return ss.str(); 
}