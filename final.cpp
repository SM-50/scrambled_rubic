#include <iostream>
#include<cstdlib>
#include<conio.h>
#include<ctime>
using namespace std;
void saeed() {
	cout << "    ******     " << endl;
	cout << "  **      **   " << endl;
	cout << " *  O    O  *  " << endl;
	cout << "*     /\\     * " << endl;
	cout << " *  \\_____/ *  " << endl;
	cout << "  **       **   " << endl;
	cout << "    ******     " << endl;
	cout << "MY MY NAME IS SAEED MARDANPOUR " << endl;
	cout << "AND I AM A STUDENT OF COMPUTER ENGINEERING" << endl;
	cout << "AND THIS PROGRAM BIULD FOR HOMEWORK OF OSTAD REZA SHAMSAEI" << endl;
	cout << "THANK YOU FOR SEEING THIS PROGRAM (^_^) " << endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void charkheshrast(char mmd[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			swap(mmd[i][j], mmd[j][i]);
		}
	}
	for (int i = 0; i < 3; i++) {
		swap(mmd[i][0], mmd[i][2]);
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void charkheshchap(char mmd[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			swap(mmd[i][j], mmd[j][i]);
		}
	}
	for (int j = 0; j < 3; j++) {
		swap(mmd[0][j], mmd[2][j]);
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void rastbala(char white[3][3], char blue[3][3], char green[3][3], char yellow[3][3], char orange[3][3]) {
	char a1 = white[0][0];
	char a2 = white[1][0];
	char a3 = white[2][0];
	for (int i = 0, k = 2; i < 3; i++, k--) {
		white[i][0] = blue[k][2];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		blue[i][2] = yellow[k][0];
	}
	for (int i = 0; i < 3; i++) {
		yellow[i][0] = green[i][0];
	}
	green[0][0] = a1;
	green[1][0] = a2;
	green[2][0] = a3;
	charkheshrast(orange);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void rastdown(char white[3][3], char blue[3][3], char green[3][3], char yellow[3][3], char orange[3][3]) {
	char a1 = green[0][0];
	char a2 = green[1][0];
	char a3 = green[2][0];
	for (int i = 0; i < 3; i++) {
		green[i][0] = yellow[i][0];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		yellow[i][0] = blue[k][2];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		blue[i][2] = white[k][0];
	}
	white[0][0] = a1;
	white[1][0] = a2;
	white[2][0] = a3;
	charkheshchap(orange);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void vasatbala(char white[3][3], char blue[3][3], char green[3][3], char yellow[3][3]) {
	char a1 = white[0][1];
	char a2 = white[1][1];
	char a3 = white[2][1];
	for (int i = 0, k = 2; i < 3; i++, k--) {
		white[i][1] = blue[k][1];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		blue[i][1] = yellow[k][1];
	}
	for (int i = 0; i < 3; i++) {
		yellow[i][1] = green[i][1];
	}
	green[0][1] = a1;
	green[1][1] = a2;
	green[2][1] = a3;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void vasatdown(char white[3][3], char blue[3][3], char green[3][3], char yellow[3][3]) {
	char a1 = green[0][1];
	char a2 = green[1][1];
	char a3 = green[2][1];
	for (int i = 0; i < 3; i++) {
		green[i][1] = yellow[i][1];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		yellow[i][1] = blue[k][1];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		blue[k][1] = white[i][1];
	}
	white[0][1] = a1;
	white[1][1] = a2;
	white[2][1] = a3;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void chapbala(char white[3][3], char blue[3][3], char green[3][3], char yellow[3][3], char red[3][3]) {
	char a1 = white[0][2];
	char a2 = white[1][2];
	char a3 = white[2][2];
	for (int i = 0, k = 2; i < 3; i++, k--) {
		white[i][2] = blue[k][0];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		blue[i][0] = yellow[k][2];
	}
	for (int i = 0; i < 3; i++) {
		yellow[i][2] = green[i][2];
	}
	green[0][2] = a1;
	green[1][2] = a2;
	green[2][2] = a3;
	charkheshchap(red);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void chapdown(char white[3][3], char blue[3][3], char green[3][3], char yellow[3][3], char red[3][3]) {
	char a1 = green[0][2];
	char a2 = green[1][2];
	char a3 = green[2][2];
	for (int i = 0; i < 3; i++) {
		green[i][2] = yellow[i][2];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		yellow[i][2] = blue[k][0];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		blue[i][0] = white[k][2];
	}
	white[0][2] = a1;
	white[1][2] = a2;
	white[2][2] = a3;
	charkheshrast(red);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void jolorast(char white[3][3], char blue[3][3], char orange[3][3], char yellow[3][3], char red[3][3]) {
	char a1 = white[0][0];
	char a2 = white[0][1];
	char a3 = white[0][2];
	for (int i = 0; i < 3; i++) {
		white[0][i] = red[i][2];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		red[i][2] = yellow[2][k];
	}
	for (int i = 0; i < 3; i++) {
		yellow[2][i] = orange[i][0];
	}
	orange[0][0] = a3;
	orange[1][0] = a2;
	orange[2][0] = a1;
	charkheshrast(blue);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void jolochap(char white[3][3], char blue[3][3], char orange[3][3], char yellow[3][3], char red[3][3]) {
	char a1 = white[0][0];
	char a2 = white[0][1];
	char a3 = white[0][2];
	for (int i = 0, k = 2; i < 3; i++, k--) {
		white[0][i] = orange[k][0];
	}
	for (int i = 0; i < 3; i++) {
		orange[i][0] = yellow[2][i];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		yellow[2][i] = red[k][2];
	}
	red[0][2] = a1;
	red[1][2] = a2;
	red[2][2] = a3;
	charkheshchap(blue);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void jolovasatrast(char white[3][3], char orange[3][3], char yellow[3][3], char red[3][3]) {
	char a1 = white[1][0];
	char a2 = white[1][1];
	char a3 = white[1][2];
	for (int i = 0; i < 3; i++) {
		white[1][i] = red[i][1];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		red[i][1] = yellow[1][k];
	}
	for (int i = 0; i < 3; i++) {
		yellow[1][i] = orange[i][1];
	}
	orange[0][1] = a3;
	orange[1][1] = a2;
	orange[2][1] = a1;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void jolovasatchap(char white[3][3], char orange[3][3], char yellow[3][3], char red[3][3]) {
	char a1 = white[1][0];
	char a2 = white[1][1];
	char a3 = white[1][2];
	for (int i = 0; i < 3; i++) {
		white[1][i] = orange[i][1];
	}
	for (int i = 0; i < 3; i++) {
		orange[i][1] = yellow[1][i];
	}
	for (int i = 0, j = 2; i < 3; i++, j--) {
		yellow[1][i] = red[j][1];
	}
	red[0][1] = a1;
	red[1][1] = a2;
	red[2][1] = a3;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void joloakharyrast(char white[3][3], char green[3][3], char orange[3][3], char yellow[3][3], char red[3][3]) {
	char a1 = white[2][0];
	char a2 = white[2][1];
	char a3 = white[2][2];
	for (int i = 0; i < 3; i++) {
		white[2][i] = red[i][0];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		red[i][0] = yellow[0][k];
	}
	for (int i = 0; i < 3; i++) {
		yellow[0][i] = orange[i][2];
	}
	orange[0][2] = a3;
	orange[1][2] = a2;
	orange[2][2] = a1;
	charkheshchap(green);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void joloakharychap(char white[3][3], char green[3][3], char orange[3][3], char yellow[3][3], char red[3][3]) {
	char a1 = white[2][0];
	char a2 = white[2][1];
	char a3 = white[2][2];
	for (int i = 0, k = 2; i < 3; i++, k--) {
		white[2][i] = orange[k][2];
	}
	for (int i = 0; i < 3; i++) {
		orange[i][2] = yellow[0][i];
	}
	for (int i = 0, k = 2; i < 3; i++, k--) {
		yellow[0][i] = red[k][0];
	}
	red[0][0] = a1;
	red[1][0] = a2;
	red[2][0] = a3;
	charkheshrast(green);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void radifbalarast(char white[3][3], char green[3][3], char orange[3][3], char blue[3][3], char red[3][3]) {
	char a1 = blue[0][0];
	char a2 = blue[0][1];
	char a3 = blue[0][2];
	for (int i = 0; i < 3; i++) {
		blue[0][i] = red[0][i];
	}
	for (int i = 0; i < 3; i++) {
		red[0][i] = green[0][i];
	}
	for (int i = 0; i < 3; i++) {
		green[0][i] = orange[0][i];
	}
	orange[0][0] = a1;
	orange[0][1] = a2;
	orange[0][2] = a3;
	charkheshchap(white);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void radifbalachap(char white[3][3], char green[3][3], char orange[3][3], char blue[3][3], char red[3][3]) {
	char a1 = blue[0][0];
	char a2 = blue[0][1];
	char a3 = blue[0][2];
	for (int i = 0; i < 3; i++) {
		blue[0][i] = orange[0][i];
	}
	for (int i = 0; i < 3; i++) {
		orange[0][i] = green[0][i];
	}
	for (int i = 0; i < 3; i++) {
		green[0][i] = red[0][i];
	}
	red[0][0] = a1;
	red[0][1] = a2;
	red[0][2] = a3;
	charkheshrast(white);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void radifvasatchap(char green[3][3], char orange[3][3], char blue[3][3], char red[3][3]) {
	char a1 = blue[1][0];
	char a2 = blue[1][1];
	char a3 = blue[1][2];
	for (int i = 0; i < 3; i++) {
		blue[1][i] = orange[1][i];
	}
	for (int i = 0; i < 3; i++) {
		orange[1][i] = green[1][i];
	}
	for (int i = 0; i < 3; i++) {
		green[1][i] = red[1][i];
	}
	red[1][0] = a1;
	red[1][1] = a2;
	red[1][2] = a3;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void radifvasatrast(char green[3][3], char orange[3][3], char blue[3][3], char red[3][3]) {
	char a1 = blue[1][0];
	char a2 = blue[1][1];
	char a3 = blue[1][2];
	for (int i = 0; i < 3; i++) {
		blue[1][i] = red[1][i];
	}
	for (int i = 0; i < 3; i++) {
		red[1][i] = green[1][i];
	}
	for (int i = 0; i < 3; i++) {
		green[1][i] = orange[1][i];
	}
	orange[1][0] = a1;
	orange[1][1] = a2;
	orange[1][2] = a3;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void radifpaeinchap(char yellow[3][3], char green[3][3], char orange[3][3], char blue[3][3], char red[3][3]) {
	char a1 = blue[2][0];
	char a2 = blue[2][1];
	char a3 = blue[2][2];
	for (int i = 0; i < 3; i++) {
		blue[2][i] = orange[2][i];
	}
	for (int i = 0; i < 3; i++) {
		orange[2][i] = green[2][i];
	}
	for (int i = 0; i < 3; i++) {
		green[2][i] = red[2][i];
	}
	red[2][0] = a1;
	red[2][1] = a2;
	red[2][2] = a3;
	charkheshchap(yellow);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void radifpaeinrast(char yellow[3][3], char green[3][3], char orange[3][3], char blue[3][3], char red[3][3]) {
	char a1 = blue[2][0];
	char a2 = blue[2][1];
	char a3 = blue[2][2];
	for (int i = 0; i < 3; i++) {
		blue[2][i] = red[2][i];
	}
	for (int i = 0; i < 3; i++) {
		red[2][i] = green[2][i];
	}
	for (int i = 0; i < 3; i++) {
		green[2][i] = orange[2][i];
	}
	orange[2][0] = a1;
	orange[2][1] = a2;
	orange[2][2] = a3;
	charkheshrast(yellow);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void print(char up[3][3], char front[3][3], char down[3][3], char left[3][3], char right[3][3], char back[3][3]) {
	//این تابع برای نمایش روبیک به صورت باز شده است 
	for (int i = 0; i < 3; ++i) {
		cout << "      ";
		for (int j = 0; j < 3; ++j) {
			cout << "+---";
		}
		cout << "+\n      ";
		for (int j = 0; j < 3; ++j) {
			cout << "| " << up[i][j] << " ";
		}
		cout << "|\n";
	}
	cout << "      ";
	for (int j = 0; j < 3; ++j) {
		cout << "+---";
	}
	cout << "+\n";
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << "+---";
		}
		cout << "+ ";
		for (int j = 0; j < 3; ++j) {
			cout << "+---";
		}
		cout << "+ ";
		for (int j = 0; j < 3; ++j) {
			cout << "+---";
		}
		cout << "+ ";
		for (int j = 0; j < 3; ++j) {
			cout << "+---";
		}
		cout << "+\n";
		for (int j = 0; j < 3; ++j) {
			cout << "| " << left[i][j] << " ";
		}
		cout << "| ";
		for (int j = 0; j < 3; ++j) {
			cout << "| " << front[i][j] << " ";
		}
		cout << "| ";
		for (int j = 0; j < 3; ++j) {
			cout << "| " << right[i][j] << " ";
		}
		cout << "| ";
		for (int j = 0; j < 3; ++j) {
			cout << "| " << back[i][j] << " ";
		}
		cout << "|\n";
	}
	for (int j = 0; j < 3; ++j) {
		cout << "+---";
	}
	cout << "+ ";
	for (int j = 0; j < 3; ++j) {
		cout << "+---";
	}
	cout << "+ ";
	for (int j = 0; j < 3; ++j) {
		cout << "+---";
	}
	cout << "+ ";
	for (int j = 0; j < 3; ++j) {
		cout << "+---";
	}
	cout << "+\n";
	for (int i = 0; i < 3; ++i) {
		cout << "      ";
		for (int j = 0; j < 3; ++j) {
			cout << "+---";
		}
		cout << "+\n      ";
		for (int j = 0; j < 3; ++j) {
			cout << "| " << down[i][j] << " ";
		}
		cout << "|\n";
	}
	cout << "      ";
	for (int j = 0; j < 3; ++j) {
		cout << "+---";
	}
	cout << "+\n";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu() {//         نمایش میوووووو 
	cout << R"(
                         M     M  IIIII  OOOOO   W     W  W     W  W     W  W     W  W     W
                         MM   MM    I   O     O  W     W  W     W  W     W  W     W  W     W
                         M M M M    I   O     O  W     W  W     W  W     W  W     W  W     W
                         M  M  M    I   O     O  W  W  W  W  W  W  W  W  W  W  W  W  W  W  W
                         M     M    I   O     O  W W W W  W W W W  W W W W  W W W W  W W W W
                         M     M    I   O     O  WW   WW  WW   WW  WW   WW  WW   WW  WW   WW
                         M     M  IIIII  OOOOO   W     W  W     W  W     W  W     W  W     W
    )" << endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menuasli() {// نمایش منوی اصلی برنامه 
	cout << endl;
	cout << endl;
	cout << "                                               1) TEST RUBIK CUBE MOVES " << endl;//حرکات رو نشون میده برای تست
	cout << "                                               2) PLAY RUBIK CUBE 3*3 " << endl;//حالت بازی دارع میشع روش حرکت های متوالی زد 
	cout << "                                               3) SCRAMBLED RUBIK CUBE (MAIN WORK)  " << endl;//همون نمایش روبیک بهم ریخته
	cout << "                                               4) OBOUT DEV (^_^)  " << endl;//خودم
	cout << "                                               5) Exit  " << endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// تابع اینجا کاربرد مهمی دارع و تمامی وجه های روبیک رو به حالت اولیه بر میگردونه
void set(char(&w)[3][3], char(&b)[3][3], char(&r)[3][3], char(&g)[3][3], char(&o)[3][3], char(&y)[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			w[i][j] = 'W';
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b[i][j] = 'B';
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			r[i][j] = 'R';
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			g[i][j] = 'G';
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			o[i][j] = 'O';
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			y[i][j] = 'Y';
		}
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void namayeshharakat() {
	//تابع برای نمایش حرکات مکعب روبیک 
	cout << "                                         +====================================+\n";
	cout << "                                         |         Rubik's Cube Moves         |\n";
	cout << "                                         +====================================+\n";
	cout << "1. (Right face clockwise)  ";
	cout << "2. (Right face counter-clockwise)  ";
	cout << "3. (Left face clockwise)  ";
	cout << "4. (Left face counter-clockwise)\n";
	cout << "5  (Front face clockwise)  ";
	cout << "6  (Front face counter-clockwise)  ";
	cout << "7. (Up face clockwise)    ";
	cout << "8. (Up face counter-clockwise)\n";
	cout << "9. (Down face clockwise)   ";
	cout << "m.(Down face counter-clockwise)    ";
	cout << "n.(Back face clockwise)   ";
	cout << "b.(Back face counter-clockwise)\n";
	cout << "0.  Exit\n";
	cout << " =======================================================================================================================\n";
	cout << "                            Please note that there are additional move sets in our program, " << endl;
	cout << "                            but since these moves are not available on the website for testing, " << endl;
	cout << "                            so we are not displaying them here." << endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menubazi() {// اینم دقیقا همون بالاییه فقط اون متن های زیر رو ندارع
	cout << "                                         +====================================+\n";
	cout << "                                         |         Rubik's Cube Moves         |\n";
	cout << "                                         +====================================+\n";
	cout << "1. (Right face clockwise)  ";
	cout << "2. (Right face counter-clockwise)  ";
	cout << "3. (Left face clockwise)  ";
	cout << "4. (Left face counter-clockwise)\n";
	cout << "5  (Front face clockwise)  ";
	cout << "6  (Front face counter-clockwise)  ";
	cout << "7. (Up face clockwise)    ";
	cout << "8. (Up face counter-clockwise)\n";
	cout << "9. (Down face clockwise)   ";
	cout << "m.(Down face counter-clockwise)    ";
	cout << "n.(Back face clockwise)   ";
	cout << "b.(Back face counter-clockwise)\n";
	cout << "0.  Exit\n";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
	char white[3][3] = { 'W','W','W','W','W','W','W','W','W' };   // قدار دهای اولیه برای وجه های روبیک 
	char blue[3][3] = { 'B','B','B','B','B','B','B','B','B' };	  // مقدار دهای اولیه برای وجه های روبیک 
	char red[3][3] = { 'R','R','R','R','R','R','R','R','R' };	  // مقدار دهای اولیه برای وجه های روبیک 
	char green[3][3] = { 'G','G','G','G','G','G','G','G','G' };	  // مقدار دهای اولیه برای وجه های روبیک 
	char orange[3][3] = { 'O','O','O','O','O','O','O','O','O' };  // مقدار دهای اولیه برای وجه های روبیک  
	char yellow[3][3] = { 'Y','Y','Y','Y','Y','Y','Y','Y','Y' };  // مقدار دهای اولیه برای وجه های روبیک 
	char x;	//متغیر های برای سووچ کیس ها
	char y;	//متغیر های برای سووچ کیس ها
	char t;	//متغیر های برای سووچ کیس ها
	srand(time(0)); //بخش اصلی برنامه برای که تولید میکنه یک مکعب روبیک بهم ریخته رو 
	int r1 = rand() % 50 + 20;
	int r2 = rand() % 2 + 1;
	int r3 = rand() % 5 + 2;
	int r5 = rand() % 100 + 5;
	system("color 01");
	do {
		system("color 01");
		system("cls");
		menu();
		menuasli();
		x = _getch();
		switch (x) {
		case '1':
			system("color 16");
			system("cls");
			cout << "                              you can trace the moves in (https://rubiks-cube-solver.com) " << endl;
			cout << "                                      (O_O) DONT CLICK ON THE LINK PLEASE (O_O)          " << endl;
			do {
				cout << "                +========================================================================================+\n";
				cout << "                |front = BLUE    up = WHITE    down = YELOW   right = ORANGE   left = RED   back = GREEN |" << endl;
				cout << "                +========================================================================================+\n";
				namayeshharakat();
				set(white, blue, red, green, orange, yellow);
				y = _getch();
				switch (y) {
				case '1':
					rastbala(white, blue, green, yellow, orange);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case '2':
					rastdown(white, blue, green, yellow, orange);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case '3':
					chapbala(white, blue, green, yellow, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case '4':
					chapdown(white, blue, green, yellow, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case '5':
					jolorast(white, blue, orange, yellow, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case '6':
					jolochap(white, blue, orange, yellow, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case '7':
					radifbalarast(white, green, orange, blue, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case '8':
					radifbalarast(white, green, orange, blue, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case '9':
					radifpaeinrast(yellow, green, orange, blue, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case 'm':
					radifpaeinchap(yellow, green, orange, blue, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case 'n':
					joloakharychap(white, green, orange, yellow, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case 'b':
					joloakharyrast(white, green, orange, yellow, red);
					print(white, blue, yellow, red, orange, green);
					system("pause");
					system("cls");
					break;
				case '0':
					exit;
					system("cls");
					break;
				default:
					cout << "                            !!!! please enter a number from menu !!!!" << endl;
					system("pause");
					system("cls");
					break;
				}
			} while (y != '0');
			system("cls");
			break;
		case '2':
			system("color 0A");
			set(white, blue, red, green, orange, yellow);
			system("cls");
			do {
				print(white, blue, yellow, red, orange, green);
				cout << "                +========================================================================================+\n";
				cout << "                |front = BLUE    up = WHITE    down = YELOW   right = ORANGE   left = RED   back = GREEN |" << endl;
				cout << "                +========================================================================================+\n";
				menubazi();
				t = _getch();
				switch (t) {
				case '1':
					rastbala(white, blue, green, yellow, orange);
					system("cls");
					break;
				case '2':
					rastdown(white, blue, green, yellow, orange);
					system("cls");
					break;
				case '3':
					chapbala(white, blue, green, yellow, red);
					system("cls");
					break;
				case '4':
					chapdown(white, blue, green, yellow, red);
					system("cls");
					break;
				case '5':
					jolorast(white, blue, orange, yellow, red);
					system("cls");
					break;
				case '6':
					jolochap(white, blue, orange, yellow, red);
					system("cls");
					break;
				case '7':
					radifbalarast(white, green, orange, blue, red);
					system("cls");
					break;
				case '8':
					radifbalarast(white, green, orange, blue, red);
					system("cls");
					break;
				case '9':
					radifpaeinrast(yellow, green, orange, blue, red);
					system("cls");
					break;
				case 'm':
					radifpaeinchap(yellow, green, orange, blue, red);
					system("cls");
					break;
				case 'n':
					joloakharychap(white, green, orange, yellow, red);
					system("cls");
					break;
				case 'b':
					joloakharychap(white, green, orange, yellow, red);
					system("cls");
					break;
				case '0':
					exit;
					set(white, blue, red, green, orange, yellow);
					system("cls");
					break;
				default:
					cout << "                            !!!! please enter a number from menu !!!!" << endl;
					system("pause");
					system("cls");
					break;
				}
			} while (t != '0');
			system("cls");
			break;
		case '3':
			system("color 74");
			system("cls");
			set(white, blue, red, green, orange, yellow);
			cout << "                +========================================================================================+\n";
			cout << "                |                                THIS IS A SCRABLED RUBIK                                |" << endl;
			cout << "                +========================================================================================+\n";
			for (int i = 0; i < r3; ++i) {
				rastbala(white, blue, green, yellow, orange);
			}
			for (int i = 0; i < r1; ++i) {
				rastdown(white, blue, green, yellow, orange);
			}
			for (int i = 0; i < r2; ++i) {
				vasatbala(white, blue, green, yellow);
			}
			for (int i = 0; i < r5; ++i) {
				vasatdown(white, blue, green, yellow);
			}
			for (int i = 0; i < r1; ++i) {
				chapbala(white, blue, green, yellow, red);
			}
			for (int i = 0; i < r3; ++i) {
				chapdown(white, blue, green, yellow, red);
			}
			for (int i = 0; i < r5; ++i) {
				jolorast(white, blue, orange, yellow, red);
			}
			for (int i = 0; i < r2; ++i) {
				jolochap(white, blue, orange, yellow, red);
			}
			for (int i = 0; i < r2; ++i) {
				jolovasatrast(white, orange, yellow, red);
			}
			for (int i = 0; i < r1; ++i) {
				jolovasatchap(white, orange, yellow, red);
			}
			for (int i = 0; i < r3; ++i) {
				joloakharyrast(white, green, orange, yellow, red);
			}
			for (int i = 0; i < r2; ++i) {
				joloakharychap(white, green, orange, yellow, red);
			}
			for (int i = 0; i < r5; ++i) {
				radifpaeinrast(yellow, green, orange, blue, red);
			}
			for (int i = 0; i < r2; ++i) {
				radifpaeinrast(yellow, green, orange, blue, red);
			}
			for (int i = 0; i < r5; ++i) {
				radifvasatrast(green, orange, blue, red);
			}
			for (int i = 0; i < r2; ++i) {
				radifvasatchap(green, orange, blue, red);
			}
			print(white, blue, yellow, red, orange, green);
			system("pause");
			system("cls");
			break;
		case '4':
			system("color 47");
			system("cls");
			saeed();
			system("pause");
			system("cls");
			break;
		case '5':
			exit;
			system("cls");
			break;
		default:
			cout << "!!!!please enter a number from menu !!!!";
			system("pause");
			system("cls");
			break;
		}
	} while (x != '5');
	return 0;
}//TAMAM SHOD