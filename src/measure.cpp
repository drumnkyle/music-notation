#include "measure.h"

Measure::Measure() :
    m_repeatMode(RepeatNone),
    m_isComplete(false)
{
}

Measure::Measure(const Measure& measure)
{
    this->m_index = measure.m_index;
    this->m_currentRepeat = measure.m_currentRepeat;
    this->m_repeatCount = measure.m_repeatCount;
    this->m_repeatMode = measure.m_repeatMode;
    this->m_repeatMeasure = measure.m_repeatMeasure;
    this->m_notes = measure.m_notes;
    this->m_isComplete = measure.m_isComplete;
    this->m_timing = measure.m_timing;
}

Measure::Measure(Timing timing) :
    m_timing(timing),
    m_repeatMode(RepeatNone),
    m_isComplete(false)
{
}

Measure::Measure(Repeat repeatMode) :
    m_repeatMode(repeatMode),
    m_isComplete(false)
{
}

Measure::~Measure()
{
    
}

bool Measure::makeRepeatOfPrev()
{
    // TODO: Implement
    return false;
}

bool Measure::addNote(Note note)
{
    // TODO: Need to check if you are able to add the note
    m_notes.push_back(note);
    return true;
}

bool Measure::removeNote(Note note)
{
    // TODO: Recalculate
    m_notes.erase(m_notes.end() - 1);
    return true;
}

bool Measure::removeNote(UInt index)
{
    // TODO: Recalculate
    m_notes.erase(m_notes.begin() + index);
    return true;
}

Timing* Measure::getTiming()
{
    return &m_timing;
}

string Measure::description()
{
    // Creates a string that lists every note in the measure
    string output = "";
    output += "Duration, IsRest, Striking, Octave, Note, Accidental\n";
    
    // Print all notes
    for (int i = 0; i < m_notes.size(); i++)
    {
        output += m_notes.at(i).description() ;
        output += "\n";
    }
    
    return output;
}
