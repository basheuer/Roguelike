#pragma once
//#include <windows.h>
#include <iostream>
#include "character.h"
#include "Position.h"
#include "Level.h"
using namespace std;


class CheckInput
{
	public:
		static CheckInput& Instance(){
			static CheckInput mInstance;
			return mInstance;
		}
		bool gameloop;
		bool arrowcontrols;
		string input;
		int key_code;
		Position startPosition;
		Level level;
		Level lvl;
		void ChecksInput(Level& lvl);
		void CheckingInput();
		~CheckInput();

		void CheckInput::Walk(int direction);
		void SetStartPosition(Position value);
private:
	CheckInput(){}
	CheckInput(CheckInput const&);
	void operator=(CheckInput const&);
};

