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
    for (int i = 0; i < m_measures.size(); i++)
    {
        Measure& measure = m_measures.at(i);
        output << "**Measure " << i+1 << "**" << endl;
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