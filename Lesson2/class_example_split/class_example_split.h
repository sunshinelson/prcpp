/*
 * class_example_split.h
 *
 *  Created on: 20.03.2017
 *      Author: Davina
 */

#ifndef CLASS_EXAMPLE_SPLIT_H_
#define CLASS_EXAMPLE_SPLIT_H_
#endif /* CLASS_EXAMPLE_SPLIT_H_ */

class String{
    char* m_contents;                 // per default private
    int m_capacity;
    int m_length;
  public:
    int size();
    void putChar(char c);
};
