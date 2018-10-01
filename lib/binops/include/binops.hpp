#ifndef binops_hpp
#define binops_hpp

#include <stdio.h>

namespace BinOps {
class Addition {
 public:
  void setLHS(int lhs);
  void setRHS(int rhs);

  int getLHS();
  int getRHS();

  int perform();

 private:
  int lhs;
  int rhs;
};
}  // namespace BinOps

#endif
