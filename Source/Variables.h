#pragma once


struct Variables
{
    static const int incrementFactor = 2;
    static const int windowWidth = 800;
    static const int windowHeight = 600;
    static const int minimumFrequency = 50;
    static const int maximumFrequency = 5000;
    
    static const int lowerKeyBound = 21;
    static const int higherKeyBound = 109;
    static const int numBoxes = higherKeyBound - lowerKeyBound; 
    static const int noteBoxHeight = 40;
    
    static const juce::Colour backgroundColour;
    static const juce::Colour boundingBoxColour;
    static const juce::Colour pitchLineColour; 
    static const juce::Colour textColour;
};


