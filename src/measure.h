#ifndef MEASURE_H
#define MEASURE_H

#include "types.h"
#include "timing.h"
#include "note.h"
#include <string>
#include <vector>

using namespace std;

class Measure
{
public:
    Measure();
    Measure(const Measure& measure);
    Measure(UInt index, Timing timing);
    Measure(UInt index, Repeat repeatMode);
    
    ~Measure();
	
	/**
	 Make this measure a repeat of the previous measure.
	 */
    bool makeRepeatOfPrev();
	/**
	 Add the given note to the measure.
	 
	 @param note The note to add to the measure.
	 */
    bool addNote(Note note);
	/**
	 Remove the given note from the measure.
	 
	 @param note The note to remove from the measure.
	 */
    bool removeNote(Note note);
	/**
	 Remove the note at the given index in the measure.
	 
	 @param index The index at which the note exists in the measure that should be removed.
	 */
    bool removeNote(UInt index);
	/**
	 The timing associated with the measure.
	 */
    Timing* getTiming();

    string description();
	
	/**
	 Get the index within the staff that this measure is located.
	 
	 @return The value of the current index.
	 */
	UInt getIndex();
	
	/**
	 Set the index within the staff that this measure is located.
	 
	 @param index The index to set.
	 */
	void setIndex(UInt index);
    
private:
    UInt m_index;
    UInt m_currentRepeat;
    UInt m_repeatCount;
    Repeat m_repeatMode;
    Measure* m_repeatMeasure;
    vector<Note> m_notes;
    bool m_isComplete;
    Timing m_timing;
};

/* Explanation of Repeats:
Case 1: Want a measure to repeat indefinitely.
    -Just set m_repeatInfinite.
Case 2: Want a measure to repeat once.
    -Just set m_repeatOnce.
Case 3: Want a repeat a measure multiple times.
    -Set m_repeatCount, m_repeatMeasure, and m_currentRepeat
    -When playing and you encounter a repeat with m_repeatCount greater than 0 (initialzied), you keep playing m_repeatMeasure and increasing m_currentRepeat each time you play it. Once m_currentRepeat is no longer less than m_repeatCount, move to the next measure.
*/

#endif // MEASURE_H
