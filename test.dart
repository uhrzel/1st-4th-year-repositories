// Dart 2.6.1 

bool test(String sentence)
{
  
  bool isVerified = true;
  int counter = 0;
  int isNull = 0;  
  if(sentence =="betlog"|| sentence == "bikyog"|| sentence == "Alikabok")
    {
      counter++;
    } 
   else
   {
     isNull++;
   }
   
  if(counter<isNull)
  {
    return isVerified;
  }
  else
  {
    return false;
  }
}
void main()
{
 List<String> TestAllNames = ["bilog", "bikyog", "Alikabok"];
 for(var list in TestAllNames )
 {
   print(test(list));
 } 
  
}