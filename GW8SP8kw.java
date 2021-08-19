package basicExampleKo;

public class person {
	
	  String firstname, lastname, course, section;
	  int year;
	  double midtermgrade, finalgrade;
	  
	  person(String firstname, String lastname,String course, String section, int year, double midtermgrade, double finalgrade)
	  {
	    this.firstname = firstname;
	    this.lastname = lastname;
	     this.course = course;
	    this.section = section;
	    this.year = year;
	    this.midtermgrade = midtermgrade;
	    this.finalgrade = finalgrade;
	  }
	  
	   void introduce()
	  {
	    System.out.println("First Name: " + firstname);
System.out.println("Last Name: " + lastname);
System.out.println("Course: " + course);
System.out.println("Section: " + section) ;
System.out.println("Year: " + year) ;
System.out.println("Midterm grade: " + midtermgrade);
System.out.println("Final grade: " + finalgrade);
	  }
	  
	  void evaluategrade()
	  {
	    double avg = (midtermgrade+finalgrade)/2;
	    
	    System.out.println("Average grade of " + lastname + ", " + firstname + " is " + avg + "%");
	    
	    if(avg>100)
	    {
	      System.out.println(lastname + ", " + firstname + "got " + " invalid grade");
		}
		else if(avg>98)
		{
		  System.out.println(lastname + ", " + firstname + " got" + " with highest honor");
		}
		else if(avg>95)
		{
		  System.out.println(lastname + ", " + firstname + " got" + " with high honors");
		}
		else if(avg>90)
		{
		  System.out.println(lastname + ", " + firstname + " got" + " with honors ");
		}
		else if(avg>75)
		{
		  System.out.println(lastname + ", " + firstname + " got" + " passed");
		}
		else if(avg<75)
		{
		  System.out.println(lastname + ", " + firstname + " got" + " Failed");
		}
	  }
}