//
/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 19, 2019
 *      Author: Madeleine Larrieu
 */
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN, iPerson){
//	Smalltalk::Smalltalk(constants::AMERICAN, iPerson);
}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson):Smalltalk(myNationality, iPerson){

}

Smalltalk_American::~Smalltalk_American(){

}

void populatePhrases(){

}
