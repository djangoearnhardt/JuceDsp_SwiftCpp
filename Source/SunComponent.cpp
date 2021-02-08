/*
  ==============================================================================

    SunComponent.cpp
    Created: 8 Feb 2021 11:26:31am
    Author:  Sam LoBue

  ==============================================================================
*/

#include <JuceHeader.h>
#include "SunComponent.h"

//==============================================================================
SunComponent::SunComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

SunComponent::~SunComponent()
{
}

void SunComponent::paint (juce::Graphics& g)
{
    g.setColour(juce::Colours::yellow);
    g.drawEllipse(400, 50, 50, 50, 10);
}

void SunComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
