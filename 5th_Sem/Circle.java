import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JFrame;
import java.util.Scanner;
public class Circle{
	public static void main(String[] args) throws InterruptedException{
		
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter center coordinate(x, y) of circle->");
		int x=scan.nextInt();
		int y=scan.nextInt();
		System.out.println("Enter radius of circle->");
		int r=scan.nextInt();
		DrawCircle d=new DrawCircle(x,y,r);		
	}
}
class DrawCircle extends JFrame{
	int x, y, r;
	DrawCircle(int x,int y,int r){
		setVisible(true);
        setSize(500,500);
        setTitle("Circle Draw Window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.x=x;
		this.y=y;
		this.r=r;
		repaint();
	}
	public void paint(Graphics g){
    	super.paint(g);
    	g.drawOval(x-r+8,31+y-r,2*r,2*r);
    }
}