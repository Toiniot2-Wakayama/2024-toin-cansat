#pragma once

#include "ofTrueTypeFont.h"
#include "ofSerial.h"

#include "ofMain.h"
#include "hoge.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		

		//
		std::string characters[11][5] = {
		  { "あ", "い", "う", "え", "お" },
		  { "か", "き", "く", "け", "こ" },
		  { "さ", "し", "す", "せ", "そ" },
		  { "た", "ち", "つ", "て", "と" },
		  { "な", "に", "ぬ", "ね", "の" },
		  { "は", "ひ", "ふ", "へ", "ほ" },
		  { "ま", "み", "む", "め", "も" },
		  { "や", "ゐ", "ゆ", "ゑ", "よ" },
		  { "ら", "り", "る", "れ", "ろ" },
		  { "わ", "　", "を", "　", "ん" },
		  { "゛", "゜", "space", "backspace", "send" }
		};
		
		ofSerial serial;
		std::string serial_received = "";
	std::string status_str{};
		string device_name{};

		struct XYcoordinate {
			uint8_t x = 0, y = 0;
		};
		XYcoordinate coordinate;

		ofTrueTypeFont font;
		const int FONT_SIZE = 16;

		bool button[5] = {};
		bool previous_button[5] = {};
};
