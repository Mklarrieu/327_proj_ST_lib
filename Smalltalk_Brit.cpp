//
/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 19, 2019
 *      Author: Madeleine Larrieu
 */
#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"

//const std::string Smalltalk::nationality = BRIT;

Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT, iPerson){
	this->populatePhrases();
	//malltalk::nationality = "BRIT";
}

Smalltalk_Brit::~Smalltalk_Brit(){

}

void Smalltalk_Brit::populatePhrases(){

	Smalltalk::mySmallTalk.push_back(BRIT_1);
	Smalltalk::mySmallTalk.push_back(BRIT_2);
	Smalltalk::mySmallTalk.push_back(BRIT_3);
	Smalltalk::mySmallTalk.push_back(BRIT_4);
	Smalltalk::mySmallTalk.push_back(BRIT_5);
	Smalltalk::mySmallTalk.push_back(BRIT_6);
	Smalltalk::mySmallTalk.push_back(BRIT_7);

}
