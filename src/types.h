#ifndef TYPES_H
#define TYPES_H

#include <string>

using namespace std;

typedef unsigned int UInt;

/**
 How the the instrument is struck. For a stringed instrument, like guitar, up and down strokes are used. For a percussion instrument, it differentiates between left and right.
 */
enum Striking
{
    Left = 0,
    Right,
    Up = 0,
    Down,
    
    StrikingCount = 4
};

/**
 The duration of a note.
 */
enum NoteDuration
{
    Whole,
    Half,
    Quarter,
    Eighth,
    Sixteenth,
    ThirtySecond,
    SixtyFourth,
    
    NoteDurationCount
};

/**
 The accidental associated with a note, such as sharp or flat.
 */
enum Accidental
{
    AccidentalNone,
    AccidentalSharp,
    AccidentalFlat,
    AccidentalNatural,
    
    AccidentalCount
};

/**
 The octave number associated with the note.
 */
enum Octave
{
    OctaveNegative1 = -1,
    Octave0,
    Octave1,
    Octave2,
    Octave3,
    Octave4,
    Octave5,
    Octave6,
    Octave7,
    Octave8,
    Octave9,
    
    OctaveCount
};

/**
 The letter associated with the tone of the given note.
 */
enum NoteLetter
{
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    
    NoteLetterCount
};

/**
 The different instruments that can be chosen from.
 */
enum Instrument
{
    Guitar6,
    Guitar7,
    BassGuitar4,
    BassGuitar5,
    BassGuitar6,
    Drums,
    
    InstrumentCount
};

/**
 Different repeat modes for a measure or set of measures.
 */
enum Repeat
{
    RepeatNone,
    RepeatOnce,
    RepeatInfinite,
    RepeatMany,
    
    RepeatCount
};

/**
 The Clef of the staff: treble or bass.
 */
enum Clef
{
	ClefTreble,
	ClefBass,
	
	ClefCount
};

// Functions for Getting Descriptions
const string GetStrikingString(Striking striking);
const string GetNoteDurationString(NoteDuration noteDuration);
const string GetAccidentalString(Accidental accidental);
const string GetOctaveString(Octave octave);
const string GetNoteLetterString(NoteLetter noteLetter);
const string GetInstrumentString(Instrument instrument);
const string GetRepeatString(Repeat repeat);

#endif // TYPES_H
