#include "measure.h"

typedef vector<Note>::iterator NoteIterator;

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

Measure::Measure(UInt index, Timing timing) :
	m_index(index),
    m_repeatMode(RepeatNone),
    m_isComplete(false),
	m_timing(timing)
{
}

Measure::Measure(UInt index, Repeat repeatMode) :
	m_index(index),
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

bool Measure::insertNote(UInt index, Note note)
{
	NoteIterator it = m_notes.begin();
	advance(it, index);
	if (it == m_notes.end())
	{
		return false;
	}
	m_notes.insert(it, note);
	return true;
}

bool Measure::removeNote(Note note)
{
    // TODO: Recalculate
	for (NoteIterator it = m_notes.begin(); it < m_notes.end(); it++)
	{
		if (*it == note)
		{
			m_notes.erase(it);
			return true;
		}
	}
    return false;
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

UInt Measure::getIndex()
{
	return m_index;
}

void Measure::setIndex(UInt index)
{
	m_index = index;
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
