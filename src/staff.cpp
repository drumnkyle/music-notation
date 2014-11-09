#include "staff.h"
#include "measure.h"
#include <sstream>

Staff::Staff() :
    m_instrument(InstrumentCount)
{
}

Staff::Staff(Instrument instrument) : m_instrument(instrument)
{
}

void Staff::setInstrument(Instrument instrument)
{
    m_instrument = instrument;
}

Staff::~Staff()
{
    
}

void Staff::addMeasure(Measure newMeasure)
{
    m_measures.push_back(newMeasure);
}

string Staff::description()
{
    stringstream output;
    Timing *timing = new Timing();
    
    // Print out description for every measure
	for (list<Measure>::iterator it = m_measures.begin(); it != m_measures.end(); ++it)
	{
		Measure& measure = *it;
		output << "**Measure " << measure.getIndex() << "**" << endl;
		if (*timing != *measure.getTiming())
		{
			// Add timing to output
			timing = measure.getTiming();
			output << timing->description() << endl;
		}
		output << measure.description() << endl;
	}
    return output.str();
}