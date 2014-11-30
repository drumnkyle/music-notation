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

string Note::description() const
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

bool Note::isRest() const
{
	return m_isRest;
}

NoteDuration Note::getDuration() const
{
	return m_duration;
}

bool Note::hasDot() const
{
	return m_hasDot;
}

bool Note::startOfTie() const
{
	return m_tieStart;
}

bool Note::endOfTie() const
{
	return m_tieEnd;
}

bool Note::hasAccent() const
{
	return m_hasAccent;
}

Striking Note::getStriking() const
{
	return m_striking;
}

Tone Note::getTone() const
{
	return m_tone;
}

bool Note::operator ==(const Note &note) const
{
	if (m_isRest == note.m_isRest &&
		m_duration == note.m_duration &&
		m_hasDot == note.m_hasDot &&
		m_tieStart == note.m_tieStart &&
		m_tieEnd == note.m_tieEnd &&
		m_hasAccent == note.m_hasAccent &&
		m_isStaccato == note.m_isStaccato &&
		m_striking == note.m_striking &&
		m_tone == note.m_tone)
	{
		return true;
	}
	return false;
}
