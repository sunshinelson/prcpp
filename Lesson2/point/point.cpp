/*
 * point.cpp
 *
 *  Created on: 20.03.2017
 *      Author: Davina
 */

#include "point.h"

  int Punkt::c_instanceCount = 0;    // Initialisierung des Klassenattributs

  Punkt::Punkt(){
    // alte Form der Initialisierung. Benutzen Sie stattdessen Initialisierungslisten,
    // wie Sie es bei den anderen beiden Konstruktoren sehen k�nnen.
    m_x = m_y = m_z = 0.0;
    m_color = 0xFFFFFFFF;
    ++c_instanceCount;
  }

  Punkt::Punkt(const Punkt& p) : m_x(p.m_x), m_y(p.m_y), m_z(p.m_z), m_color(p.m_color){
    ++c_instanceCount;
  }

  Punkt::Punkt(double x, double y, double z, int color) : m_x(x), m_y(y), m_z(z), m_color(color){
    ++c_instanceCount;
  }

  Punkt::~Punkt(){      // Destruktor. Hier nur f�r die Anpassung des Inszanzen-Z�hlers
    --c_instanceCount;
  }

  int Punkt::getColor(){
    return m_color;
  }

  int Punkt::getCount(){
    return c_instanceCount;
  }


