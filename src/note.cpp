#include "note.h"

Note::Note() :
    m_isRest(false),
    m_duration(NoteDurationCount),
    m_hasDot(false),
    m_tieStart(false),
    m_tieEnd(false),
    m_hasAccent(false),
    m_isStaccato(false),
    m_striking(StrikingCount),
    m_tone(ToneNone)
{
}

Note::Note(NoteDuration duration) :
    m_isRest(false),
    m_duration(duration),
    m_hasDot(false),
    m_tieStart(false),
    m_tieEnd(false),
    m_hasAccent(false),
    m_isStaccato(false),
    m_striking(StrikingCount),
    m_tone(ToneNone)
{
}

Note::Note(bool isRest) :
    m_isRest(isRest),
    m_duration(NoteDurationCount),
    m_hasDot(false),
    m_tieStart(false),
    m_tieEnd(false),
    m_hasAccent(false),
    m_isStaccato(false),
    m_striking(StrikingCount),
    m_tone(ToneNone)
{
}

Note::Note(NoteDuration duration, bool isRest) :
    m_isRest(isRest),
    m_duration(duration),
    m_hasDot(false),
    m_tieStart(false),
    m_tieEnd(false),
    m_hasAccent(false),
    m_isStaccato(false),
    m_striking(StrikingCount),
    m_tone(ToneNone)
{
}

Note::Note(NoteDuration duration, bool isRest, Striking striking) :
    m_isRest(isRest),
    m_duration(duration),
    m_hasDot(false),
    m_tieStart(false),
    m_tieEnd(false),
    m_hasAccent(false),
    m_isStaccato(false),
    m_striking(striking),
    m_tone(ToneNone)
{
}

Note::Note(NoteDuration duration, Striking striking, bool hasAccent) :
    m_isRest(false),
    m_duration(duration),
    m_hasDot(false),
    m_tieStart(false),
    m_tieEnd(false),
    m_hasAccent(hasAccent),
    m_isStaccato(false),
    m_striking(striking),
    m_tone(ToneNone)
{
}

Note::Note(NoteDuration duration, bool isRest, Striking striking, bool hasAccent, Tone tone) :
    m_isRest(isRest),
    m_duration(duration),
    m_hasDot(false),
    m_tieStart(false),
    m_tieEnd(false),
    m_hasAccent(hasAccent),
    m_isStaccato(false),
    m_striking(striking),
    m_tone(tone)
{
}

Note::~Note()
{
    
}

string Note::description()
{
    // Creates a string that lists the attributes of the given note
    
    // This header is printed in Measure::description()
    // Duration, IsRest, Striking, Octave, Note, Accidental
    string output;
    output += GetNoteDurationString(m_duration) + ", ";
    output += m_isRest ? "Rest, " : "Not Rest, ";
    output += GetStrikingString(m_striking) + ", ";
    output += GetOctaveString(m_tone.m_octave) + ", ";
    output += GetNoteLetterString(m_tone.m_letter) + ", ";
    output += GetAccidentalString(m_tone.m_accidental) + ", ";
    
    return output;
}

bool Note::isRest()
{
	return m_isRest;
}

NoteDuration Note::getDuration()
{
	return m_duration;
}

bool Note::hasDot()
{
	return m_hasDot;
}

bool Note::startOfTie()
{
	return m_tieStart;
}

bool Note::endOfTie()
{
	return m_tieEnd;
}

bool Note::hasAccent()
{
	return m_hasAccent;
}

Striking Note::getStriking()
{
	return m_striking;
}

Tone Note::getTone()
{
	return m_tone;
}
