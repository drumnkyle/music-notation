#ifndef NOTE_H
#define NOTE_H

#include <string>
#include "types.h"
#include "tone.h"

using namespace std;

class Note
{
public:
	/**
	 Default constructor. Initializers necessary values to defaults.
	 */
	Note();
	/**
	Constructs a note with only the duration.
	 
	 @param noteDuration The duration of the note (whole, half, quarter, etc.)
	*/
    Note(NoteDuration duration);
	/**
	 Constructs a note as being a rest or a note.
	 
	 @param isRest A boolean that defines that the note is a rest, if true.
	 */
    Note(bool isRest);
	/**
	 Constructs a note with a duration and whether it is a rest or not.
	 
	 @param duration The duration of the note
	 @param isRest True if it is rest; false if it is not.
	 */
    Note(NoteDuration duration, bool isRest);
	/**
	 Constructs a note with a duration, whether it is a rest or not, and how it should be struck.
	 
	 @param duration The duration of the note.
	 @param isRest True if it is rest; false if it is not.
	 @param striking How the note should be struck. It depends on the instrument what the
	 options are.
	 */
    Note(NoteDuration duration, bool isRest, Striking striking);
	/**
	 Constructs a note with a duration, whether it is a rest or not, how it should be struck, and 
	 whether the note should be accented or not.
	 
	 @param duration The duration of the note.
	 @param isRest True if it is rest; false if it is not.
	 @param striking How the note should be struck. It depends on the instrument what the
	 options are.
	 @param hasAccent True if the note should be accented; false if it should not.
	 */
    Note(NoteDuration duration, Striking striking, bool hasAccent);
	/**
	 Constructs a note with a duration, whether it is a rest or not, how it should be struck,
	 whether the note should be accented or not, and what tone it should have.
	 
	 @param duration The duration of the note.
	 @param isRest True if it is rest; false if it is not.
	 @param striking How the note should be struck. It depends on the instrument what the
	 options are.
	 @param hasAccent True if the note should be accented; false if it should not.
	 @param tone The tone that note should have.
	 */
    Note(NoteDuration duration, bool isRest, Striking striking, bool hasAccent, Tone tone);
    
    ~Note();
    
    string description();
	
	// Getters //
	bool isRest();
	NoteDuration getDuration();
	bool hasDot();
	bool startOfTie();
	bool endOfTie();
	bool hasAccent();
	bool isStaccato();
	Striking getStriking();
	Tone getTone();
	
private:
    bool m_isRest;
    NoteDuration m_duration;
    bool m_hasDot;
    bool m_tieStart;
    bool m_tieEnd;
    bool m_hasAccent;
    bool m_isStaccato;
    Striking m_striking;
    Tone m_tone;
};

#endif // NOTE_H
