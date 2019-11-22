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
	//Smalltalk::nationality = AMERICAN;
//	Smalltalk::Smalltalk(constants::AMERICAN, iPerson);
	this->populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson):Smalltalk(myNationality, iPerson){

}

Smalltalk_American::~Smalltalk_American(){

}

void Smalltalk_American::populatePhrases(){

	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_5);
}
