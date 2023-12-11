#include <iostream>
#include<vector>
#include "input.h"
#include "gates.h"
#include "circuit.cpp"
using namespace std;


int main() {
  Circuit circuit;
  And andGate;
  Or orGate;
  Xor xorGate;

  circuit.AddGate(&andGate);
  circuit.AddGate(&orGate);
  circuit.AddGate(&xorGate);

  vector<Input> inputs = {false, true, false, true};
  cout << "Circuit 1 output: " << circuit.Evaluate(inputs) << std::endl;

  return 0;
}