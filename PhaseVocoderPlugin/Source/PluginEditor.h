/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PhaseVocoderPluginAudioProcessorEditor  : public AudioProcessorEditor, private Slider::Listener
{
public:
    PhaseVocoderPluginAudioProcessorEditor (PhaseVocoderPluginAudioProcessor&);
    ~PhaseVocoderPluginAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    void log(Graphics&, std::string);

    Slider frequencySlider;
    Label frequencyLabel;
private:

    void sliderValueChanged(Slider* slider) override; // [3]
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PhaseVocoderPluginAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PhaseVocoderPluginAudioProcessorEditor)
};
