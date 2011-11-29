#include <iostream>
#include <stdlib.h>
#import <vector>
#include <cstdlib>
#include <ctime>
#include "neuron.cpp"

using namespace std;

class NeuronLayer {
    private:
        float layerWeight;
        vector<Neuron> neurons;
    public:
        void init(int numOfNeurons);
        float weightGen();
        void setSingleInput(float inputIn);
        void setIndiInputs(vector<float> inputs);
        float getOutput();
};

inline void NeuronLayer::init(int numOfNeurons)
{
    for (int i=0; i<numOfNeurons; i++)
    {
        Neuron nron;
        nron.setWeight(weightGen());
        neurons.push_back(nron);

    }
}

inline float NeuronLayer::weightGen()
{
    float XMin = 0.0;
    float XMax = 1.0;

    float r = float(rand())/(float(RAND_MAX)+1.0); // random float in range 0.0 to 1.0 (non inclusive)
    float weight = XMin + r*(XMax - XMin);

    return weight;
}

inline void NeuronLayer::setSingleInput(float inputIn)
{
    for (int i=0; i<numOfNeurons; i++)
    {
        neurons.at(i).setInput(inputIn);
    }
}

inline void NeuronLayer::setIndiInputs(vector<float> inputIn)
{
    if (inputIn.size() != numOfNeurons)
    {
        return 0;
    }
    for (int i=0; i<numOfNeurons; i++)
    {
        neurons.at(i).setInput(inputIn.at(i));
    }
}

inline float NeuronLayer::getOutput()
{
    float sum = 0.0 ;

    for (int i=0; i<numOfNeurons; i++)
    {
        sum += (neurons.at(i).getWeight()) * (neurons.at(i).getInput())
    }
    return input+weight;
}
