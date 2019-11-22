//
/*
 * Functions.cpp
 *
 *  Created on: Nov 19, 2019
 *      Author: Madeleine Larrieu
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {
	
	//create a vector to hold SmallTalk unique pointers

	std::vector<std::unique_ptr<Smalltalk>> st;
		//add brits to vector
	int numPerson = 1;
//	std::unique_ptr<Smalltalk> ptr(new Smalltalk_Brit(numPerson));
	//st.emplace_back(new Smalltalk_Brit(numPerson));
//	int numPerson = 1;
	for(int i = 0; i < numBrit; i++){
		st.emplace_back(new Smalltalk_Brit(numPerson));
		numPerson++;
	}

	numPerson = 1;
		//add americans  to vector
	for(int i = 0; i < numAmerican; i++){
			st.emplace_back(new Smalltalk_American(numPerson));
			numPerson++;
		}
	numPerson = 1;

		//add american donut enthusiest  to vector
	for(int i = 0; i < numbAmericanDonutEnthusiest; i++){
		st.emplace_back(new ST_American_DonutEnthusiest(numPerson));
			numPerson++;
		}

		//create some watches (as long as number watches <= numb people)
		//then give the watches away to first NUM_WATCHES people in the vector
		// when you are finished using the vector you return
		//from this function(see Smalltalk header for hints)
	int totalPeople = numBrit + numbAmericanDonutEnthusiest + numAmerican;
	if(numWatches <= totalPeople){
		int watchesGiven = 0;
		for(int i = 0; i < numWatches; i++){
			std::unique_ptr<Watch> w = std::unique_ptr<Watch>(new Watch());
			st.at(i)->giveWatch(w);
		}
	}
		//return your vector
	return st;
}
