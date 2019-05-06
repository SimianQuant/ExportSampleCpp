#ifndef SIMIANQUANTEXTGENERATEDRESULT_HEADER
#define SIMIANQUANTEXTGENERATEDRESULT_HEADER

namespace simianquant {
namespace ext {
class GeneratedResult {
private:
  double _a;
  double _b;
  double _c;

public:
  GeneratedResult(double a, double b, double c) : _a(a), _b(b), _c(c) {}
  double getA() const { return _a; }
  double getB() const { return _b; }
  double getC() const { return _c; }
};
} // namespace ext
} // namespace simianquant

#endif