// Dart 2.6.1 
/*This program test the list 
of the array if they exist in the 
function. return true if all of them are exist 
return false if not. 
@arzel
*/
bool test(List<String> sentence)
{
  
  bool isVerified = true;
  int counter = 0;
  
  for(int i=0; i<3; i++)
  {
  if(sentence[i] =="betlog"||sentence[i] == "bikyog"||sentence[i] == "Alikabok")
  {
   return true;
   } 
   else
   {
     return false;
   }
  }
    
}
void main()
{
 List<String> TestAllNames = ["bilog", "bikyog", "Alikabok"];
 bool test_All = test(TestAllNames);
 print(test_All);
   
}