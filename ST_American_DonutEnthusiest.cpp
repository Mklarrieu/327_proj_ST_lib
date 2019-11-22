//
/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Nov 19, 2019
 *      Author: Madeleine Larrieu
 */
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i):Smalltalk_American(AMERICAN_DE, i){

	this->populatePhrases();
}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(){

}
void ST_American_DonutEnthusiest::populatePhrases(){

	Smalltalk_American::populatePhrases();
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}
