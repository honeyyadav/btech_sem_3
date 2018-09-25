import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JFrame;
import java.util.Scanner;
public class DDA{
	public static void main(String[] args) throws InterruptedException{
		
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter first coordinate(x1, y1)->");
		int x1=scan.nextInt();
		int y1=scan.nextInt();
		System.out.println("Enter second coordinate(x1, y1)->");
		int x2=scan.nextInt();
		int y2=scan.nextInt();
		DrawLine d=new DrawLine(x1, y1, x2, y2);		
	}
}
class DrawLine extends JFrame{
	double x1, y1, x2, y2;
	DrawLine(int x1, int y1, int x2, int y2){
		setVisible(true);
        setSize(500,500);
        setTitle("Line Draw Window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.x1=x1;
		this.y1=y1;
		this.x2=x2;
		this.y2=y2;
		repaint();
	}
	public void putPixel(Graphics g,int x, int y){
		g.drawLine(x, y, x, y);
	}
	public void paint(Graphics g){
    	super.paint(g);
    	double dx=x2-x1;
    	double dy=y2-y1;
    	int steps;
    	if(Math.abs(dx)>Math.abs(dy)){
    		steps=Math.abs((int)dx);
    	}
    	else{
    		steps=Math.abs((int)dy);
    	}
    	double xinc=dx/steps, yinc=dy/steps;
    	for (int i=1 ; i<=steps ; i++ ) {
    		putPixel(g, (int)Math.round(x1), (int)Math.round(y1));
    		System.out.println(Math.round(x1)+" "+Math.round(y1));
    		x1+=xinc;
    		y1+=yinc;
    	}
    }
}