#include "timing.h"
#include <sstream>
#include <iostream>

Timing::Timing() :
    m_topNumber(0),
    m_bottomNumber(0),
    m_tempo(0)
{
}

Timing::Timing(Timing& timing)
{
    this->m_topNumber = timing.m_topNumber;
    this->m_bottomNumber = timing.m_bottomNumber;
    this->m_tempo = timing.m_tempo;
}

Timing::Timing(UInt topNumber, UInt bottomNumber, UInt tempo) :
    m_topNumber(topNumber),
    m_bottomNumber(bottomNumber),
    m_tempo(tempo)
{
}

Timing::Timing(UInt topNumber, UInt bottomNumber) :
    m_topNumber(topNumber),
    m_bottomNumber(bottomNumber),
    m_tempo(0)
{
}

Timing::Timing(UInt tempo) :
    m_topNumber(0),
    m_bottomNumber(0),
    m_tempo(tempo)
{
}

Timing::~Timing()
{
    
}

string Timing::description()
{
    stringstream output;
    output << "Signature: " << m_topNumber << "/" << m_bottomNumber << endl;
    output << "Tempo: " << m_tempo << " bpm";
    
    return output.str();
}

bool Timing::operator==(Timing timing)
{
    bool isEqual = true;
    if (m_topNumber != timing.m_topNumber)
        isEqual = false;
    else if (m_bottomNumber != timing.m_bottomNumber)
        isEqual = false;
    else if (m_tempo != timing.m_tempo)
        isEqual = false;
    
    return isEqual;
}

bool Timing::operator!=(Timing timing)
{
    return !(*this == timing);
}

void Timing::setTopNumber(UInt topNumber)
{
    m_topNumber = topNumber;
}

void Timing::setBottomNumber(UInt bottomNumber)
{
    m_bottomNumber = bottomNumber;
}

void Timing::setTempo(UInt tempo)
{
    m_tempo = tempo;
}

UInt Timing::getTopNumber()
{
    return m_topNumber;
}

UInt Timing::getBottomNumber()
{
    return m_bottomNumber;
}

UInt Timing::getTempo()
{
    return m_tempo;
}