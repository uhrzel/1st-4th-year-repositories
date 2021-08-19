package basicExampleKo;

import java.util.Scanner;

public class Solving {

  public static void main(String[] args) {
			Scanner input = new Scanner(System.in);
			
			person p1 = new person("Arzel John", "Zolina","BSIT", "Carnation",1,88.95,86.89);

			p1.introduce();
			p1.evaluategrade();
		
  	}
  }