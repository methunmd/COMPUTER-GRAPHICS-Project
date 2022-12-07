#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>  // for MS Windows
#include<math.h>>
# define PI  3.14159265358979323846

GLfloat position_plane = 0.0f;
GLfloat position_cloud = 0.0f;
GLfloat position_train = 0.0f;
GLfloat position_car = 0.0f;
GLfloat position_boat = 0.0f;
GLfloat position_Boat = 0.0f;
GLfloat position_Boat1 = 0.0f;
GLfloat position_waves = 3.0f;
GLfloat speed_plane = 3.0f;
GLfloat speed_cloud = 1.0f;
GLfloat speed_train = 1.5f;
GLfloat speed_car = 2.5f;
GLfloat speed_boat = 1.5f;
GLfloat speed_Boat = 2.0f;
GLfloat speed_Boat1 = 2.0f;
GLfloat speed_waves = 0.1f;


int frameNumber = 0;
void bridge()             //m1941

{
   glBegin(GL_POLYGON);//pillar-1
glColor3ub( 128, 139, 150 );

glVertex2f(-65,30);
glVertex2f(-65,-25);
glVertex2f(-55,-25);
glVertex2f(-55,30);

glEnd();

glBegin(GL_POLYGON);//pillar-2
glColor3ub( 128, 139, 150 );

glVertex2f(-20,-25);
glVertex2f(-10,-25);
glVertex2f(-10,30);
glVertex2f(-20,30);

glEnd();

glBegin(GL_POLYGON);//pillar-3
glColor3ub( 128, 139, 150 );

glVertex2f(25,-25);
glVertex2f(35,-25);
glVertex2f(35,30);
glVertex2f(25,30);

glEnd();
glBegin(GL_POLYGON);//pillar-4
glColor3ub( 128, 139, 150 );

glVertex2f(65,-25);
glVertex2f(75,-25);
glVertex2f(75,30);
glVertex2f(65,30);
glEnd();



glBegin(GL_POLYGON);//train line
glColor3ub( 128, 139, 150 );

glVertex2f(-95,35);
glVertex2f(-95,30);
glVertex2f(100,30);
glVertex2f(100,35);

glEnd();


glBegin(GL_POLYGON);//road line
glColor3ub( 128, 139, 150 );

glVertex2f(-95,75);
glVertex2f(-95,70);
glVertex2f(100,70);
glVertex2f(100,75);

glEnd();

glBegin(GL_LINES);// bam tar 1
glColor3ub(  128, 139, 150 );

glVertex2f(-85,70);
glVertex2f(-65,35);

glEnd();

glBegin(GL_LINES);// bam tar 2
glColor3ub(  128, 139, 150 );

glVertex2f(-65,35);
glVertex2f(-45,70);

glEnd();


glBegin(GL_LINES);// bam tar 3
glColor3ub(  128, 139, 150 );

glVertex2f(-45,70);
glVertex2f(-25,35);
glEnd();

glBegin(GL_LINES);// bam tar 4
glColor3ub(  128, 139, 150 );

glVertex2f(-25,35);
glVertex2f(0,70);

glEnd();

glBegin(GL_LINES);// bam tar 5
glColor3ub(  128, 139, 150 );

glVertex2f(0,70);
glVertex2f(25,35);

glEnd();


glBegin(GL_LINES);// bam tar 6
glColor3ub(  128, 139, 150 );

glVertex2f(25,35);
glVertex2f(50,70);

glEnd();

glBegin(GL_LINES);// bam tar 7
glColor3ub(  128, 139, 150 );

glVertex2f(50,70);
glVertex2f(70,35);

glEnd();


glBegin(GL_LINES);// bam tar 8
glColor3ub(  128, 139, 150 );

glVertex2f(70,35);
glVertex2f(90,70);
glEnd();
}

void soil()      //t1942
{


glBegin(GL_LINES);// soil
glColor3ub(  147, 81, 22 );

glVertex2f(-95,-25);
glVertex2f(100,-25);
glEnd();

}
void water()       //f1943
{

glBegin(GL_POLYGON);//water
glColor3ub( 30,144,255);

glVertex2f(-95,-25);
glVertex2f(-95,-150);
glVertex2f(100,-150);
glVertex2f(100,-25);
glEnd();
}

void water1()    //f1944
{

glBegin(GL_POLYGON);//water1
glColor3ub(0,76,105);

glVertex2f(-95,-25);
glVertex2f(-95,-150);
glVertex2f(100,-150);
glVertex2f(100,-25);
glEnd();
}

void water2()   //f1945
{

glBegin(GL_POLYGON);//water2
glColor3ub( 93, 173, 226);

glVertex2f(-95,-25);
glVertex2f(-95,-150);
glVertex2f(100,-150);
glVertex2f(100,-25);
glEnd();
}


void widewater()     //f1946
{
glBegin(GL_POLYGON);
glColor3ub(93, 173, 226);

glVertex2f(-95,-10);
glVertex2f(-95,-130);
glVertex2f(100,-130);
glVertex2f(100,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-95,-25);
glVertex2f(-90,-25);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-85,-10);
glVertex2f(-80,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-75,-25);
glVertex2f(-70,-25);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-65,-10);
glVertex2f(-60,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-55,-25);
glVertex2f(-50,-25);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-45,-10);
glVertex2f(-40,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-35,-25);
glVertex2f(-30,-25);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-25,-10);
glVertex2f(-20,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-15,-25);
glVertex2f(-10,-25);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-5,-10);
glVertex2f(0,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(5,-25);
glVertex2f(10,-25);
glEnd();


glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(15,-10);
glVertex2f(20,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(25,-25);
glVertex2f(30,-25);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(35,-10);
glVertex2f(40,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(45,-25);
glVertex2f(50,-25);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(55,-10);
glVertex2f(60,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(65,-25);
glVertex2f(70,-25);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(75,-10);
glVertex2f(80,-10);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(85,-25);
glVertex2f(90,-25);
glEnd();


glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(95,-10);
glVertex2f(100,-10);
glEnd();
}


void waves()  //f1947
{
    glPushMatrix();
glTranslatef(position_car,0.0,0.0);
    GLfloat w=0.0;
for(int i=0;i<2;i++)
    {

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-95,-35);
glVertex2f(-90,-35);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-85,-30);
glVertex2f(-80,-30);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-75,-35);
glVertex2f(-70,-35);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-65,-30);
glVertex2f(-60,-30);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-55,-35);
glVertex2f(-50,-35);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-45,-30);
glVertex2f(-40,-30);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-35,-35);
glVertex2f(-30,-35);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-25,-30);
glVertex2f(-20,-30);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-15,-35);
glVertex2f(-10,-35);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(-5,-30);
glVertex2f(0,-30);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(5,-35);
glVertex2f(10,-35);
glEnd();


glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(15,-30);
glVertex2f(20,-30);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(25,-35);
glVertex2f(30,-35);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(35,-30);
glVertex2f(40,-30);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(45,-35);
glVertex2f(50,-35);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(55,-30);
glVertex2f(60,-30);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(65,-35);
glVertex2f(70,-35);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(75,-30);
glVertex2f(80,-30);
glEnd();

glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(85,-35);
glVertex2f(90,-35);
glEnd();


glBegin(GL_LINES);//waves
glColor3ub( 0,255,255 );

glVertex2f(95,-30);
glVertex2f(100,-30);
glEnd();


glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(-85,-45);
glVertex2f(-75,-45);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(-70,-50);
glVertex2f(-60,-50);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(-55,-45);
glVertex2f(-45,-45);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(-40,-50);
glVertex2f(-30,-50);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(-25,-45);
glVertex2f(-15,-45);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(-10,-50);
glVertex2f(0,-50);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(5,-45);
glVertex2f(15,-45);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(20,-50);
glVertex2f(30,-50);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(35,-45);
glVertex2f(45,-45);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(50,-50);
glVertex2f(60,-50);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(65,-45);
glVertex2f(75,-45);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(80,-50);
glVertex2f(90,-50);
glEnd();

glBegin(GL_LINES);//L2
glColor3ub( 0,255,255 );

glVertex2f(95,-45);
glVertex2f(105,-45);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(-105,-60);
glVertex2f(-90,-60);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(-85,-65);
glVertex2f(-70,-65);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(-65,-60);
glVertex2f(-50,-60);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(-45,-65);
glVertex2f(-30,-65);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(-25,-60);
glVertex2f(-10,-60);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(-5,-65);
glVertex2f(10,-65);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(15,-60);
glVertex2f(30,-60);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(35,-65);
glVertex2f(50,-65);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(55,-60);
glVertex2f(70,-60);
glEnd();

glBegin(GL_LINES);//L3
glColor3ub( 0,255,255 );

glVertex2f(75,-65);
glVertex2f(90,-65);
glEnd();

glBegin(GL_LINES);//L4
glColor3ub( 0,255,255 );

glVertex2f(-95,-75);
glVertex2f(-75,-75);
glEnd();

glBegin(GL_LINES);//L4
glColor3ub( 0,255,255 );

glVertex2f(-65,-85);
glVertex2f(-45,-85);
glEnd();

glBegin(GL_LINES);//L4
glColor3ub( 0,255,255 );

glVertex2f(-35,-75);
glVertex2f(-15,-75);
glEnd();

glBegin(GL_LINES);//L4
glColor3ub( 0,255,255 );

glVertex2f(-5,-85);
glVertex2f(15,-85);
glEnd();

glBegin(GL_LINES);//L4
glColor3ub( 0,255,255 );

glVertex2f(25,-75);
glVertex2f(45,-75);
glEnd();

glBegin(GL_LINES);//L4
glColor3ub( 0,255,255 );

glVertex2f(55,-85);
glVertex2f(75,-85);
glEnd();

glBegin(GL_LINES);//L4
glColor3ub( 0,255,255 );

glVertex2f(85,-75);
glVertex2f(105,-75);
glEnd();

glBegin(GL_LINES);//L5
glColor3ub( 0,255,255 );

glVertex2f(-70,-110);
glVertex2f(-45,-110);
glEnd();

glBegin(GL_LINES);//L5
glColor3ub( 0,255,255 );

glVertex2f(-35,-100);
glVertex2f(-10,-100);
glEnd();

glBegin(GL_LINES);//L5
glColor3ub( 0,255,255 );

glVertex2f(0,-110);
glVertex2f(25,-110);
glEnd();

glBegin(GL_LINES);//L5
glColor3ub( 0,255,255 );

glVertex2f(35,-100);
glVertex2f(60,-100);
glEnd();

glBegin(GL_LINES);//L5
glColor3ub( 0,255,255 );

glVertex2f(70,-110);
glVertex2f(95,-110);
glEnd();

glBegin(GL_LINES);//L6
glColor3ub( 0,255,255 );

glVertex2f(25,-120);
glVertex2f(50,-120);
glEnd();

glBegin(GL_LINES);//L5
glColor3ub( 0,255,255 );

glVertex2f(60,-130);
glVertex2f(85,-130);
glEnd();
glPopMatrix();
}
}


void grass()    //f1948
{
glBegin(GL_POLYGON);//grass
glColor3ub(  40, 180, 99 );

glVertex2f(-95,-90);
glVertex2f(-95,-150);
glVertex2f(30,-150);

glEnd();
}



void hill()       //f1949
{
     glBegin(GL_POLYGON);//hill 1
glColor3ub(  40, 180, 99 ); //green

glVertex2f(-95,-24);
glVertex2f(-95,0);
glVertex2f(-90,25);
glVertex2f(-85,-24);
glEnd();


glBegin(GL_POLYGON);//hill 1
glColor3ub(  40, 180, 99 ); //green

glVertex2f(-91,-24);
glVertex2f(-82,20);
glVertex2f(-75,-24);
glEnd();


glBegin(GL_POLYGON);//hill 1
glColor3ub(  40, 180, 99 ); //green

glVertex2f(-82,-24);
glVertex2f(-70,28);
glVertex2f(-65,0);
glVertex2f(-65,-24);
glEnd();


glBegin(GL_POLYGON);//hill 2
glColor3ub(  40, 180, 99 ); //green

glVertex2f(-55,-24);
glVertex2f(-55,0);
glVertex2f(-50,20);
glVertex2f(-40,-24);
glEnd();


glBegin(GL_POLYGON);//hill 2
glColor3ub(  40, 180, 99 ); //green

glVertex2f(-50,-24);
glVertex2f(-40,28);
glVertex2f(-29,-24);
glEnd();

glBegin(GL_POLYGON);//hill 2
glColor3ub(  40, 180, 99 ); //green

glVertex2f(-37,-24);
glVertex2f(-30,15);
glVertex2f(-25,-24);
glEnd();

glBegin(GL_POLYGON);//hill 2
glColor3ub(  40, 180, 99 ); //green

glVertex2f(-30,-24);
glVertex2f(-23,5);
glVertex2f(-20,-10);
glVertex2f(-20,-24);
glEnd();


glBegin(GL_POLYGON);//hill 3
glColor3ub(  40, 180, 99 ); //green

glVertex2f(-10,-24);
glVertex2f(-10,-10);
glVertex2f(-0,27);
glVertex2f(10,-24);
glEnd();


glBegin(GL_POLYGON);//hill 3
glColor3ub(  40, 180, 99 ); //green

glVertex2f(0,-24);
glVertex2f(12,20);
glVertex2f(18,-24);
glEnd();

glBegin(GL_POLYGON);//hill 3
glColor3ub(  40, 180, 99 ); //green

glVertex2f(12,-24);
glVertex2f(19,25);
glVertex2f(23,-24);
glEnd();


glBegin(GL_POLYGON);//hill 3
glColor3ub(  40, 180, 99 ); //green

glVertex2f(18,-24);
glVertex2f(22,10);
glVertex2f(25,-5);
glVertex2f(25,-24);
glEnd();
}

void tree()   // a1950
{

	glBegin(GL_POLYGON);
	glColor3ub(  40, 180, 99 ); //green
glVertex2f(87,29);//t1
glVertex2f(83,25);
glVertex2f(91,25);

glEnd();


		glBegin(GL_POLYGON);
	glColor3ub(  40, 180, 99 ); //green
glVertex2f(87,24);//t2
glVertex2f(82,21);
glVertex2f(92,21);

glEnd();

glBegin(GL_POLYGON);
	glColor3ub(  40, 180, 99 ); //green
glVertex2f(87,27);//t3
glVertex2f(81,19);
glVertex2f(94,19);

glEnd();

glBegin(GL_POLYGON);
	glColor3ub(  40, 180, 99 ); //green
glVertex2f(87,20);//t4
glVertex2f(79,17);
glVertex2f(96,17);

glEnd();

glBegin(GL_POLYGON);
	glColor3ub(  40, 180, 99 ); //green
glVertex2f(87,17);//t5
glVertex2f(76,13);
glVertex2f(99,13);

glEnd();

glBegin(GL_POLYGON);
	glColor3ub( 230,163,47 );
glVertex2f(86,13);//t6
glVertex2f(86,-24);
glVertex2f(88,-24);
glVertex2f(88,13);
glEnd();

    glBegin(GL_POLYGON);
	glColor3ub( 40, 180, 99  );//green

glVertex2f(75,-10);
glVertex2f(75,-24);
glVertex2f(100,-24);
glVertex2f(100,-10);
glEnd();
}

void house()  //m1951
{
   glBegin(GL_POLYGON);//Hb1
glColor3ub( 204,0,0 );

glVertex2f(35,5);
glVertex2f(40,10);
glVertex2f(45,5);

glEnd();

   glBegin(GL_POLYGON);//Hb2
glColor3ub( 204,102,0 );

glVertex2f(40,10);
glVertex2f(50,10);
glVertex2f(55,5);
glVertex2f(45,5);
glEnd();

 glBegin(GL_POLYGON);//Hb3
glColor3ub( 236,116,35 );

glVertex2f(35,5);
glVertex2f(35,-9);
glVertex2f(45,-9);
glVertex2f(45,5);
glEnd();


glBegin(GL_POLYGON);//Hb4
glColor3ub( 236,20,35 );

glVertex2f(45,5);
glVertex2f(45,-9);
glVertex2f(55,-9);
glVertex2f(55,5);

glEnd();

glBegin(GL_POLYGON);//Hb5
glColor3ub( 0,0,0 );

glVertex2f(48,-2);
glVertex2f(48,-9);
glVertex2f(51,-9);
glVertex2f(51,-2);

glEnd();

glBegin(GL_POLYGON);//Hb6
glColor3ub( 0,0,0 );

glVertex2f(38,-1);
glVertex2f(38,-5);
glVertex2f(41,-5);
glVertex2f(41,-1);

glEnd();

glBegin(GL_POLYGON);//Hb7
glColor3ub( 204,102,0 );

glVertex2f(50,5);
glVertex2f(55,10);
glVertex2f(60,5);

glEnd();

glBegin(GL_POLYGON);//Hb7
glColor3ub( 176,28,192 );

glVertex2f(60,5);
glVertex2f(65,5);
glVertex2f(65,10);
glVertex2f(55,10);
glEnd();

glBegin(GL_POLYGON);//Hb8
glColor3ub( 189,164,41 );

glVertex2f(55,5);
glVertex2f(55,-9);
glVertex2f(60,-9);
glVertex2f(60,5);
glEnd();

glBegin(GL_POLYGON);//Hb9
glColor3ub( 232,35,61 );

glVertex2f(60,5);
glVertex2f(60,-9);
glVertex2f(65,-9);
glVertex2f(65,5);
glEnd();

glBegin(GL_POLYGON);//Hb10
glColor3ub( 0,0,0 );

glVertex2f(56,-1);
glVertex2f(56,-5);
glVertex2f(59,-5);
glVertex2f(59,-1);
glEnd();

glBegin(GL_POLYGON);//Hb11
glColor3ub( 0,0,0 );

glVertex2f(61,-1);
glVertex2f(61,-9);
glVertex2f(64,-9);
glVertex2f(64,-1);
glEnd();

glBegin(GL_POLYGON);//Hb12
glColor3ub( 41,175,63 );

glVertex2f(35,-9);
glVertex2f(35,-24);
glVertex2f(65,-24);
glVertex2f(65,-9);
glEnd();
}

void roadlight()  //a1952
{
  glBegin(GL_POLYGON);//L1
glColor3ub( 230,160,19 );

glVertex2f(-75,75);
glVertex2f(-73,75);
glVertex2f(-73,100);
glVertex2f(-75,100);
glEnd();

 glBegin(GL_POLYGON);//L2
glColor3ub( 230,160,19 );

glVertex2f(-75,100);
glVertex2f(-75,98);
glVertex2f(-65,98);
glVertex2f(-65,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 255,231,10 );

glVertex2f(-65,100);
glVertex2f(-65,95);
glVertex2f(-60,95);
glVertex2f(-60,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 230,160,19 );

glVertex2f(-35,75);
glVertex2f(-33,75);
glVertex2f(-33,100);
glVertex2f(-35,100);
glEnd();

 glBegin(GL_POLYGON);//L2
glColor3ub( 230,160,19 );

glVertex2f(-35,100);
glVertex2f(-35,98);
glVertex2f(-25,98);
glVertex2f(-25,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 255,231,10 );

glVertex2f(-25,100);
glVertex2f(-25,95);
glVertex2f(-20,95);
glVertex2f(-20,100);
glEnd();

glBegin(GL_POLYGON);//L1
glColor3ub( 230,160,19 );

glVertex2f(10,75);
glVertex2f(12,75);
glVertex2f(12,100);
glVertex2f(10,100);
glEnd();

 glBegin(GL_POLYGON);//L2
glColor3ub( 230,160,19 );

glVertex2f(10,100);
glVertex2f(10,98);
glVertex2f(20,98);
glVertex2f(20,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 255,231,10 );

glVertex2f(20,100);
glVertex2f(20,95);
glVertex2f(25,95);
glVertex2f(25,100);
glEnd();

glBegin(GL_POLYGON);//L1
glColor3ub( 230,160,19 );

glVertex2f(55,75);
glVertex2f(53,75);
glVertex2f(53,100);
glVertex2f(55,100);
glEnd();

glBegin(GL_POLYGON);//L2
glColor3ub( 230,160,19 );

glVertex2f(55,100);
glVertex2f(55,98);
glVertex2f(60,98);
glVertex2f(60,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 255,231,10 );

glVertex2f(60,100);
glVertex2f(60,95);
glVertex2f(65,95);
glVertex2f(65,100);
glEnd();
}

void Roadlight() //a1953
{
   glBegin(GL_POLYGON);//L1
glColor3ub( 230,160,19 );

glVertex2f(-75,75);
glVertex2f(-73,75);
glVertex2f(-73,100);
glVertex2f(-75,100);
glEnd();

glBegin(GL_POLYGON);//L2
glColor3ub( 230,160,19 );

glVertex2f(-75,100);
glVertex2f(-75,98);
glVertex2f(-65,98);
glVertex2f(-65,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 255,255,255 );

glVertex2f(-65,100);
glVertex2f(-65,95);
glVertex2f(-60,95);
glVertex2f(-60,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 230,160,19 );

glVertex2f(-35,75);
glVertex2f(-33,75);
glVertex2f(-33,100);
glVertex2f(-35,100);
glEnd();

 glBegin(GL_POLYGON);//L2
glColor3ub( 230,160,19 );

glVertex2f(-35,100);
glVertex2f(-35,98);
glVertex2f(-25,98);
glVertex2f(-25,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 255,255,255 );

glVertex2f(-25,100);
glVertex2f(-25,95);
glVertex2f(-20,95);
glVertex2f(-20,100);
glEnd();

glBegin(GL_POLYGON);//L1
glColor3ub( 230,160,19 );

glVertex2f(10,75);
glVertex2f(12,75);
glVertex2f(12,100);
glVertex2f(10,100);
glEnd();

 glBegin(GL_POLYGON);//L2
glColor3ub( 230,160,19 );

glVertex2f(10,100);
glVertex2f(10,98);
glVertex2f(20,98);
glVertex2f(20,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 255,255,255 );

glVertex2f(20,100);
glVertex2f(25,95);
glVertex2f(20,95);
glVertex2f(25,100);
glEnd();


glBegin(GL_POLYGON);//L1
glColor3ub( 230,160,19 );

glVertex2f(55,75);
glVertex2f(53,75);
glVertex2f(53,100);
glVertex2f(55,100);
glEnd();

glBegin(GL_POLYGON);//L2
glColor3ub( 230,160,19 );

glVertex2f(55,100);
glVertex2f(55,98);
glVertex2f(60,98);
glVertex2f(60,100);
glEnd();

glBegin(GL_POLYGON);//L3
glColor3ub( 255,255,255 );

glVertex2f(60,100);
glVertex2f(65,95);
glVertex2f(60,95);
glVertex2f(65,100);
glEnd();
}
void Boat() //f1954

{

glPushMatrix();
glTranslatef(position_Boat,0.0,0.0);
    GLfloat w=0.0;
glBegin(GL_POLYGON);//Boat 3 body 1
glColor3ub(0,0,0 );//BLACK

glVertex2f(-10,-85);
glVertex2f(25,-85);
glVertex2f(30,-80);
glVertex2f(-15,-80);
glEnd();

glBegin(GL_POLYGON);//boat 3 body 2
glColor3ub( 125, 10, 171  );//purple

glVertex2f(-10,-80);
glVertex2f(10,-80);
glVertex2f(10,-70);
glVertex2f(-10,-70);
glEnd();
glPopMatrix();
}
void Boat1()  //f1955
{
    glPushMatrix();
glTranslatef(position_Boat,0.0,0.0);
    GLfloat w=0.0;

glBegin(GL_POLYGON);
glColor3ub(0,0,0 );//black

glVertex2f(15,-30);
glVertex2f(35,-30);
glVertex2f(40,-25);
glVertex2f(10,-25);
glEnd();

glBegin(GL_POLYGON);
glColor3ub( 255,0,0 );//red

glVertex2f(15,-25);
glVertex2f(15,-13);
glVertex2f(20,-13);
glVertex2f(20,-25);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255,0,0);//red

glVertex2f(25,-25);
glVertex2f(25,-13);
glVertex2f(30,-13);
glVertex2f(30,-25);
glEnd();

glBegin(GL_LINES);
glColor3ub( 255,0,0 );//red

glVertex2f(15,-13);
glVertex2f(30,-13);

glEnd();
glPopMatrix();

}

void boat()      //f1956
{
  glPushMatrix();
glTranslatef(position_boat,0.0,0.0);
    GLfloat w=0.0;
    glColor3ub(0,0,0 );//Black
  glBegin(GL_POLYGON);//Boat 2 body1

glVertex2f(35,-65);
glVertex2f(70,-65);
glVertex2f(75,-60);
glVertex2f(30,-60);
glEnd();



glBegin(GL_POLYGON);//  boat 2 body 2
glColor3ub(249, 130, 3 );//orange

glVertex2f(35,-60);
glVertex2f(70,-60);
glVertex2f(60,-50);
glVertex2f(45,-50);
glEnd();

glBegin(GL_POLYGON);//  boat 2 window 1
glColor3ub( 253, 254, 254  );// white

glVertex2f(45,-58);
glVertex2f(50,-58);
glVertex2f(50,-53);
glVertex2f(45,-53);
glEnd();

 glBegin(GL_POLYGON);//  boat 2 window 2
glColor3ub( 253, 254, 254  );// white

glVertex2f(55,-58);
glVertex2f(60,-58);
glVertex2f(60,-53);
glVertex2f(55,-53);
glEnd();

glBegin(GL_POLYGON);//boat 4 body 1
glColor3ub( 0,0,0 );//black

glVertex2f(-80,-45);
glVertex2f(-50,-45);
glVertex2f(-45,-40);
glVertex2f(-85,-40);
glEnd();


glBegin(GL_POLYGON);//boat 4 body 2
glColor3ub( 241, 196, 15  );//yellow

glVertex2f(-80,-40);
glVertex2f(-50,-40);
glVertex2f(-50,-36);
glVertex2f(-80,-36);
glEnd();

glBegin(GL_POLYGON);//boat 4 body 3
glColor3ub( 222, 49, 99 ); //pink

glVertex2f(-75,-36);
glVertex2f(-55,-36);
glVertex2f(-55,-33);
glVertex2f(-75,-33);
glEnd();
glPopMatrix();
}

void car ()    //a1957
{

glPushMatrix();
glTranslatef(position_car,0.0,0.0);
    GLfloat w=0.0;

glBegin(GL_POLYGON);//truck  body 1
glColor3ub( 222, 49, 99 );//pink

glVertex2f(55,77);
glVertex2f(80,77);
glVertex2f(80,85);
glVertex2f(67,98);
glVertex2f(55,98);

glEnd();

glBegin(GL_POLYGON);//truck  body 2
glColor3ub( 253, 254, 254 );//white

glVertex2f(60,85);
glVertex2f(75,85);
glVertex2f(65,95);
glVertex2f(60,95);

glEnd();



glBegin(GL_POLYGON);//truck  body light
glColor3ub( 244, 208, 63 );//yellow

glVertex2f(80,84);
glVertex2f(77,84);
glVertex2f(77,80);
glVertex2f(80,80);

glEnd();



glBegin(GL_POLYGON);//truck  body3
glColor3ub(  243, 20, 9);// Red

glVertex2f(54,78);
glVertex2f(54,95);
glVertex2f(15,95);
glVertex2f(15,78);

glEnd();


glBegin(GL_POLYGON);//truck  body4
glColor3ub( 0,0,0);// black

glVertex2f(19,85);
glVertex2f(48,85);
glVertex2f(48,92);
glVertex2f(19,92);

glEnd();



glBegin(GL_POLYGON);//car body 1
glColor3ub( 9, 62, 243 );// blue

glVertex2f(-45,77);
glVertex2f(-18,77);
glVertex2f(-18,82);
glVertex2f(-21,82);
glVertex2f(-25,85);
glVertex2f(-45,85);
glEnd();

glBegin(GL_POLYGON);//car window 1
glColor3ub( 0,0,0);// black

glVertex2f(-30,81);
glVertex2f(-27,81);
glVertex2f(-27,84);
glVertex2f(-30,84);

glEnd();

glBegin(GL_POLYGON);//car window 2
glColor3ub( 0,0,0);// black

glVertex2f(-37,81);
glVertex2f(-34,81);
glVertex2f(-34,84);
glVertex2f(-37,84);

glEnd();

glBegin(GL_POLYGON);//car window 3
glColor3ub( 0,0,0);// black

glVertex2f(-40,81);
glVertex2f(-40,84);
glVertex2f(-43,84);
glVertex2f(-43,81);

glEnd();

glBegin(GL_POLYGON);//car light
glColor3ub( 244, 208, 63);// yellow

glVertex2f(-18,78);
glVertex2f(-18,79);
glVertex2f(-20,79);
glVertex2f(-20,78);

glEnd();

glBegin(GL_POLYGON);//bus
glColor3ub( 108, 6, 124 );// purple

glVertex2f(-60,77);
glVertex2f(-60,85);
glVertex2f(-85,85);
glVertex2f(-85,77);

glEnd();



glBegin(GL_POLYGON);//bus window 1
glColor3ub( 251, 252, 252 );// white

glVertex2f(-65,81);
glVertex2f(-62,81);
glVertex2f(-62,84);
glVertex2f(-65,84);

glEnd();


glBegin(GL_POLYGON);//bus window 2
glColor3ub( 251, 252, 252 );// white

glVertex2f(-68,81);
glVertex2f(-68,84);
glVertex2f(-71,84);
glVertex2f(-71,81);

glEnd();

glBegin(GL_POLYGON);//bus window 3
glColor3ub( 251, 252, 252 );// white

glVertex2f(-74,81);
glVertex2f(-74,84);
glVertex2f(-77,84);
glVertex2f(-77,81);

glEnd();

glBegin(GL_POLYGON);//bus window 4
glColor3ub( 251, 252, 252 );// white

glVertex2f(-80,81);
glVertex2f(-80,84);
glVertex2f(-83,84);
glVertex2f(-83,81);

glEnd();

glBegin(GL_POLYGON);//bus  light
glColor3ub( 244, 208, 63);// yellow

glVertex2f(-62,78);
glVertex2f(-60,78);
glVertex2f(-60,80);
glVertex2f(-62,80);

glEnd();


 glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=3;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= 65+x+w;
		float y_pos= 78+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();

glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=3;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= 25+x+w;
		float y_pos= 78+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();


glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=2;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= -25+x+w;
		float y_pos= 77+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();


glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=2;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= -40+x+w;
		float y_pos= 77+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();



 glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=2;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= -65+x+w;
		float y_pos= 77+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();

glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=2;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= -80+x+w;
		float y_pos= 77+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();
	glPopMatrix();

}



void plane()   //t1958
{
     //Plane//
    glPushMatrix();
    glTranslatef(position_plane,0.0,0.0);
     glBegin(GL_TRIANGLES);//Plane front
     glColor3ub(96,96,96);
     glVertex2f(45, 110.0);
     glVertex2f(50, 105.0);
     glVertex2f(50, 115.0);
     glEnd();


    glBegin(GL_POLYGON);//plane body
	glColor3ub(0,153,153);
	glVertex2f(50,105.0);
	glVertex2f(60,105.0);
	glVertex2f(65,118);
	glVertex2f(62,118);
	glVertex2f(60,115);
	glVertex2f(50,115);
	glEnd();

	glBegin(GL_QUADS);//plane wing upper
	glColor3ub(0,153,153);
	glVertex2f(55,115.0);
	glVertex2f(56,115.0);
	glVertex2f(57,118.0);
	glVertex2f(55,118.0);
	glEnd();

	glBegin(GL_QUADS);//plane wing lower
	glColor3ub(0,153,153);
	glVertex2f(55,105.0);
	glVertex2f(56,105.0);
	glVertex2f(57,102.0);
	glVertex2f(55,102.0);
	glEnd();
	glPopMatrix();
}


void train()       //m1959
{
glPushMatrix();
glTranslatef(position_train,0.0,0.0);
    GLfloat w=0.0;
    for(int i=0;i<2;i++){
    //train carrier

glBegin(GL_POLYGON);//train body1
glColor3ub(21, 67, 96  );

glVertex2f(35,40);
glVertex2f(95,40);
glVertex2f(80,50);
glVertex2f(35,50);

glEnd();

glBegin(GL_POLYGON);//train body2
glColor3ub(  231, 76, 60 );

glVertex2f(37,50);
glVertex2f(60,50);
glVertex2f(60,65);
glVertex2f(37,65);

glEnd();

glBegin(GL_POLYGON);//train body3
glColor3ub(230, 126, 34 );

glVertex2f(60,50);
glVertex2f(80,50);
glVertex2f(80,60);
glVertex2f(60,60);

glEnd();

glBegin(GL_POLYGON);//train body4
glColor3ub( 21, 67, 96 );

glVertex2f(70,60);
glVertex2f(75,60);
glVertex2f(75,65);
glVertex2f(70,65);

glEnd();

//Wheels
glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= 45+x+w;
		float y_pos= 40+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();


glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= 80+x+w;
		float y_pos= 40+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();
    }

    glBegin(GL_POLYGON);//train body5
glColor3ub( 21, 67, 96 );

glVertex2f(68,66);
glVertex2f(77,66);
glVertex2f(77,69);
glVertex2f(68,69);

glEnd();

glBegin(GL_POLYGON);//train body6
glColor3ub( 0,0,0);//Black

glVertex2f(62,50);
glVertex2f(64,50);
glVertex2f(64,60);
glVertex2f(62,60);

glEnd();

glBegin(GL_POLYGON);//train body7
glColor3ub( 0,0,0);//Black

glVertex2f(66,50);
glVertex2f(68,50);
glVertex2f(68,60);
glVertex2f(66,60);

glEnd();
glBegin(GL_POLYGON);//train body8
glColor3ub( 0,0,0);// Black

glVertex2f(76,50);
glVertex2f(78,50);
glVertex2f(78,60);
glVertex2f(76,60);

glEnd();

glBegin(GL_POLYGON);//train body9
glColor3ub(247, 243, 11); //yellow

glVertex2f(80,55);
glVertex2f(85,55);
glVertex2f(80,60);

glEnd();

glBegin(GL_POLYGON);//train body10
glColor3ub(  100, 30, 22 ); //brown

glVertex2f(35,65);
glVertex2f(62,65);
glVertex2f(62,68);
glVertex2f(35,68);

glEnd();
glBegin(GL_POLYGON);//train body11
glColor3ub(  240, 243, 244);//green

glVertex2f(40,53);
glVertex2f(57,53);
glVertex2f(57,62);
glVertex2f(40,62);

glEnd();

glBegin(GL_POLYGON);//train boggi body1
glColor3ub(  34, 153, 84 );

glVertex2f(-25,40);//white
glVertex2f(30,40);
glVertex2f(30,65);
glVertex2f(-25,65);

glEnd();

glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= 20+x+w;
		float y_pos= 40+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();

	glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= -15+x+w;
		float y_pos= 40+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();

glBegin(GL_POLYGON);//train boggi 1 window 1
glColor3ub( 253, 254, 254); //white

glVertex2f(-20,50);
glVertex2f(-5,50);
glVertex2f(-5,60);
glVertex2f(-20,60);

glEnd();

glBegin(GL_POLYGON);//train bboggi window 2
glColor3ub( 253, 254, 254);//white

glVertex2f(10,50);
glVertex2f(25,50);
glVertex2f(25,60);
glVertex2f(10,60);

glEnd();

glBegin(GL_POLYGON);//train boggi body2
glColor3ub(  34, 153, 84 );//green

glVertex2f(-75,40);
glVertex2f(-30,40);
glVertex2f(-30,65);
glVertex2f(-75,65);

glEnd();

glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= -40+x+w;
		float y_pos= 40+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();
glColor3ub(110,44,0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= -65+x+w;
		float y_pos= 40+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();

glBegin(GL_POLYGON);//train boggi window 1
glColor3ub( 253, 254, 254);//white

glVertex2f(-70,50);
glVertex2f(-55,50);
glVertex2f(-55,60);
glVertex2f(-70,60);

glEnd();
glBegin(GL_POLYGON);//train boggi window 2
glColor3ub( 253, 254, 254);//white

glVertex2f(-50,50);
glVertex2f(-35,50);
glVertex2f(-35,60);
glVertex2f(-50,60);

glEnd();

glBegin(GL_LINES);// boggi adjust line 1
glColor3ub(0,0,0);//Black

glVertex2f(30,45);
glVertex2f(35,45);


glEnd();

glBegin(GL_LINES);// boggi adjust line 2
glColor3ub(0,0,0);//Black

glVertex2f(-30,45);
glVertex2f(-25,45);


glEnd();


glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1.1;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= -18+x;
		float y_pos= 31+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1.1;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= 4+x;
		float y_pos= 31+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();
	glPopMatrix();

}


void update_plane(int value) //t1960
 {

    if(position_plane <-160.0)
        position_plane = 100.0f;

    position_plane -= speed_plane;

	glutPostRedisplay();


	glutTimerFunc(100, update_plane, 0);
}

void update_cloud(int value)  //m1961
 {

    if(position_cloud >160.0)
        position_cloud = -120.0f;

    position_cloud += speed_cloud;

	glutPostRedisplay();


	glutTimerFunc(100, update_cloud, 0);
}

void update_train(int value) //m1962
 {

    if(position_train >160.0)
        position_train = -120.0f;

    position_train += speed_train;

	glutPostRedisplay();


	glutTimerFunc(100, update_train, 0);
}

void update_car(int value)  //a1963
{

    if(position_car >160.0)
        position_car = -120.0f;

    position_car += speed_car;

	glutPostRedisplay();


	glutTimerFunc(100, update_car, 0);
}

void update_boat(int value)  //f1964
 {

    if(position_boat >150.0)
        position_boat = -110.0f;

    position_boat += speed_boat;

	glutPostRedisplay();


	glutTimerFunc(100, update_boat, 0);
}

void update_Boat(int value)   //f1965
{

    if(position_Boat <-140.0)
        position_Boat = 110.0f;

    position_Boat -= speed_Boat;

	glutPostRedisplay();


	glutTimerFunc(100, update_Boat, 0);

}
void update_Boat1(int value)  //f1966
{

    if(position_Boat1 <-140.0)
        position_Boat1 = 110.0f;

    position_Boat1 -= speed_Boat1;

	glutPostRedisplay();
glutTimerFunc(100, update_Boat1, 0);
}





void update_waves(int value)   //f1967
 {

    if(position_waves <-160.0)
        position_waves = 100.0f;

    position_waves -= speed_waves;

	glutPostRedisplay();


	glutTimerFunc(100, update_waves, 0);
}




void rain()  //t1968
{
    glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3ub(41, 56, 91); //sky
     glVertex2f(-600, -100.0);
     glVertex2f(600, 600.0);
     glVertex2f(500, -0.0);
     glVertex2f(50, 0.0);
     glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position_cloud,0.0,0.0);
    GLfloat x=-70.46f; GLfloat y=120.88;  GLfloat radius =9.035f;       //cloud3
    int i;
	int lineAmount = 100;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(33,40, 56);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 GLfloat twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=-60.52f; y=120.88;  radius =13.055f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(33,40, 56);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=-45.57f; y=120.88;  radius =10.035f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(33,40, 56);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=-120.46f; y=80.88;  radius =7.035f;       //cloud4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(33,40, 56);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=-110.52f; y=80.88;  radius =9.055f;       //cloud4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(33,40, 56);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=-98.57f; y=80.88;  radius =8.035f;       //cloud4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(33,40, 56);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();          //rain funtion
	glPopMatrix();     //t1969

	train();
	plane();
	bridge();
    soil();
    water();
    water2();
    waves();
    grass();
    hill();
    tree();
    house();
    Boat();
    boat();
    car();
    Roadlight();

	glFlush();        //Works only on single buffer
glutSwapBuffers();

glLineWidth(1.0);
int h=80;
    int j=50;
    static float a=76.0f;
    if(a<=76.8)
    {
         a=-76.0f;

    }
    else
    {
        a-=10.5f;
        //glColor3ub(r,g,b);
    }
    glColor3ub(255,255,255);
    glPushMatrix();
    glTranslatef(-150.0f,-220.0f,0.0f);
    glBegin(GL_LINES);
    for(int i=50;i>=0;i--)
    {
        for(int k=0;k<=i;k++)
        {
            glVertex3i(h,j,0);
            glVertex3i(h+5,j+10,0);
            h+=rand()%80;
        }
        j+=rand()%65;
        h=0;

    }
    glEnd();
    glLoadIdentity();
    glPopMatrix();
    glutPostRedisplay();
    glFlush();

    glutSwapBuffers();
}

void day()      //m1970
{
    glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3ub(18,235,250); //sky
     glVertex2f(-600, -100.0);
     glVertex2f(600, 600.0);
     glVertex2f(500, -0.0);
     glVertex2f(50, 0.0);
     glEnd();
    glPopMatrix();

        //Sun//
    glPushMatrix();
   glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=10.1;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= 80+x;
		float y_pos= 130+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glTranslatef(position_cloud,0.0,0.0);
	GLfloat  x=-50.97f;GLfloat y=40.88; GLfloat radius =7.035f;       //cloud1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
    int i;
	int lineAmount = 100;

	GLfloat twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	  x=-45.92f; y=40.88;  radius =9.055f;       //cloud1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=-40.86f; y=40.88;  radius =8.035f;       //cloud1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	x=0.57f; y=100.88;  radius =12.035f;       //cloud2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=15.52f; y=100.88;  radius =10.055f;       //cloud2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=-15.46f; y=100.88;  radius =10.035f;       //cloud2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=-70.46f; y=120.88;  radius =9.035f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=-60.52f; y=120.88;  radius =13.055f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=-45.57f; y=120.88;  radius =10.035f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;


	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	x=-120.46f; y=80.88;  radius =7.035f;       //cloud4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=-110.52f; y=80.88;  radius =9.055f;       //cloud4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=-98.57f; y=80.88;  radius =8.035f;       //cloud4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100;

	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();   //Day funtion
	glPopMatrix();   //m1971
	train();
	plane();
	bridge();
    soil();
    water();
    waves();
    grass();
    hill();
    tree();
    house();
    Boat();
    boat();
    car();
    Roadlight();


	glFlush();        //Works only on single buffer
glutSwapBuffers();


}

void night()  //a1972
{
glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3f(0.0, 0.0, 0.0); //sky
     glVertex2f(-600, -100.0);
     glVertex2f(600, 600.0);
     glVertex2f(500, -0.0);
     glVertex2f(50, 0.0);
     glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,102); //star-1 from left
    glBegin(GL_POLYGON);
    glVertex3f(-60, 77, 0);
    glVertex3f(-65, 77, 0);
    glVertex3f(-63, 78, 0);
    glVertex3f(-64, 76, 0);
    glVertex3f(-62, 78, 0);
    glEnd();

    glColor3ub(255,255,102); //star-3 from left
    glBegin(GL_POLYGON);
    glVertex3f(-80, 87, 0);
    glVertex3f(-85, 87, 0);
    glVertex3f(-83, 88, 0);
    glVertex3f(-84, 86, 0);
    glVertex3f(-82, 88, 0);
    glEnd();

    glColor3ub(255,255,102); //star-2 from left
    glBegin(GL_POLYGON);
    glVertex3f(-30, 72, 0);
    glVertex3f(-35, 72, 0);
    glVertex3f(-33, 73, 0);
    glVertex3f(-34, 71, 0);
    glVertex3f(-32, 73, 0);
    glEnd();

    glColor3ub(255,255,102); //star-4 from left
    glBegin(GL_POLYGON);
    glVertex3f(-56, 97, 0);
    glVertex3f(-58, 97, 0);
    glVertex3f(-57, 98, 0);
    glVertex3f(-58, 96, 0);
    glVertex3f(-57, 98, 0);
    glEnd();

    glColor3ub(255,255,102); //star-5 from left
    glBegin(GL_POLYGON);
    glVertex3f(-20, 127, 0);
    glVertex3f(-25, 127, 0);
    glVertex3f(-23, 128, 0);
    glVertex3f(-24, 126, 0);
    glVertex3f(-22, 128, 0);
    glEnd();

    glColor3ub(255,255,102); //star-6 from left
    glBegin(GL_POLYGON);
    glVertex3f(-0, 96, 0);
    glVertex3f(-5, 96, 0);
    glVertex3f(-3, 95, 0);
    glVertex3f(-4, 94, 0);
    glVertex3f(-2, 96, 0);
    glEnd();

    glColor3ub(255,255,102); //star-7 from left
    glBegin(GL_POLYGON);
    glVertex3f(90, 97, 0);
    glVertex3f(95, 97, 0);
    glVertex3f(93, 98, 0);
    glVertex3f(94, 96, 0);
    glVertex3f(92, 98, 0);
    glEnd();

    glColor3ub(255,255,102); //star-8 from left
    glBegin(GL_POLYGON);
    glVertex3f(40, 107, 0);
    glVertex3f(45, 107, 0);
    glVertex3f(43, 108, 0);
    glVertex3f(44, 106, 0);
    glVertex3f(42, 108, 0);
    glEnd();

    glColor3ub(255,255,102); //star-9 from left
    glBegin(GL_POLYGON);
    glVertex3f(50, 72, 0);
    glVertex3f(55, 72, 0);
    glVertex3f(53, 73, 0);
    glVertex3f(54, 71, 0);
    glVertex3f(52, 73, 0);
    glEnd();

    glColor3ub(255,255,102); //star-10 from left
    glBegin(GL_POLYGON);
    glVertex3f(56, 97, 0);
    glVertex3f(58, 97, 0);
    glVertex3f(57, 98, 0);
    glVertex3f(58, 96, 0);
    glVertex3f(57, 98, 0);
    glEnd();

    glColor3ub(255,255,102); //star-11 from left
    glBegin(GL_POLYGON);
    glVertex3f(20, 127, 0);
    glVertex3f(25, 127, 0);
    glVertex3f(23, 128, 0);
    glVertex3f(24, 126, 0);
    glVertex3f(22, 128, 0);
    glEnd();

    glColor3ub(255,255,102); //star-12 from left
    glBegin(GL_POLYGON);
    glVertex3f(0, 76, 0);
    glVertex3f(5, 76, 0);
    glVertex3f(3, 75, 0);
    glVertex3f(4, 74, 0);
    glVertex3f(2, 76, 0);
    glEnd();
    glPopMatrix();

    //moon
    glPushMatrix();
	glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=10.1;
		float x = r * cos(A);
		float y = r * sin(A);

		float x_pos= -70+x;
		float y_pos= 130+y;
		glVertex2f(x_pos,y_pos);
	}
	glEnd();
	glPopMatrix(); //Night funtion
	train();       //a1973
	plane();
	bridge();
	roadlight();
    soil();
    water1();
    waves();
    grass();
    hill();
    house();
    tree();
    Boat();
    car();

glFlush();        //Works only on single buffer
glutSwapBuffers();
}
void tide()  // f1974
{
    glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3ub(179,201,255); //sky
     glVertex2f(-600, -100.0);
     glVertex2f(600, 600.0);
     glVertex2f(500, -0.0);
     glVertex2f(50, 0.0);

     glEnd();
    glPopMatrix(); //tide funtion
    train();      //f1975
	plane();
	bridge();
    soil();
    hill();
    house();
    house();
    tree();
    grass();
    water2();
    widewater();
    waves();
    roadlight();
    Boat();
    Boat1();
    boat();
    car();
	glFlush();        //Works only on single buffer
glutSwapBuffers();
}



void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(5.0);

    day();

}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key)
	{


    case 'd':     //m1976
    glutDisplayFunc(day);
    glutPostRedisplay();
    break;

    case 'n': //a1977
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;

    case 'D':
    glutDisplayFunc(day);
    glutPostRedisplay();
    break;

    case 'N':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;

    case 'R': //t1978
    glutDisplayFunc(rain);
    glutPostRedisplay();
    break;

    case 'r':
    glutDisplayFunc(rain);
    glutPostRedisplay();
    break;

    case 't': // f1979
    glutDisplayFunc(tide);
    glutPostRedisplay();
    break;

    case 'T':
    glutDisplayFunc(tide);
    glutPostRedisplay();
    break;

glutPostRedisplay();

	}
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("Final project group-8");
glutInitWindowSize(320, 320);
gluOrtho2D(-95,100,-150,150);
glutDisplayFunc(display);
glutKeyboardFunc(handleKeypress);
glutTimerFunc(100, update_plane, 0);
glutTimerFunc(100, update_cloud, 0);
glutTimerFunc(100, update_train, 0);
glutTimerFunc(100, update_car, 0);
glutTimerFunc(100, update_boat, 0);
glutTimerFunc(90, update_Boat, 0);
glutTimerFunc(100, update_Boat1, 0);
glutTimerFunc(100, update_waves, 0);
glutMainLoop();
return 0;

}
