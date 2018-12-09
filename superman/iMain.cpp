# include "iGraphics.h"
int mposx,  mposy; 
int lnx1 = 100,  lnx3 = 500, lnx5 = 900,  lnx7 = 1300;
int cloudx1 = 150, cloudy1 = 700, cloudx2 = 550, cloudy2 = 700;
int cloudx3 = 690, cloudy3 = 900, cloudx4 = 950, cloudy4 = 813; 
int cloudx5 = 1300, cloudy5 = 760, cloudx6 = 350, cloudy6 = 830;
int plane_x1 = 900, plane_y1 = 400, plane_x2 = 1050, plane_y2 = 550;
int plane_x3 = 1100, plane_y3 = 500, plane_x4 = 1200, plane_y4 = 650;
int helix1 = 1500, heliy1 = 400;
int helix2 = 1500, heliy2 = 800;
int mainx = 20, mainy = 200;
int heli = 0;
int lx1 = mainx + 70, lx2, lx3, lx4, lx5, lx6, lx7, lx8, lx9, lx10;
int ly1 = mainy + 70, ly2, ly3, ly4, ly5, ly6, ly7, ly8, ly9, ly10;
int las = 0;
int las1 = 0;
int bigx1 = mainx + 75;
int bigy1 = mainy + 70;
int hero = 1;
int crash = 0, life = 0;
void iDraw()
{

	iClear();
	iShowBMP(0, 0, "background 2.bmp");
	if(hero == 1)
		iShowBMP2(mainx, mainy, "hero1.bmp", 0);
	if(hero == 2)
		iShowBMP2(mainx, mainy, "hero2.bmp", 0);

	iShowBMP2(plane_x1, plane_y1, "plane1.bmp", 0);
	iShowBMP2(plane_x2, plane_y2, "plane2.bmp", 0);
	iShowBMP2(plane_x3, plane_y3, "plane1.bmp", 0);
	iShowBMP2(plane_x4, plane_y4, "plane2.bmp", 0);

	if (heli == 1){
		iShowBMP2(helix1, heliy1, "heli2.bmp", 0);
		iShowBMP2(helix2, heliy2, "heli2.bmp", 0);
	}

	iShowBMP2(cloudx1, cloudy1, "cloud.bmp", 0);
	iShowBMP2(cloudx2, cloudy2, "cloud.bmp", 0);
	iShowBMP2(cloudx3, cloudy3, "cloud.bmp", 0);
	iShowBMP2(cloudx4, cloudy4, "cloud.bmp", 0);
	iShowBMP2(cloudx5, cloudy5, "cloud.bmp", 0);
	iShowBMP2(cloudx6, cloudy6, "cloud.bmp", 0);

	iShowBMP2(lnx1, 50, "line.bmp", 0);
	iShowBMP2(lnx3, 50, "line.bmp", 0);
	iShowBMP2(lnx5, 50, "line.bmp", 0);
	iShowBMP2(lnx7, 50, "line.bmp", 0);

	if (las >= 1)
		iShowBMP2(lx1, ly1, "small.bmp", 0);
	if (las >= 2)
		iShowBMP2(lx2, ly2, "small.bmp", 0);
	if (las >= 3)
		iShowBMP2(lx3, ly3, "small.bmp", 0);
	if (las >= 4)
		iShowBMP2(lx4, ly4, "small.bmp", 0);
	if (las >= 5)
		iShowBMP2(lx5, ly5, "small.bmp", 0);
	if (las >= 6)
		iShowBMP2(lx6, ly6, "small.bmp", 0);
	if (las >= 7)
		iShowBMP2(lx7, ly7, "small.bmp", 0);
	if (las >= 8)
		iShowBMP2(lx8, ly8, "small.bmp", 0);
	if (las >= 9)
		iShowBMP2(lx9, ly9, "small.bmp", 0);
	if (las >= 10)
		iShowBMP2(lx10, ly10, "small.bmp", 0);

	if (las1 >= 1){
		iShowBMP2(bigx1, bigy1, "beam2.bmp", 0);
		las1 = 0;
}
	if((life == 0) || (life == 1))
		iShowBMP2(100, 850, "health.bmp", 0);
	if(life == 2)
		iShowBMP2(100, 850, "health2.bmp", 0);
	if(life == 3)
		iShowBMP2(100, 850, "health3.bmp", 0);
	if(life == 4)
		iShowBMP2(100, 850, "health4.bmp", 0);

}

void collision(){
	if(mainy > plane_y1){
		if(abs(mainx - plane_x1) <= 82 && abs(mainy - plane_y1) <=82){
			crash = 1;
			mainx = -10;
		}
	}
	if(mainy < plane_y1){
		if(abs(mainx - plane_x1) <= 82 && abs(mainy - plane_y1) <=58){
			crash = 1;
		}
	}
	if(mainy > plane_y2){
		if(abs(mainx - plane_x2) <= 82 && abs(mainy - plane_y2) <=82){
			crash = 1;
		}
	}
	if(mainy < plane_y2){
		if(abs(mainx - plane_x2) <= 82 && abs(mainy - plane_y2) <=58){
			crash = 1;
		}
	}
	if(mainy > plane_y3){
		if(abs(mainx - plane_x3) <= 82 && abs(mainy - plane_y3) <=82){
			crash = 1;
		}
	}
	if(mainy < plane_y3){
		if(abs(mainx - plane_x3) <= 82 && abs(mainy - plane_y3) <=58){
			crash = 1;
		}
	}
	if(mainy > plane_y4){
		if(abs(mainx - plane_x4) <= 82 && abs(mainy - plane_y4) <=82){
			crash = 1;
		}
	}
	if(mainy < plane_y4){
		if(abs(mainx - plane_x4) <= 82 && abs(mainy - plane_y4) <=58){
			crash = 1;
		}
	}


}
void BackgroundMovement(){
	cloudx1 -= 15;
	if (cloudx1 <= 0)
		cloudx1 = 1500;
	cloudx2 -= 15;
	if (cloudx2 <= 0)
		cloudx2 = 1500;
	cloudx3 -= 15;
	if (cloudx3 <= 0)
		cloudx3 = 1500;
	cloudx4 -= 15;
	if (cloudx4 <= 0)
		cloudx4 = 1500;
	cloudx5 -= 15;
	if (cloudx5 <= 0)
		cloudx5 = 1500;
	cloudx6 -= 15;
	if (cloudx6 <= 0)
		cloudx6 = 1500;

	lnx1 -= 30;
	if (lnx1 <= 20)
		lnx1 = 1480;
	lnx3 -= 30;
	if (lnx3 <= 20)
		lnx3 = 1480;
	lnx5 -= 30;
	if (lnx5 <= 20)
		lnx5 = 1480;
	lnx7 -= 30;
	if (lnx7 <= 20)
		lnx7 = 1480;

}
void EnemyMovement(){
	plane_x1 -= 25;
	if (plane_x1 <= 10){
		plane_x1 = 1900;
	}
	plane_x2 -= 14;
	if (plane_x2 <= 10){
		plane_x2 = 1900;
	}
	plane_x3 -= 30;
	if (plane_x3 <= 10){
		plane_x3 = 1900;
	}
	plane_x4 -= 20;
	if (plane_x4 <= 10){
		plane_x4 = 1900;
	}
	
	
	if (heli == 1){
		helix1 -= 40;
		helix2 -= 40;
		if (helix1 <= 0){
			heli = 0;
			helix1 = 1450;
			helix2 = 1450;
		}
	}
	
	if (las >= 1){
		lx1 += 50;
		if (abs(lx1 - plane_x1) <= 110 && abs(ly1 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx1 - plane_x2) <= 110 && abs(ly1 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx1 - plane_x3) <= 110 && abs(ly1 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx1 - plane_x4) <= 110 && abs(ly1 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx1 - helix1) <= 110 && abs(ly1 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx1 - helix2) <= 110 && abs(ly1 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las >= 2){
		lx2 += 50;
		if (abs(lx2 - plane_x1) <= 110 && abs(ly2 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx2 - plane_x2) <= 110 && abs(ly2 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx2 - plane_x3) <= 110 && abs(ly2 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx2 - plane_x4) <= 110 && abs(ly2 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx2 - helix1) <= 110 && abs(ly2 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx2 - helix2) <= 110 && abs(ly2 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las >= 3){
		lx3 += 50;
		if (abs(lx3 - plane_x1) <= 110 && abs(ly3 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx3 - plane_x2) <= 110 && abs(ly3 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx3 - plane_x3) <= 110 && abs(ly3 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx3 - plane_x4) <= 110 && abs(ly3 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx3 - helix1) <= 110 && abs(ly3 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx3 - helix2) <= 110 && abs(ly3 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las >= 4){
		lx4 += 50;
		if (abs(lx4 - plane_x1) <= 110 && abs(ly4 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx4 - plane_x2) <= 110 && abs(ly4 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx4 - plane_x3) <= 110 && abs(ly4 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx4 - plane_x4) <= 110 && abs(ly4 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx4 - helix1) <= 110 && abs(ly4 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx4 - helix2) <= 110 && abs(ly4 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las >= 5){
		lx5 += 50;
		if (abs(lx5 - plane_x1) <= 110 && abs(ly5 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx5 - plane_x2) <= 110 && abs(ly5 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx5 - plane_x3) <= 110 && abs(ly5 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx5 - plane_x4) <= 110 && abs(ly5 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx5 - helix1) <= 110 && abs(ly5 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx5 - helix2) <= 110 && abs(ly5 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las >= 6){
		lx6 += 50;
		if (abs(lx6 - plane_x1) <= 110 && abs(ly6 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx6 - plane_x2) <= 110 && abs(ly6 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx6 - plane_x3) <= 110 && abs(ly6 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx6 - plane_x4) <= 110 && abs(ly6 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx6 - helix1) <= 110 && abs(ly6 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx6 - helix2) <= 110 && abs(ly6 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las >= 7){
		lx7 += 50;
		if (abs(lx7 - plane_x1) <= 110 && abs(ly7 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx7 - plane_x2) <= 110 && abs(ly7 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx7 - plane_x3) <= 110 && abs(ly7 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx7 - plane_x4) <= 110 && abs(ly7 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx7 - helix1) <= 110 && abs(ly7 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx7 - helix2) <= 110 && abs(ly7 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las >= 8){
		lx8 += 50;
		if (abs(lx8 - plane_x1) <= 110 && abs(ly8 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx8 - plane_x2) <= 110 && abs(ly8 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx8 - plane_x3) <= 110 && abs(ly8 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx8 - plane_x4) <= 110 && abs(ly8 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx8 - helix1) <= 110 && abs(ly8 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx8 - helix2) <= 110 && abs(ly8 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las >= 9){
		lx9 += 50;
		if (abs(lx9 - plane_x1) <= 110 && abs(ly9 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx9 - plane_x2) <= 110 && abs(ly9 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx9 - plane_x3) <= 110 && abs(ly9 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx9 - plane_x4) <= 110 && abs(ly9 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx9 - helix1) <= 110 && abs(ly9 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx9 - helix2) <= 110 && abs(ly9 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las >= 10){
		lx10 += 50;
		if (abs(lx10 - plane_x1) <= 110 && abs(ly10 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(lx10 - plane_x2) <= 110 && abs(ly10 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(lx10 - plane_x3) <= 110 && abs(ly10 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(lx10 - plane_x4) <= 110 && abs(ly10 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(lx10 - helix1) <= 110 && abs(ly10 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(lx10 - helix2) <= 110 && abs(ly10 - heliy2) <= 80)
			helix2 = 1800;
	}
	if (las1 == 1){
		if (abs(bigx1 - plane_x1) <= 1050 && abs(bigy1 - plane_y1) <= 58)
			plane_x1 = 1800;
		if (abs(bigx1 - plane_x2) <= 1050 && abs(bigy1 - plane_y2) <= 58)
			plane_x2 = 1800;
		if (abs(bigx1 - plane_x3) <= 1050 && abs(bigy1 - plane_y3) <= 58)
			plane_x3 = 1800;
		if (abs(bigx1 - plane_x4) <= 1050 && abs(bigy1 - plane_y4) <= 58)
			plane_x4 = 1800;
		if (abs(bigx1 - helix1) <= 1050 && abs(bigy1 - heliy1) <= 80)
			helix1 = 1800;
		if (abs(bigx1 - helix2) <= 1050 && abs(bigy1 - heliy2) <= 80)
			helix2 = 1800;
	}
	
}

void crashit(){
	if(crash >=1){
		crash++;
		if(crash > 4){
			crash = 0;
			//mainy = 100;
			//mainx = 50;
			life++;
		}
	}
}

void HeliMovement(){
	heli = 1;
	
}


void iMouseMove(int mx, int my)
{
	
}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
			
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}


void iPassiveMouseMove(int mx,int my)
{
	
	
 mposx = mx;
 mposy = my;
 if(mx== 2){}        
 else if(my== 2){}   
  
}


void iKeyboard(unsigned char key)
{
	if(key == 'w')
	{
		mainy += 35;
	}
	if (key == 's')
	{
		mainy -= 35;
	}
	if (key == ' '){
		
		if(hero >=2)
		hero = 0;
		hero++;
		las++;


		if (las == 1){
			lx1 = mainx + 70;
			ly1 = mainy + 70;
		}
		if (las == 2){
			lx2 = mainx + 70;
			ly2 = mainy + 70;
		}
		if (las == 3){
			lx3 = mainx + 70;
			ly3 = mainy + 70;
		}
		if (las == 4){
			lx4 = mainx + 70;
			ly4 = mainy + 70;
		}
		if (las == 5){
			lx5 = mainx + 70;
			ly5 = mainy + 70;
		}
		if (las == 6){
			lx6 = mainx + 70;
			ly6 = mainy + 70;
		}
		if (las == 7){
			lx7 = mainx + 70;
			ly7 = mainy + 70;
		}
		if (las == 8){
			lx8 = mainx + 70;
			ly8 = mainy + 70;
		}
		if (las == 9){
			lx9 = mainx + 70;
			ly9 = mainy + 70;
		}
		if (las == 10){
			lx10 = mainx + 70;
			ly10 = mainy + 70;
		}
		if (las > 10 && lx10 >= 980){
			las = 1;
		}
	}
	if (key == 'b')
	{
		las1++;
		if (las1 == 1){
			bigx1 = mainx + 75;
			bigy1 = mainy + 68;
		}
		
			
	}
}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	
}

int main()
{
	iSetTimer(200, BackgroundMovement);
	iSetTimer(100, EnemyMovement);
	iSetTimer(5000, HeliMovement);
	iSetTimer(1, collision);
	iSetTimer(300, crashit);
	iInitialize(1500, 1000, "Superman");
	return 0;
}	