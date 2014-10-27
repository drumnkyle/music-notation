//
//  main.cpp
//  MusicNotationDemo
//
//  Created by Kyle Sherman on 10/26/14.
//  Copyright (c) 2014 Kyle Sherman. All rights reserved.
//

#include <iostream>

#include "tablature_api.h"

int main(int argc, const char * argv[]) {

	Staff staff;
	staff.setInstrument(Guitar6);
	Timing timing(4, 4, 120);
	Measure measure(timing);
	Note note1(Quarter, false, Down, false, {Octave1, C, AccidentalNone});
	Note note2(Quarter, false, Up, false, {Octave1, D, AccidentalNone});
	Note note3(Quarter, false, Down, false, {Octave1, E, AccidentalNone});
	Note note4(Quarter, true);
	measure.addNote(note1);
	measure.addNote(note2);
	measure.addNote(note3);
	measure.addNote(note4);
	staff.addMeasure(measure);
	
	printf("%s", staff.description().c_str());
	
    return 0;
}
