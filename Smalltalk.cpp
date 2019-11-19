//
/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 19, 2019
 *      Author: Madeleine Larrieu
 */
#include "./includes/Smalltalk.h"

const std::string nationality;
std::vector<std::string>  mySmalltalk;
int iPerson;
int current_phrase;
std::unique_ptr<Watch> pWatch;

Smalltalk::Smalltalk(std::string myNationality, int iPerson){

	nationality = myNationality;
	this->iPerson = iPerson;
	current_phrase = 0;
	pWatch = 0;

}

std::string saySomething(){
	std::string base = nationality + " " + iPerson + ":";
	for(Smalltalk &st : mySmalltalk){

	}
	return NULL;
}

std::string getTime(){

	return NULL;

}

std::unique_ptr<Watch> takeWatch(){


	return 0;
}

bool giveWatch(std::unique_ptr<Watch> &pWatch){

	return false;
}
