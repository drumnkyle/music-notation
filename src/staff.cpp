#include "staff.h"
#include "measure.h"
#include <sstream>

typedef list<Measure>::iterator MeasureIterator;

Staff::Staff() :
    m_instrument(InstrumentCount),
	m_clef(ClefTreble)
{
}

Staff::Staff(Clef clef, Instrument instrument) : m_instrument(instrument), m_clef(clef)
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

bool Staff::removeMeasure(UInt index)
{
	MeasureIterator it = m_measures.begin();
	advance(it, index);
	if (it == m_measures.end())
	{
		return false;
	}
	m_measures.erase(it);
	return true;
}

bool Staff::insertMeasureAtIndex(UInt index, Measure newMeasure)
{
	MeasureIterator it = m_measures.begin();
	advance(it, index);
	if (it == m_measures.end())
	{
		return false;
	}
	m_measures.insert(it, newMeasure);
	return true;
}

Clef Staff::getClef() const
{
	return m_clef;
}

Instrument Staff::getInstrument() const
{
	return m_instrument;
}

string Staff::description()
{
    stringstream output;
    Timing *timing = new Timing();
    
    // Print out description for every measure
	for (MeasureIterator it = m_measures.begin(); it != m_measures.end(); ++it)
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