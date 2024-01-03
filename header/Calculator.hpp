class Calculator
{
public:
  static const int MAX = 510000;
  long long mod;
  long long fac[MAX], finv[MAX], inv[MAX];

  Calculator(long long mod)
  {
    this->mod = mod;
    InitCom();
  }

  long long COM(long long n, long long r);

private:
  void InitCom();
};
