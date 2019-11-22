//
/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 19, 2019
 *      Author: Madeleine Larrieu
 */
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"

 const std::string nationality;
std::vector<std::string>  mySmallTalk;
int iPerson = 0;
int current_phrase;
std::unique_ptr<Watch> pWatch;

Smalltalk::Smalltalk(std::string myNationality, int iPerson) : nationality(myNationality){

	this->iPerson = iPerson;
	current_phrase = 0;
	pWatch = 0;

}

Smalltalk::~Smalltalk(){

}

std::string Smalltalk::saySomething(){
	std::string base = nationality + " " + std::to_string(iPerson) + ":";
	int numberOfPhrases = mySmallTalk.size();
	int phraseNum = current_phrase;
	int currentSpot = phraseNum % numberOfPhrases;
	std::string phrase;
	if(phraseNum == 0){
		phrase = mySmallTalk.at(0);
	}
	else if(currentSpot == 0){
		phrase = mySmallTalk.at(mySmallTalk.size() -1);
	}
	else
		phrase = mySmallTalk.at(currentSpot);

	current_phrase++;
	return base + phrase;
}

std::string Smalltalk::getTime(){
	if(pWatch == 0){
		return I_DO_NOT_HAVE_A_WATCH;
	}
	return pWatch.get()->getTime();

}

std::unique_ptr<Watch> Smalltalk::takeWatch(){
	if(pWatch != 0){
		std::unique_ptr<Watch> twatch = std::move(pWatch);
		pWatch = 0;
		return twatch;
	}
	else{
		return NULL;
	}
	return 0;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &tWatch){
	if(pWatch == 0){
		pWatch = std::move(tWatch);
		return true;
	}

	return false;
}
