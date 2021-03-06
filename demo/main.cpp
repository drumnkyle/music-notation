//
//  main.cpp
//  MusicNotationDemo
//
//  Created by Kyle Sherman on 10/26/14.
//  Copyright (c) 2014 Kyle Sherman. All rights reserved.
//

#include <iostream>

#include "../src/music_notation_api.h"

using namespace std;

int main(int argc, const char * argv[]) {

	Staff staff;
	staff.setInstrument(Guitar6);
	Timing timing(4, 4, 120);
	Measure measure(0, timing);
	Tone tone1 = {Octave1, C, AccidentalNone};
	Tone tone2 = {Octave1, D, AccidentalNone};
	Tone tone3 = {Octave1, E, AccidentalNone};
	Note note1(Quarter, false, Down, false, tone1);
	Note note2(Quarter, false, Up, false, tone2);
	Note note3(Quarter, false, Down, false, tone3);
	Note note4(Quarter, true);
	measure.addNote(note1);
	measure.addNote(note2);
	measure.addNote(note3);
	measure.addNote(note4);
	staff.addMeasure(measure);
	
	Measure measure2(measure);
	measure2.setIndex(1);
	measure2.removeNote(note1);
	Tone tone5 = {Octave2, A, AccidentalSharp};
	Note note5(Quarter, false, Down, false, tone5);
	if (!measure2.insertNote(0, note5))
	{
		cout << "Inserting note failed" << endl;
	}
	staff.addMeasure(measure2);
	
	printf("%s", staff.description().c_str());
	
    return 0;
}
