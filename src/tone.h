#ifndef TONE_H
#define TONE_H

#include "types.h"

/**
 The tone associated with a note. This holds the octave to which
 the note belongs, the letter, and the accidental.
 */
struct Tone
{
    Octave m_octave;
    NoteLetter m_letter;
    Accidental m_accidental;
};

static Tone ToneNone = {OctaveCount, NoteLetterCount, AccidentalCount};

#endif // TONE_H
