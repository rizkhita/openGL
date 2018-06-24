#include<Windows.h>
#include<GL\glut.h>


void init()
{
    glClearColor(0.4, 0.3, 0.2, 0.0); //background
    glMatrixMode(GL_PROJECTION); 
    gluOrtho2D(50, 1100, 0.0, 800);       
}

void suasanakoding()
{
   //hiasan dinding
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.4, 0.0, 0.3); //pink tua		  
    glBegin(GL_POLYGON); //segi panjang
    glVertex2i(200,  650);  //a
    glVertex2i(700,  650);	//b
    glVertex2i(700,  600);	//c
    glVertex2i(200,  600);	//d
    glEnd();
    
	//hiasan dinding pink muda
    glColor3f(0.5, 0.2, 0.4);		  
    glBegin(GL_POLYGON);
    glVertex2i(200,  650);   
    glVertex2i(700,  650);	
    glVertex2i(750,  625);	
    glVertex2i(150,  625);	
    glEnd();
    
	//hiasan segitiga	
    glColor3f(1.0, 0.5, 0.0); //orange terang	  
    glBegin(GL_TRIANGLES);
    glVertex2i(300,  635);   //a
    glVertex2i(350,  700);	 //b
    glVertex2i(400,  635);	 //c
    glEnd();
    
    
    //hiasan segitiga 2	
    glColor3f(1.0, 0.4, 0.0);		  
    glBegin(GL_TRIANGLES);
    glVertex2i(450,  635);   
    glVertex2i(500,  700);	
    glVertex2i(550,  635);	
    glEnd();
    
    
	//PAPAN MEJA    
    glColor3f(0.3, 0.5, 0.8);		  
    glBegin(GL_POLYGON);
    glVertex2i(200, 500);   
    glVertex2i(700, 500);	
    glVertex2i(800, 300);	
    glVertex2i(100, 300);	
    glEnd();
    
    //KAKI MEJA KIRI    
    glColor3f(0.1, 0.2, 0.1);	  
    glBegin(GL_POLYGON);
    glVertex2i(100, 300);   
    glVertex2i(140, 300);	
    glVertex2i(140, 100);	
    glVertex2i(100, 100);	
    glEnd();
    
    //KAKI MEJA KANAN    
    glColor3f(0.1, 0.2, 0.1);		  
    glBegin(GL_POLYGON);
    glVertex2i(760, 300);   
    glVertex2i(800, 300);	
    glVertex2i(800, 100);	
    glVertex2i(760, 100);	
    glEnd();
    
    //KAKI MEJA KIRI BELAKANG
    glColor3f(0.1, 0.2, 0.1);		  
    glBegin(GL_POLYGON);
    glVertex2i(200, 300);   
    glVertex2i(230, 300);	
    glVertex2i(230, 230);	
    glVertex2i(200, 230);	
    glEnd();
    
    //KAKI MEJA KANAN BELAKANG
    glColor3f(0.1, 0.2, 0.1);		  
    glBegin(GL_POLYGON);
    glVertex2i(700, 300);   
    glVertex2i(670, 300);	
    glVertex2i(670, 230);	
    glVertex2i(700, 230);	
    glEnd();
    
    
    //Bangku
    //dudukan
    glColor3f(0.1, 0.1, 0.8);	  
    glBegin(GL_POLYGON);
    glVertex2i(300, 260);   
    glVertex2i(600, 260);	
    glVertex2i(640, 180);	
    glVertex2i(240, 180);	
    glEnd();
    //papan bangku
    glColor3f(0.1, 0.2, 0.1);		  
    glBegin(GL_POLYGON);
    glVertex2i(640, 180);   
    glVertex2i(240, 180);	
    glVertex2i(240, 80);	
    glVertex2i(640, 80);	
    glEnd();
    
    
	//laptop
	//Laptop Bawah    
    glColor3f(0.1, 0.1, 0.8);	//warna biru	  
    glBegin(GL_POLYGON);
    glVertex2i(340, 460);   
    glVertex2i(480, 460);	
    glVertex2i(500, 380);	
    glVertex2i(300, 380);	
    glEnd();
	
	//Layar Laptop    
    glColor3f(0.5, 0.2, 0.4);		  
    glBegin(GL_POLYGON);
    glVertex2i(340, 560);   
    glVertex2i(480, 560);	
    glVertex2i(480, 460);	
    glVertex2i(340, 460);	
    glEnd();
    
    //Layar Laptop Kaca    
    glColor3f(0.1, 0.2, 0.1);		  
    glBegin(GL_POLYGON);
    glVertex2i(350, 550);   
    glVertex2i(470, 550);	
    glVertex2i(470, 470);	
    glVertex2i(350, 470);	
    glEnd();
    
    //Keyboard
	glColor3f(0.5, 0.2, 0.4);		  
    glBegin(GL_POLYGON);
    glVertex2i(360, 440);  
    glVertex2i(450, 440);		
    glVertex2i(460, 400);		
    glVertex2i(340, 400);		
    glEnd();
    
	//garis batas laptop
    glColor3f(0.1, 0.2, 0.1);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2i(340, 460); 
    glVertex2i(480, 460);
    glEnd();
    
    
    // Kue
    //piring
    glColor3f(0.1, 0.1, 0.1);		  
    glBegin(GL_POLYGON);
    glVertex2i(510, 370);
    glVertex2i(550, 420);   
    glVertex2i(700, 420);
	glVertex2i(750, 370);	
    glVertex2i(700, 320);	
    glVertex2i(550, 320);	
    glEnd();
    
    // Atas Kue
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(570, 400);
    glVertex2i(650, 480);   
    glVertex2i(690, 420);
    glEnd();
    
    // Body Kue
    glColor3f(0.1, 0.3, 0.4);
    glBegin(GL_POLYGON);
    glVertex2i(570, 400); 
    glVertex2i(690, 420);
    glVertex2i(690, 360);
    glVertex2i(570, 340);
    glEnd();
    
    //Selai Kue
    glColor3f(0.1, 0.2, 0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(690, 390);
    glVertex2i(570, 370);
    glEnd();
    
    //Jendela
    //kaca
    glColor3f(0.3, 0.5, 0.8);		  
    glBegin(GL_POLYGON);
    glVertex2i(800,  700);   
    glVertex2i(1000, 700);	
    glVertex2i(1000,  500);	
    glVertex2i(800, 500);	
    glEnd();
    
    //sekat
    glColor3f(0.1, 0.2, 0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(800,600);
    glVertex2i(1000,600);
    glVertex2i(900,700);
    glVertex2i(900,500);
    glEnd();
	
	//Payung
	//body payung
    glColor3f(0.0, 0.6, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(910, 100);
    glVertex2i(920, 320);   
    glVertex2i(1000, 320);
	glEnd();
    
    //gagang payung
    glColor3f(0.1, 0.2, 0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(950,320);
    glVertex2i(980,410);
    glVertex2i(980,410);
    glVertex2i(1010,380);
    glVertex2i(1010,380);
    glVertex2i(990,370);
    glEnd();
    
    //Memproses
    glFlush();
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1024, 768);
    glutCreateWindow("Tugas OpenGL ");
    init();
    glutDisplayFunc(suasanakoding);
    glutMainLoop();
}



