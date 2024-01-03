#include "../header/Calculator.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
  bool endflg = false;
  long long p;
  cout << "----< Calculation of binomial coefficients (nCr) >----" << endl;

  while(true)
  {
    string p_str;
    cout << "Enter the mod: ";
    cin >> p_str;
    if(p_str == "exit" || p_str == "quit")
    {
      endflg = true; break;
    }

    try{
      p = stoll(p_str);
    }
    catch(exception &e){
      endflg = true;
      cout << "\"" << p_str << "\" is not number." << endl << endl;
      continue;
    }
    break;
  }
  if(endflg) return 0;

  Calculator* calculator = new Calculator(p);

  long long n, r;
  while(true)
  {
    string n_str;
    cout << "Enter the n: ";
    cin >> n_str;
    if(n_str == "exit" || n_str == "quit") break;

    try{
      n = stoll(n_str);
    }catch(exception &e){
      cout << "\"" << n_str << "\" is not number." << endl;
      continue;
    }

    while(true)
    {
      string r_str;
      cout << "Enter the r: ";
      cin >> r_str;
      cout << endl;
      if(r_str == "exit" || r_str == "quit") break;

      try{
        r = stoll(r_str);
      }catch(exception &e){
        cout << "\"" << r_str << "\" is not number." << endl;
        continue;
      }
      break;
    }

    cout << n << "C" << r << " is " << calculator->COM(n,r) << endl << endl;
  }

  delete calculator;
  return 0;
}
