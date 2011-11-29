#include <iostream>
#include <cstdlib>
#include <ctime>
//#include "neuron.cpp"
//#include "neuronLayer.cpp"

using namespace std;

class Neuron {
    private:
        float weight;
        float input;
    public:
        float getInput();
        float getWeight();
        void setInput(float inputIn);
        void setWeight(float weightIn);
};

inline float Neuron::getInput()
{
    return input;
}

inline float Neuron::getWeight()
{
    return weight;
}

inline void Neuron::setInput(float inputIn)
{
    input = inputIn;
}

inline void Neuron::setWeight(float weightIn)
{
    weight = weightIn;
}
