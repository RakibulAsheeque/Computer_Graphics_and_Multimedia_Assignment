
/*Please note that no comments have been added as of 31/05/2018 23:45
  Any comments present are for program creator's understanding only.
  Please ignore them.
  Comments for uderstanding the code will be added later.*/ 
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void hcom1(int h,int v,int tx,int ty)
{
//Horizontal component1

line(20+tx,20+ty,50+tx,20+ty);
line(20+tx,30+ty,50+tx,30+ty);
line(15+tx,25+ty,20+tx,30+ty);
line(20+tx,20+ty,15+tx,25+ty);
line(55+tx,25+ty,50+tx,20+ty);
line(55+tx,25+ty,50+tx,30+ty);
floodfill(25+tx,21+ty,RED);
}
void vcom11(int h,int v,int tx,int ty)
{
//Vertical component11
line(15+tx,25+ty,20+tx,30+ty);
line(15+tx,25+ty,10+tx,30+ty);
line(10+tx,30+ty,10+tx,60+ty);
line(20+tx,30+ty,20+tx,60+ty);
line(15+tx,65+ty,10+tx,60+ty);
line(15+tx,65+ty,20+tx,60+ty);
floodfill(15+tx,26+ty,RED);
}
void vcom12(int h,int v,int tx,int ty)
{
//Vertical component12
line(15+h+tx,25+ty,20+h+tx,30+ty);
line(15+h+tx,25+ty,10+h+tx,30+ty);
line(10+h+tx,30+ty,10+h+tx,60+ty);
line(20+h+tx,30+ty,20+h+tx,60+ty);
line(15+h+tx,65+ty,10+h+tx,60+ty);
line(15+h+tx,65+ty,20+h+tx,60+ty);
floodfill(15+h+tx,26+ty,RED);
}
void hcom2(int h,int v,int tx,int ty)
{
//Horizontal component2
line(20+tx,20+v+ty,50+tx,20+v+ty);
line(20+tx,30+v+ty,50+tx,30+v+ty);
line(15+tx,25+v+ty,20+tx,30+v+ty);
line(20+tx,20+v+ty,15+tx,25+v+ty);
line(55+tx,25+v+ty,50+tx,20+v+ty);
line(55+tx,25+v+ty,50+tx,30+v+ty);
floodfill(20+tx,21+v+ty,RED);
}
void vcom21(int h,int v,int tx,int ty)
{
//Vertical component21
line(15+tx,25+v+ty,20+tx,30+v+ty);
line(15+tx,25+v+ty,10+tx,30+v+ty);
line(10+tx,30+v+ty,10+tx,60+v+ty);
line(20+tx,30+v+ty,20+tx,60+v+ty);
line(15+tx,65+v+ty,10+tx,60+v+ty);
line(15+tx,65+v+ty,20+tx,60+v+ty);
floodfill(15+tx,26+v+ty,RED);
}
void vcom22(int h,int v,int tx,int ty)
{
//Vertical component22
line(15+h+tx,25+v+ty,20+h+tx,30+v+ty);
line(15+h+tx,25+v+ty,10+h+tx,30+v+ty);
line(10+h+tx,30+v+ty,10+h+tx,60+v+ty);
line(20+h+tx,30+v+ty,20+h+tx,60+v+ty);
line(15+h+tx,65+v+ty,10+h+tx,60+v+ty);
line(15+h+tx,65+v+ty,20+h+tx,60+v+ty);
floodfill(15+h+tx,26+v+ty,RED);
}
void hcom3(int h,int v,int tx,int ty)
{
//Horizontal component3
line(20+tx,20+(2*v)+ty,50+tx,20+(2*v)+ty);
line(20+tx,30+(2*v)+ty,50+tx,30+(2*v)+ty);
line(15+tx,25+(2*v)+ty,20+tx,30+(2*v)+ty);
line(20+tx,20+(2*v)+ty,15+tx,25+(2*v)+ty);
line(55+tx,25+(2*v)+ty,50+tx,20+(2*v)+ty);
line(55+tx,25+(2*v)+ty,50+tx,30+(2*v)+ty);
floodfill(20+tx,21+(2*v)+ty,RED);
}
void num8(int h,int v,int tx,int ty)
{
vcom11(h,v,tx,ty);
vcom12(h,v,tx,ty);
vcom21(h,v,tx,ty);
vcom22(h,v,tx,ty);
hcom1(h,v,tx,ty);
hcom2(h,v,tx,ty);
hcom3(h,v,tx,ty);
}
void num9(int h,int v,int tx,int ty)
{
vcom11(h,v,tx,ty);
vcom12(h,v,tx,ty);
vcom22(h,v,tx,ty);
hcom1(h,v,tx,ty);
hcom2(h,v,tx,ty);
hcom3(h,v,tx,ty);
}
void num7(int h,int v,int tx,int ty)
{
vcom12(h,v,tx,ty);
vcom22(h,v,tx,ty);
hcom1(h,v,tx,ty);
}
void num6(int h,int v,int tx,int ty)
{
vcom11(h,v,tx,ty);
vcom21(h,v,tx,ty);
vcom22(h,v,tx,ty);
hcom1(h,v,tx,ty);
hcom2(h,v,tx,ty);
hcom3(h,v,tx,ty);
}
void num5(int h,int v,int tx,int ty)
{
vcom11(h,v,tx,ty);
vcom22(h,v,tx,ty);
hcom1(h,v,tx,ty);
hcom2(h,v,tx,ty);
hcom3(h,v,tx,ty);
}
void num4(int h,int v,int tx,int ty)
{
vcom11(h,v,tx,ty);
vcom12(h,v,tx,ty);
vcom22(h,v,tx,ty);
hcom2(h,v,tx,ty);
}
void num3(int h,int v,int tx,int ty)
{
vcom12(h,v,tx,ty);
vcom22(h,v,tx,ty);
hcom1(h,v,tx,ty);
hcom2(h,v,tx,ty);
hcom3(h,v,tx,ty);
}
void num2(int h,int v,int tx,int ty)
{
vcom12(h,v,tx,ty);
vcom21(h,v,tx,ty);
hcom1(h,v,tx,ty);
hcom2(h,v,tx,ty);
hcom3(h,v,tx,ty);
}
void num1(int h,int v,int tx,int ty)
{
vcom12(h,v,tx,ty);
vcom22(h,v,tx,ty);
}
void num0(int h,int v,int tx,int ty)
{
vcom11(h,v,tx,ty);
vcom12(h,v,tx,ty);
vcom21(h,v,tx,ty);
vcom22(h,v,tx,ty);
hcom1(h,v,tx,ty);
hcom3(h,v,tx,ty);
}
void small_hcom1(int tx,int ty)
{
line(10+tx,20+ty,50+tx,20+ty);
line(15+tx,25+ty,45+tx,25+ty);
line(10+tx,20+ty,15+tx,25+ty);
line(50+tx,20+ty,45+tx,25+ty);
floodfill(12+tx,21+ty,RED);
}
void small_hcom2(int tx,int ty)
{
line(13+tx,60+ty,15+tx,57+ty);
line(13+tx,60+ty,15+tx,63+ty);
line(45+tx,57+ty,48+tx,60+ty);
line(48+tx,60+ty,45+tx,63+ty);
line(15+tx,57+ty,45+tx,57+ty);
line(15+tx,63+ty,45+tx,63+ty);
floodfill(15+tx,61+ty,RED);
}
void mid(int tx,int ty)
{
line(30+tx,25+ty,32+tx,28+ty);
line(28+tx,28+ty,30+tx,25+ty);
line(28+tx,55+ty,28+tx,28+ty);
line(32+tx,28+ty,32+tx,55+ty);
line(28+tx,55+ty,30+tx,57+ty);
line(30+tx,57+ty,32+tx,55+ty);
floodfill(30+tx,26+ty,RED);
}
void mid2(int tx,int ty)
{
line(30+tx,25+38+ty,32+tx,28+38+ty);
line(28+tx,28+38+ty,30+tx,25+38+ty);
line(28+tx,55+38+ty,28+tx,28+38+ty);
line(32+tx,28+38+ty,32+tx,55+38+ty);
line(28+tx,55+36+ty,30+tx,57+36+ty);
line(30+tx,57+36+ty,32+tx,55+36+ty);
floodfill(30+tx,26+38+ty,RED);
}
void small_vcom12(int tx,int ty)
{
line(45+tx,25+ty,50+tx,20+ty);
line(45+tx,25+ty,45+tx,57+ty);
line(50+tx,20+ty,50+tx,57+ty);
line(45+tx,57+ty,48+tx,60+ty);
line(50+tx,57+ty,48+tx,60+ty);
floodfill(46+tx,26+ty,RED);
}
void small_vcom22(int tx,int ty)
{
line(48+tx,60+ty,50+tx,63+ty);
line(48+tx,60+ty,45+tx,63+ty);
line(45+tx,93+ty,45+tx,63+ty);
line(50+tx,63+ty,50+tx,98+ty);
line(45+tx,93+ty,50+tx,98+ty);
floodfill(48+tx,61+ty,RED);
}
void small_spl_n(int tx,int ty)
{
line(15+tx,27+ty,15+tx,30+ty);
line(15+tx,27+ty,18+tx,27+ty);
line(15+tx,30+ty,42+tx,57+ty);
line(18+tx,27+ty,45+tx,54+ty);
line(45+tx,57+ty,45+tx,54+ty);
line(42+tx,57+ty,45+tx,57+ty);
floodfill(16+tx,28+ty,RED);
}
void small_spl_v(int tx,int ty)
{
line(15+tx,93+ty,15+tx,90+ty);
line(15+tx,93+ty,18+tx,93+ty);
line(15+tx,90+ty,45+tx,57+ty);
line(18+tx,93+ty,45+tx,63+ty);
line(45+tx,57+ty,48+tx,60+ty);
line(48+tx,60+ty,45+tx,63+ty);
floodfill(16+tx,91+ty,RED);
}
void small_spl_r(int tx,int ty)
{
line(15+tx,27+38+ty,15+tx,30+38+ty);
line(15+tx,27+38+ty,18+tx,27+38+ty);
line(15+tx,30+38+ty,42+tx,57+38+ty);
line(18+tx,27+38+ty,45+tx,54+38+ty);
line(45+tx,57+38+ty,45+tx,54+38+ty);
line(42+tx,57+38+ty,45+tx,57+38+ty);
floodfill(16+tx,28+38+ty,RED);
}
void small_vcom11(int tx,int ty)
{
line(15+tx,25+ty,15+tx,57+ty);
line(10+tx,20+ty,15+tx,27+ty);
line(10+tx,20+ty,10+tx,57+ty);
line(15+tx,57+ty,13+tx,60+ty);
line(13+tx,60+ty,10+tx,57+ty);
floodfill(13+tx,55+ty,RED);
}
void small_vcom21(int tx,int ty)
{
line(13+tx,60+ty,15+tx,63+ty);
line(13+tx,60+ty,10+tx,63+ty); 
line(10+tx,63+ty,10+tx,98+ty);
line(15+tx,63+ty,15+tx,93+ty);
line(15+tx,93+ty,10+tx,98+ty);
floodfill(13+tx,61+ty,RED);
}
void small_hcom3(int tx,int ty)
{
line(15+tx,93+ty,45+tx,93+ty);
line(10+tx,98+ty,50+tx,98+ty);
line(10+tx,98+ty,15+tx,93+ty);
line(45+tx,93+ty,50+tx,98+ty);
floodfill(15+tx,94+ty,RED);

} 
void small_hcom1b(int tx,int ty)
{
line(10+tx,20+ty,45+tx,20+ty);
line(15+tx,25+ty,45+tx,25+ty);
line(10+tx,20+ty,15+tx,25+ty);
line(48+tx,22+ty,45+tx,20+ty);
line(48+tx,22+ty,45+tx,25+ty);
floodfill(12+tx,21+ty,RED);
}
void small_vcom12b(int tx,int ty)
{
line(48+tx,22+ty,50+tx,25+ty);
line(45+tx,25+ty,48+tx,22+ty);
line(45+tx,25+ty,45+tx,57+ty);
line(50+tx,25+ty,50+tx,57+ty);
line(45+tx,57+ty,48+tx,60+ty);
line(50+tx,57+ty,48+tx,60+ty);
floodfill(48+tx,23+ty,RED);
}
void small_vcom22b(int tx,int ty)
{
line(48+tx,60+ty,50+tx,63+ty);
line(48+tx,60+ty,45+tx,63+ty);
line(45+tx,93+ty,45+tx,63+ty);
line(50+tx,63+ty,50+tx,93+ty);
line(45+tx,93+ty,48+tx,95+ty);
line(50+tx,93+ty,48+tx,95+ty);
floodfill(48+tx,61+ty,RED);
}
void small_hcom3b(int tx,int ty)
{

line(15+tx,93+ty,45+tx,93+ty);
line(10+tx,98+ty,45+tx,98+ty);
line(10+tx,98+ty,15+tx,93+ty);
line(45+tx,93+ty,48+tx,95+ty);
line(45+tx,98+ty,48+tx,95+ty);
floodfill(15+tx,94+ty,RED);
}
void small_hcom2g(int tx,int ty)
{
line(31+tx,60+ty,35+tx,57+ty);
line(31+tx,60+ty,35+tx,63+ty);
line(45+tx,57+ty,48+tx,60+ty);
line(48+tx,60+ty,45+tx,63+ty);
line(35+tx,57+ty,45+tx,57+ty);
line(35+tx,63+ty,45+tx,63+ty);
floodfill(45+tx,58+ty,RED);
}
void small_vcom21j(int tx,int ty)
{
line(13+tx,80+ty,15+tx,83+ty);
line(13+tx,80+ty,10+tx,83+ty); 
line(10+tx,83+ty,10+tx,98+ty);
line(15+tx,83+ty,15+tx,93+ty);
line(15+tx,93+ty,10+tx,98+ty);
floodfill(13+tx,81+ty,RED);
}
void charA(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void charB(int tx,int ty)
{
small_hcom1b(tx,ty);
small_hcom2(tx,ty);
small_hcom3b(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12b(tx,ty);
small_vcom22b(tx,ty);
}
void charC(int tx,int ty)
{
small_hcom1(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_hcom3(tx,ty);
}
void charD(int tx,int ty)
{
small_hcom1b(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12b(tx,ty);
small_vcom22b(tx,ty);
small_hcom3b(tx,ty);
}

void charE(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
}
void charF(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
}
void charG(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2g(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom22(tx,ty);
}
void charH(int tx,int ty)
{
small_hcom2(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void charI(int tx,int ty)
{
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void charJ(int tx,int ty)
{
small_vcom21j(tx,ty);
small_hcom3(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void charL(int tx,int ty)
{
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
}
void charM(int tx,int ty)
{
small_hcom1(tx,ty);
mid(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void charN(int tx,int ty)
{
small_spl_n(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void charO(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void charP(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
}
void charR(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_spl_r(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
}
void charS(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom22(tx,ty);
}
void charT(int tx,int ty)
{
small_hcom1(tx,ty);
mid(tx,ty);
mid2(tx,ty);
}
void charU(int tx,int ty)
{
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void charV(int tx,int ty)
{
small_spl_v(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
}
void charW(int tx,int ty)
{

mid2(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void charY(int tx,int ty)
{
mid2(tx,ty);
small_hcom2(tx,ty);
small_vcom11(tx,ty);
small_vcom12(tx,ty);
}
void small_num8(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void small_num0(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void small_num1(int tx,int ty)
{
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void small_num2(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_hcom3(tx,ty);
small_vcom21(tx,ty);
small_vcom12(tx,ty);
}
void small_num3(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_hcom3(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void small_num4(int tx,int ty)
{
small_hcom2(tx,ty);
small_vcom11(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void small_num5(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom22(tx,ty);
}
void small_num6(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom21(tx,ty);
small_vcom22(tx,ty);
}
void small_num7(int tx,int ty)
{
small_hcom1(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void small_num9(int tx,int ty)
{
small_hcom1(tx,ty);
small_hcom2(tx,ty);
small_hcom3(tx,ty);
small_vcom11(tx,ty);
small_vcom12(tx,ty);
small_vcom22(tx,ty);
}
void date(int value,int tx,int ty)
{
switch(value)
{
case 0: small_num0(tx,ty);
	break;
case 1: small_num1(tx,ty);
	break;
case 2: small_num2(tx,ty);
	break;
case 3: small_num3(tx,ty);
	break;
case 4: small_num4(tx,ty);
	break;
case 5: small_num5(tx,ty);
	break;
case 6: small_num6(tx,ty);
	break;
case 7: small_num7(tx,ty);
	break;
case 8: small_num8(tx,ty);
	break;
case 9: small_num9(tx,ty);
	break;
}
}
void month(int value,int tx,int ty)
{
int tx1=tx+10,tx2=tx1+50,tx3=tx2+50;
switch(value)
{
case 0: charJ(tx1,ty);
	charA(tx2,ty);
	charN(tx3,ty);
	break;
case 1: charF(tx1,ty);
	charE(tx2,ty);
	charB(tx3,ty);
	break;
case 2: charM(tx1,ty);
	charA(tx2,ty);
	charR(tx3,ty);
	break;
case 3: charA(tx1,ty);
	charP(tx2,ty);
	charR(tx3,ty);
	break;
case 4: charM(tx1,ty);
	charA(tx2,ty);
	charY(tx3,ty);
	break;
case 5: charJ(tx1,ty);
	charU(tx2,ty);
	charN(tx3,ty);
	break;
case 6: charJ(tx1,ty);
	charU(tx2,ty);
	charL(tx3,ty);
	break;
case 7: charA(tx1,ty);
	charU(tx2,ty);
	charG(tx3,ty);
	break;
case 8: charS(tx1,ty);
	charE(tx2,ty);
	charP(tx3,ty);
	break;
case 9: charO(tx1,ty);
	charC(tx2,ty);
	charT(tx3,ty);
	break;
case 10: charN(tx1,ty);
	 charO(tx2,ty);
	 charV(tx3,ty);
	 break;
case 11: charD(tx1,ty);
	 charE(tx2,ty);
	 charC(tx3,ty);
	 break;
}

}
void day_of_week(int wday)
{
int ty=150,tx1=100,tx2=150,tx3=200,tx4=250,tx5=300,tx6=350,tx7=400,tx8=450,tx9=500;
switch(wday)
{
case 1: charM(tx1+50,ty);
	charO(tx2+50,ty);
	charN(tx3+50,ty);
	charD(tx4+50,ty);
	charA(tx5+50,ty);
	charY(tx6+50,ty);
	break;
case 2: charT(tx1,ty);
	charU(tx2,ty);
	charE(tx3,ty);
	charS(tx4,ty);
	charD(tx5,ty);
	charA(tx6,ty);
	charY(tx7,ty);
	break;
case 3: charW(tx1,ty);
	charE(tx2,ty);
	charD(tx3,ty);
	charN(tx4,ty);
	charE(tx5,ty);
	charS(tx6,ty);
	charD(tx7,ty);
	charA(tx8,ty);
	charY(tx9,ty);
	break;
case 4: charT(tx1,ty);
	charH(tx2,ty);
	charU(tx3,ty);
	charR(tx4,ty);
	charS(tx5,ty);
	charD(tx6,ty);
	charA(tx7,ty);
	charY(tx8,ty);
	break;
case 5: charF(tx1+50,ty);
	charR(tx2+50,ty);
	charI(tx3+50,ty);
	charD(tx4+50,ty);
	charA(tx5+50,ty);
	charY(tx6+50,ty);
	break;
case 6: charS(tx1,ty);
	charA(tx2,ty);
	charT(tx3,ty);
	charU(tx4,ty);
	charR(tx5,ty);
	charD(tx6,ty);
	charA(tx7,ty);
	charY(tx8,ty);
	break;
case 0: charS(tx1+50,ty);
	charU(tx2+50,ty);
	charN(tx3+50,ty);
	charD(tx4+50,ty);
	charA(tx5+50,ty);
	charY(tx6+50,ty);
	break;
}
}
void digit(int value,int tx,int ty)
{
int h=40,v=40;
switch(value)
{
case 0: num0(h,v,tx,ty);
	break;
case 1: num1(h,v,tx,ty);
	break;
case 2: num2(h,v,tx,ty);
	break;
case 3: num3(h,v,tx,ty);
	break;
case 4: num4(h,v,tx,ty);
	break;
case 5: num5(h,v,tx,ty);
	break;
case 6: num6(h,v,tx,ty);
	break;
case 7: num7(h,v,tx,ty);
	break;
case 8: num8(h,v,tx,ty);
	break;
case 9: num9(h,v,tx,ty);
	break;
}
}

int main()
{
int gd = DETECT, gm;
int a[]={15,28,20,33,20,63,15,68,10,63,10,33,15,28};
initgraph (&gd, &gm, "");
do
{  
setcolor(RED);
time_t current;
struct tm *current_time;
int hour,min,sec,wday;
current = time(NULL);
current_time = localtime(&current);
hour = current_time->tm_hour;
min = current_time->tm_min;
sec = current_time->tm_sec;
wday=current_time->tm_wday;
int mon=current_time->tm_mon;
int mday=current_time->tm_mday;
int year=(current_time->tm_year)+1900;

if(hour<12)
	{
	charA(500,40);
	charM(550,40);
	}
else
	{
	charP(500,40);
	charM(550,40);
	}
if(hour==12)
{
hour=12;
}
else
{
hour=hour%12;
}
int h1 = hour/10;
int h2 = hour%10;
int m1 = min/10;
int m2 = min%10;
int s1 = sec/10;
int s2 = sec%10;
int d1 = mday/10;
int d2 = mday%10;
int y4 = year%10;
int temp1 = year/10;
int y3 = temp1%10;
int temp2 = temp1/10;
int y2 = temp2%10;
int y1 = temp2/10;
      //Hours
      digit(h1,50,30);
      digit(h2,110,30);
      
      //space for colon
	setcolor(RED);
	circle(200,80,5);
	floodfill(200,81,RED);
       setcolor(RED);
	circle(200,120,5);
	floodfill(200,121,RED);
      
      //Minutes
      digit(m1,190+20,30);
      digit(m2,250+20,30);
      
	//space for colon
	setcolor(RED);
	circle(355,80,5);
	floodfill(355,81,RED);
       setcolor(RED);
	circle(355,120,5);
	floodfill(355,121,RED);
      
      //Second
      digit(s1,330+40,30);
      digit(s2,390+40,30);

	//Day
	day_of_week(wday);
	//Date
	date(d1,30,260);
	date(d2,90,260);
	date(y1,380,260);
	date(y2,430,260);
	date(y3,480,260);
	date(y4,530,260);
	month(mon,180,260);
delay(1000);
cleardevice();
}while(1);
return 0;   
}




