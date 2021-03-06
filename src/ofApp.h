#pragma once

#include "ofMain.h"
#include "ofxWMFVideoPlayer.h"
#include "WindowManager.h"

class ofApp : public ofBaseApp{
	private:
		void setupPrimatives();
		void updatePrimatives();
		void drawPrimatives();
		void keyPressedPrimatives(int key);

	public:
		void setup();
		void update();
		void draw();
		void exit(); 

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		WindowManager winManager; 

		ofxWMFVideoPlayer video0, video1;
		float xPos;
		float yPos;

		// Shaders Example
		ofShader shader0, shader1;	//Shader
		ofFbo fbo0, fbo1;			//Buffer for intermediate drawing
		ofImage image;		//Sunflower image

		// 3d Primatives Example

		bool bFill;
		bool bWireframe;
		bool bDrawNormals;
		bool bDrawAxes;
		bool bDrawLights;
		bool bInfoText;
		bool bMousePressed;
		bool bSplitFaces;
    

		ofImage texture;
		//ofVideoGrabber vidGrabber;
		int mode;
    
		ofSpherePrimitive sphere;
		ofIcoSpherePrimitive icoSphere;
		ofPlanePrimitive plane;
		ofCylinderPrimitive cylinder;
		ofConePrimitive cone;
		ofBoxPrimitive box;
    
		ofLight pointLight;
		ofLight pointLight2;
		ofLight pointLight3;
		ofMaterial material;
    
		// place to store the sides of the box //
		ofVboMesh boxSides[ofBoxPrimitive::SIDES_TOTAL];
		ofVboMesh deformPlane;
		ofVboMesh topCap, bottomCap, body;
		vector<ofMeshFace> triangles;
		
};
