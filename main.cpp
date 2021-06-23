#include <iostream>
using namespace std;

int MDC (int a, int b) {
  int r;
  while (b != 0)
  {
    r = a % b;
    a = b;
    b = r;
  } return a;
}
int MMC (int a, int b) {
  return a * (b / MDC(a, b));
}
bool saoPrimos (int a, int b) {
  if (MDC(a,b) == 1){
    return true;
  }
  return false;
}
int main() {
  int numA, numB;
  cin >> numA >> numB;
  cout << "MDC(" << numA << ", " << numB << ") = "
       << MDC (numA, numB) << endl;
  cout << "MMC(" << numA << ", " << numB << ") = "
       << MMC (numA, numB) << endl;
  cout << numA << " e " << numB;
  bool primos = saoPrimos(numA, numB);
  if (primos == true)
    cout << " sao primos.\n";
  else
    cout << " não sao primos.\n";
  return 0;
}