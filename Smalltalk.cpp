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

	this->iPerson = iPerson;
	current_phrase = 0;
	pWatch = 0;

}

Smalltalk::~Smalltalk(){

}

std::string saySomething(){
//	std::string base = nationality + " " + iPerson + ":";
	return "";
}

std::string getTime(){
	return pWatch.get()->getTime();

}

std::unique_ptr<Watch> takeWatch(){
//	if(pWatch != 0){
//		std::unique_ptr<Watch> twatch = std::move(pWatch);
//		pWatch = 0;
//		return twatch;
//	}
//	else{
//	return pWatch;
//	}
	return 0;
}

bool giveWatch(std::unique_ptr<Watch> &tWatch){
	if(pWatch == 0){
		pWatch = std::move(tWatch);
		return true;
	}

	return false;
}
