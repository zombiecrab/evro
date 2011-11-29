#include <iostream>
#include "neuralNet.cpp"

using namespace std;

int main()
{
    NeuralNet nNet;

    nNet.addLayer(3);
    nNet.addLayer(6);
    nNet.addLayer(5);

    vector<float> inputs;

    inputs.push_back(0.3);
    inputs.push_back(0.4);
    inputs.push_back(0.5);

    nNet.setInitInputs(inputs);

    vector<float> outputs;

    outputs = nNet.updateAndRetriveOutput();

    return 0;
}
