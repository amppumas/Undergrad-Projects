//Semestre 2017 - 1
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Augusto Meza Pe�a				        ******//
//*************	Mu�oz Alvarez Rosa Maria Yolotzin		******//
//************************************************************//
#include "Main.h"

DWORD dwFrames = 0;
DWORD dwCurrentTime = 0;
DWORD dwLastUpdateTime = 0;
DWORD dwElapsedTime = 0;

bool boca_open = true;

float black[3] = { 0.0f,0.0f,0.0f };
float white[3] = { 1.0f,1.0f ,1.0f };
float tetera[3] = {0.7882f,0.7490f,0.6352f};
float tetera_sombra[3] = { 0.5450f,0.5176f,0.4352f};
float tetera_luz[3] = {0.9450f,0.9058f,0.7803f};
float hair[3] = {0.3568f,0.3176f,0.2078f};
float skin[3] = {0.8470f,0.7254f,0.5647f};
float nose[3] = {0.8627f,0.6666f,0.5960f};
float teeth[3] = {0.9294f,0.9058f,0.7921f};
float boca[3] = {0.5529f,0.3882f,0.2980f};
float lengua[3] = {0.8117f,0.4823f,0.4352f};
float oberol[3] = {0.4666f,0.5254f,0.4117f};
float shirt[3] = {0.8745f,0.8470f,0.7607f};
float strip[3] = {0.3254f,0.2352f,0.1058f };
float back[3] = {0.3607f,0.3098f,0.2156f};
float bag[3] = {0.4588f,0.3921f,0.2747f};
float coin[3] = {0.6666f,0.5607f,0.3294f};
float coin_luz[3] = {0.7843f,0.7098f,0.4078f};
float shirt_sombra[3] = { 0.8039f,0.7764f, 0.6941f};
void InitGL ( GLvoid )     // Inicializamos parametros
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);				//Blanco de fondo
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview
	glLineWidth(2.0);


	//Augusto
	/*			Tetera		*/
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3fv(black);
	glVertex3d(869, 225, -0.2);
	glVertex3d(878, 224, -0.2);
	glVertex3d(885, 224, -0.2);
	glVertex3d(897, 224, -0.2);
	glVertex3d(909, 228, -0.2);
	glVertex3d(925, 237, -0.2);
	glVertex3d(937, 246, -0.2);
	glVertex3d(941, 249, -0.2);
	glVertex3d(953, 266, -0.2);
	glVertex3d(966, 293, -0.2);
	glVertex3d(978, 300, -0.2);
	glVertex3d(985, 303, -0.2);
	glVertex3d(993, 306, -0.2);
	glVertex3d(1000, 307, -0.2);
	glVertex3d(1007, 309, -0.2);
	glVertex3d(1015, 308, -0.2);
	glVertex3d(1025, 308, -0.2);
	glVertex3d(1026, 307, -0.2);
	glVertex3d(1027, 308, -0.2);
	glVertex3d(1028, 303, -0.2);
	glVertex3d(1029, 304, -0.2);
	glVertex3d(1029, 300, -0.2);
	glVertex3d(1024, 296, -0.2);
	glVertex3d(1013, 290, -0.2);
	glVertex3d(996, 274, -0.2);
	glVertex3d(987, 252, -0.2);
	glVertex3d(977, 196, -0.2);
	glVertex3d(964, 163, -0.2);
	glVertex3d(937, 139, -0.2);
	glVertex3d(913, 127, -0.2);
	glVertex3d(906, 125, -0.2);
	glVertex3d(888, 122, -0.2);
	glVertex3d(881, 123, -0.2);
	glVertex3d(862, 128, -0.2);
	glVertex3d(870, 157, -0.2);
	glVertex3d(872, 187, -0.2);
	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3fv(tetera);
	glVertex3d(978, 300, -0.2);
	glVertex3d(985, 303, -0.2);
	glVertex3d(993, 306, -0.2);
	glVertex3d(1000, 307, -0.2);
	glVertex3d(1007, 309, -0.2);
	glVertex3d(1015, 308, -0.2);
	glVertex3d(1025, 308, -0.2);
	glVertex3d(1026, 307, -0.2);
	glVertex3d(1027, 308, -0.2);
	glVertex3d(1028, 303, -0.2);
	glVertex3d(1029, 304, -0.2);
	glVertex3d(1029, 300, -0.2);
	glVertex3d(1024, 296, -0.2);
	glVertex3d(1013, 290, -0.2);
	glVertex3d(996, 274, -0.2);
	glVertex3d(987, 252, -0.2);
	glVertex3d(977, 196, -0.2);
	glVertex3d(964, 163, -0.2);
	glVertex3d(937, 139, -0.2);
	glVertex3d(913, 127, -0.2);
	glVertex3d(906, 125, -0.2);
	glVertex3d(888, 122, -0.2);
	glVertex3d(881, 123, -0.2);
	glVertex3d(862, 128, -0.2);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(872, 187, -0.2);
	glVertex3d(869, 225, -0.2);
	glVertex3d(878, 224, -0.2);
	glVertex3d(885, 224, -0.2);
	glVertex3d(897, 224, -0.2);
	glVertex3d(909, 228, -0.2);
	glVertex3d(925, 237, -0.2);
	glVertex3d(937, 246, -0.2);
	glVertex3d(941, 249, -0.2);
	glVertex3d(963, 239, -0.2);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(862, 128, -0.2);
	glVertex3d(870, 157, -0.2);
	glVertex3d(935, 142, -0.2);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(870, 157, -0.2);
	glVertex3d(872, 187, -0.2);
	glVertex3d(949, 243, -0.2);
	glVertex3d(935, 142, -0.2);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(938, 166, -0.2);
	glVertex3d(941, 249, -0.2);
	glVertex3d(953, 266, -0.2);
	glVertex3d(966, 293, -0.2);
	glVertex3d(978, 300, -0.2);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3fv(black);
	glVertex3d(978, 300, -0.2);
	glVertex3d(980, 297, -0.2);
	glVertex3d(985, 297, -0.2);
	glVertex3d(997, 302, -0.2);
	glVertex3d(1005, 306, -0.2);
	glVertex3d(1000, 307, -0.2);
	glVertex3d(993, 306, -0.2);
	glVertex3d(985, 303, -0.2);
	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3fv(tetera_sombra);
	glVertex3d(978, 300, -0.2);
	glVertex3d(980, 297, -0.2);
	glVertex3d(985, 297, -0.2);
	glVertex3d(997, 302, -0.2);
	glVertex3d(1005, 306, -0.2);
	glVertex3d(1000, 307, -0.2);
	glVertex3d(993, 306, -0.2);
	glVertex3d(985, 303, -0.2);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(872, 187, -0.2);
	glVertex3d(870, 209, -0.2);
	glVertex3d(880, 208, -0.2);
	glVertex3d(899, 210, -0.2);
	glVertex3d(912, 216, -0.2);
	glVertex3d(947, 243, -0.2);
	glVertex3d(949, 243, -0.2);
	glVertex3d(949, 241, -0.2);
	glVertex3d(925, 213, -0.2);
	glVertex3d(907, 200, -0.2);
	glVertex3d(892, 192, -0.2);
	glVertex3d(880, 188, -0.2);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(tetera_luz[0], tetera_luz[1], tetera_luz[2]);
	glVertex3d(877, 133, -0.2);
	glVertex3d(878, 146, -0.2);
	glVertex3d(885, 147, -0.2);
	glVertex3d(892, 147, -0.2);
	glVertex3d(906, 151, -0.2);
	glVertex3d(929, 163, -0.2);
	glVertex3d(900, 135, -0.2);
	glVertex3d(883, 136, -0.2);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(tetera_luz[0], tetera_luz[1], tetera_luz[2]);
	glVertex3d(929, 163, -0.2);
	glVertex3d(943, 174, -0.2);
	glVertex3d(950, 182, -0.2);
	glVertex3d(952, 184, -0.2);
	glVertex3d(953, 187, -0.2);
	glVertex3d(952, 180, -0.2);
	glVertex3d(939, 159, -0.2);
	glVertex3d(915, 142, -0.2);
	glVertex3d(900, 135, -0.2);
	glEnd();
	/*			gooooooo*/
	glBegin(GL_LINE_STRIP);
		glColor3fv(hair);
	glEnd();

	//Rosa
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3fv(hair);
	glVertex3f(496, 448, -0.2);
	glVertex3f(491, 452, -0.2);
	glVertex3f(486, 455, -0.2);
	glVertex3f(481, 456, -0.2);
	glVertex3f(478, 458, -0.2);
	glVertex3f(475, 459, -0.2);
	glVertex3f(474, 459, -0.2);
	glVertex3f(472, 460, -0.2);
	glVertex3f(469, 461, -0.2);
	glVertex3f(465, 462, -0.2);
	glVertex3f(462, 463, -0.2);
	glVertex3f(458, 463, -0.2);
	glVertex3f(454, 463, -0.2);
	glVertex3f(453, 464, -0.2);
	glVertex3f(451, 464, -0.2);
	glVertex3f(449, 464, -0.2);
	glVertex3f(441, 465, -0.2);
	glVertex3f(452, 462, -0.2);
	glVertex3f(458, 458, -0.2);
	glVertex3f(463, 454, -0.2);
	glVertex3f(466, 450, -0.2);
	glVertex3f(474, 444, -0.2);
	glVertex3f(478, 440, -0.2);
	glVertex3f(480, 436, -0.2);
	glVertex3f(484, 433, -0.2);
	glVertex3f(485, 429, -0.2);
	glVertex3f(491, 421, -0.2);
	glVertex3f(495, 415, -0.2);
	glVertex3f(502, 403, -0.2);
	glVertex3f(508, 393, -0.2);
	glVertex3f(511, 388, -0.2);
	glVertex3f(517, 381, -0.2);
	glVertex3f(520, 378, -0.2);
	glVertex3f(521, 377, -0.2);
	glVertex3f(522, 376, -0.2);
	glVertex3f(523, 375, -0.2);
	glVertex3f(529, 370, -0.2);
	glVertex3f(532, 368, -0.2); 
	glVertex3f(538, 363, -0.2);
	glVertex3f(541, 361, -0.2);
	glVertex3f(545, 360, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(557, 392, -0.2);
	glVertex3f(496, 448, -0.2);
	glEnd();
	
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3fv(hair);
	glVertex3f(557, 392, -0.2);
	glVertex3f(557, 398, -0.2);
	glVertex3f(557, 403, -0.2);
	glVertex3f(556, 408, -0.2);
	glVertex3f(556, 414, -0.2);
	glVertex3f(555, 417, -0.2); 
	glVertex3f(554, 421, -0.2);
	glVertex3f(553, 431, -0.2);
	glVertex3f(552, 437, -0.2);
	glVertex3f(551, 441, -0.2);
	glVertex3f(550, 445, -0.2);
	glVertex3f(549, 451, -0.2);
	glVertex3f(548, 456, -0.2);
	glVertex3f(547, 460, -0.2);
	glVertex3f(546, 463, -0.2);
	glVertex3f(545, 465, -0.2);
	glVertex3f(544, 471, -0.2);
	glVertex3f(543, 474, -0.2);
	glVertex3f(542, 476, -0.2);
	glVertex3f(540, 479, -0.2);
	glVertex3f(539, 481, -0.2);
	glVertex3f(534, 491, -0.2);
	glVertex3f(532, 494, -0.2);
	glVertex3f(531, 496, -0.2);
	glVertex3f(530, 497, -0.2);
	glVertex3f(529, 500, -0.2);
	glVertex3f(527, 501, -0.2);
	glVertex3f(526, 504, -0.2);
	glVertex3f(524, 507, -0.2);
	glVertex3f(522, 510, -0.2);
	glVertex3f(521, 511, -0.2);
	glVertex3f(519, 513, -0.2);
	glVertex3f(518, 514, -0.2);
	glVertex3f(517, 516, -0.2);
	glVertex3f(515, 516, -0.2);
	glVertex3f(514, 517, -0.2);
	glVertex3f(513, 518, -0.2);
	glVertex3f(510, 522, -0.2);
	glVertex3f(507, 523, -0.2);
	glVertex3f(505, 526, -0.2);
	glVertex3f(501, 528, -0.2);
	glVertex3f(502, 529, -0.2);
	glVertex3f(500, 529, -0.2);
	glVertex3f(499, 531, -0.2);
	glVertex3f(494, 534, -0.2);
	glVertex3f(492, 535, -0.2);
	glVertex3f(490, 536, -0.2);
	glVertex3f(488, 538, -0.2);
	glVertex3f(484, 539, -0.2);
	glVertex3f(482, 541, -0.2);
	glVertex3f(479, 542, -0.2);
	glVertex3f(474, 544, -0.2);
	glVertex3f(473, 544, -0.2);
	glVertex3f(473, 538, -0.2);
	glVertex3f(473, 535, -0.2);
	glVertex3f(472, 527, -0.2);
	glVertex3f(471, 523, -0.2);
	glVertex3f(472, 511, -0.2);
	glVertex3f(472, 507, -0.2);
	glVertex3f(473, 502, -0.2);
	glVertex3f(472, 498, -0.2);
	glVertex3f(473, 490, -0.2);
	glVertex3f(474, 484, -0.2);
	glVertex3f(475, 480, -0.2);
	glVertex3f(475, 479, -0.2);
	glVertex3f(476, 476, -0.2);
	glVertex3f(476, 472, -0.2);
	glVertex3f(477, 468, -0.2);
	glVertex3f(478, 465, -0.2);
	glVertex3f(478, 462, -0.2);
	glVertex3f(479, 459, -0.2);
	glVertex3f(481, 456, -0.2);
	glVertex3f(486, 455, -0.2);
	glVertex3f(491, 452, -0.2);
	glVertex3f(496, 448, -0.2);
	glVertex3f(557, 392, -0.2);

	glEnd();
	

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3fv(black);
	glVertex3f(496, 448, -0.2);
	glVertex3f(491, 452, -0.2);
	glVertex3f(486, 455, -0.2);
	glVertex3f(481, 456, -0.2);
	glVertex3f(478, 458, -0.2);
	glVertex3f(475, 459, -0.2);
	glVertex3f(474, 459, -0.2);
	glVertex3f(472, 460, -0.2);
	glVertex3f(469, 461, -0.2);
	glVertex3f(465, 462, -0.2);
	glVertex3f(462, 463, -0.2);
	glVertex3f(458, 463, -0.2);
	glVertex3f(454, 463, -0.2);
	glVertex3f(453, 464, -0.2);
	glVertex3f(451, 464, -0.2);
	glVertex3f(449, 464, -0.2);
	glVertex3f(441, 465, -0.2);
	glVertex3f(452, 462, -0.2);
	glVertex3f(458, 458, -0.2);
	glVertex3f(463, 454, -0.2);
	glVertex3f(466, 450, -0.2);
	glVertex3f(474, 444, -0.2);
	glVertex3f(478, 440, -0.2);
	glVertex3f(480, 436, -0.2);
	glVertex3f(484, 433, -0.2);
	glVertex3f(485, 429, -0.2);
	glVertex3f(491, 421, -0.2);
	glVertex3f(495, 415, -0.2);
	glVertex3f(502, 403, -0.2);
	glVertex3f(508, 393, -0.2);
	glVertex3f(511, 388, -0.2);
	glVertex3f(517, 381, -0.2);
	glVertex3f(520, 378, -0.2);
	glVertex3f(521, 377, -0.2);
	glVertex3f(522, 376, -0.2);
	glVertex3f(523, 375, -0.2);
	glVertex3f(529, 370, -0.2);
	glVertex3f(532, 368, -0.2);
	glVertex3f(538, 363, -0.2);
	glVertex3f(541, 361, -0.2);
	glVertex3f(545, 360, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(552, 356, -0.2);
	glVertex3f(554, 355, -0.2);
	glVertex3f(556, 355, -0.2);
	glVertex3f(556, 354, -0.2);
	glVertex3f(558, 353, -0.2);
	glVertex3f(560, 353, -0.2);
	glVertex3f(562, 352, -0.2);
	glVertex3f(565, 351, -0.2);
	glVertex3f(567, 350, -0.2);
	glVertex3f(571, 349, -0.2);
	glVertex3f(575, 348, -0.2);
	glVertex3f(576, 348, -0.2);
	glVertex3f(578, 347, -0.2);
	glVertex3f(579, 347, -0.2);
	glVertex3f(581, 347, -0.2);
	glVertex3f(582, 346, -0.2);
	glVertex3f(584, 346, -0.2);
	glVertex3f(585, 345, -0.2);
	glVertex3f(587, 344, -0.2);
	glVertex3f(590, 344, -0.2);
	glVertex3f(593, 343, -0.2);
	glVertex3f(595, 342, -0.2);
	glVertex3f(598, 341, -0.2);
	glVertex3f(599, 341, -0.2);
	glVertex3f(602, 340, -0.2);
	glVertex3f(605, 339, -0.2);
	glVertex3f(608, 338, -0.2);
	glVertex3f(610, 338, -0.2);
	glVertex3f(614, 337, -0.2);
	glVertex3f(616, 337, -0.2);
	glVertex3f(619, 336, -0.2);
	glVertex3f(622, 335, -0.2);
	glVertex3f(624, 335, -0.2);
	glVertex3f(628, 334, -0.2);
	glVertex3f(632, 334, -0.2);
	glVertex3f(634, 333, -0.2);
	glVertex3f(640, 333, -0.2);
	glVertex3f(641, 332, -0.2);
	glVertex3f(646, 331, -0.2);
	glVertex3f(651, 331, -0.2);
	glVertex3f(655, 330, -0.2);
	glVertex3f(657, 329, -0.2);

	/*
	glVertex3f(659, 329, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);

	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);
	glVertex3f(551, 356, -0.2);



	*/


































	

	glEnd();

	glFlush();
}
 
void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	glOrtho(0,1600,900,0,0.1,2);//COORDENADAS

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	 glutPostRedisplay();
}

void animacion()
{
	// Calculate the number of frames per one second:
	//dwFrames++;
	dwCurrentTime = GetTickCount(); // Even better to use timeGetTime()
	dwElapsedTime = dwCurrentTime - dwLastUpdateTime;

	if (dwElapsedTime >= 480)
	{
		boca_open = !boca_open;
		dwLastUpdateTime = dwCurrentTime;
	}

	glutPostRedisplay();
}

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (1600, 900);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Greg"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut funci�n de manejo de teclado
  glutIdleFunc		  (animacion);
  glutMainLoop        ( );          // 

  return 0;
}