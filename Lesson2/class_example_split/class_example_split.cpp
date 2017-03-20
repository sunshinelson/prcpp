/*
 * class_example_split.cpp
 *
 *  Created on: 20.03.2017
 *      Author: Davina
 */

#include "class_example_split.h"

int String::size() {
	return m_length;
}

void String::putChar(char c){
  if (m_length < m_capacity){
    m_contents[m_length++] = c;
  }
}

