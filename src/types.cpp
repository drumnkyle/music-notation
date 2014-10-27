#include "types.h"

// Strings for Printing
const string strikingStrings[StrikingCount] =
{
    "Left",//Left,
    "Right",//Right,
    "Up",//Up,
    "Down",//Down,
};

const string noteDurationStrings[NoteDurationCount] =
{
    "Whole",//Whole,
    "1/2",//Half,
    "1/4",//Quarter,
    "1/8",//Eighth,
    "1/16",//Sixteenth,
    "1/32",//ThirtySecond,
    "1/64",//SixtyFourth,
};

const string accidentalStrings[AccidentalCount] =
{
    "No Accidental",//AccidentalNone,
    "Sharp",//AccidentalSharp,
    "Flat",//AccidentalFlat,
    "Natural",//AccidentalNatural,
};

const string octaveStrings[OctaveCount] =
{
    "Octave 0",//Octave0,
    "Octave 1",//Octave1,
    "Octave 2",//Octave2,
    "Octave 3",//Octave3,
    "Octave 4",//Octave4,
    "Octave 5",//Octave5,
    "Octave 6",//Octave6,
    "Octave 7",//Octave7,
    "Octave 8",//Octave8,
    "Octave 9",//Octave9,
};

const string noteLetterStrings[NoteLetterCount] =
{
    "A",//A
    "B",//B
    "C",//C
    "D",//D
    "E",//E
    "F",//F
    "G",//G
};

const string instrumentStrings[InstrumentCount] =
{
    "6 String Guitar",//Guitar6,
    "7 String Guitar",//Guitar7,
    "4 String Bass",//BassGuitar4,
    "5 String Bass",//BassGuitar5,
    "6 String Bass",//BassGuitar6,
    "Drums",//Drums,
};

const string repeatStrings[RepeatCount] =
{
    "No Repeat",//RepeatNone
    "Repeat Once",//RepeatOnce
    "Infinite Repeat",//RepeateInfinite
    "Repeat Many",//RepeatMany
};

const string GetInstrumentString(Instrument instrument)
{
	if (instrument == InstrumentCount)
	{
		return "";
	}
    return instrumentStrings[instrument];
}

const string GetStrikingString(Striking striking)
{
	if (striking == StrikingCount)
	{
		return "";
	}
    return strikingStrings[striking];
}

const string GetNoteDurationString(NoteDuration noteDuration)
{
	if (noteDuration == NoteDurationCount)
	{
		return "";
	}
    return noteDurationStrings[noteDuration];
}

const string GetAccidentalString(Accidental accidental)
{
	if (accidental == AccidentalCount)
	{
		return "";
	}
    return accidentalStrings[accidental];
}

const string GetOctaveString(Octave octave)
{
	if (octave == OctaveCount)
	{
		return "";
	}
    return octaveStrings[octave];
}

const string GetNoteLetterString(NoteLetter noteLetter)
{
	if (noteLetter == NoteLetterCount)
	{
		return "";
	}
    return noteLetterStrings[noteLetter];
}

const string GetRepeatString(Repeat repeat)
{
	if (repeat == RepeatCount)
	{
		return "";
	}
    return repeatStrings[repeat];
}