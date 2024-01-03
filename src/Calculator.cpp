#include "../header/Calculator.hpp"

void Calculator::InitCom()
{
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;

  for (int i = 2; i < MAX; i++){
    fac[i] = fac[i - 1] * i % mod;
    inv[i] = mod - inv[mod%i] * (mod/i) % mod;
    finv[i] = finv[i-1] * inv[i] % mod;
  }
}

long long Calculator::COM(long long n, long long r)
{
  if (n < r) return 0;
  if (n < 0 || r < 0) return 0;
  return fac[n] * (finv[r] * finv[n - r] % mod) % mod;
}
