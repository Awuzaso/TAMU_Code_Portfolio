#include "../vectorFiles/vector.h"
#include <iostream>
#ifndef CAM_CLASS
#define CAM_CLASS
using namespace std;
class Camera
{
	private:
	Vector3d pe,vView,vUp;
	Vector3d n2,n0,n1;
	Vector3d pc,p00;

	double d;
	double xMax;
	double yMax;
	double sX;
	double sY;
	public:
	Camera();//Normal constructor.
	Camera(Vector3d pt,Vector3d vV,Vector3d vU,double dd, double x, double y, double sx);//Default constructor.	

	~Camera();//Noisy destructor.
	void cameraTrack(Vector3d lookAt);
	//void test(){cout<< "This is working." << endl;};
	//void setEyePosition(Vector3d pos);
	//void setCameraDir(Vector3d view,Vector3d upVec);
	//void setCamAttr(float depth,float xmax,float ymax, float scaleX);
	Vector3d getPP(float px,float py);
	Vector3d getNpe(float px,float py);
	Vector3d getNpePaint(Vector3d cVal);
	Vector3d getPe();
	float get_d(){return d;};
	Vector3d get_n0(){
		return n0;	
	};
	Vector3d get_n1(){
		return n1;	
	};
	Vector3d get_n2(){
		return n2;	
	};



};
#endif
