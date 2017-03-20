/*
 * class_example_compact.cpp
 *
 *  Created on: 20.03.2017
 *      Author: Davina
 */

class String{
    char* m_contents;                 // per default private
    int m_capacity;
    int m_length;

  public:

    int size() {return m_length;}

    void putChar(char c){
    	if (m_length < m_capacity){
    		m_contents[m_length++] = c;
    	}
    }

};


