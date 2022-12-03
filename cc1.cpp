int length1(char input[])
{
    int length=0;
    for(int i=0;input[i]!='\0';i++)
    {
        length++;
    }
    return length;
}
bool checkAB(char input[]) {
	// Write your code here
if(length1(input)==0)
{
    return true;
    
}
    
checkAB(input+1);
  
 if(input[0]=='a' && (input[1]=='a' || input[1]==' ' || (input[1]=='b' && input[2]=='b')) )
     
 {
        return true; 
 }

    
else if(input[0]=='a' && input[1]=='b' &&  input[2]=='b' && (input[3]==' ' || input[3]=='a')  )
  {
     return true;
  }

else
{
 return false;
}
    
    
    
}



// bool solve(char input[]) {
//     if(input[0]=='\0')
//         return true; // Write your code here
   
//     if(input[0]=='a'&&(input[1]=='\0'||input[1]=='a'))
//         solve(input+1);
//     else if(input[0]=='a'&&(input[1]=='b'&&input[2]=='b'))
//         solve(input+1);
//     else if(input[0]=='b'&&input[1]=='b'&&(input[2]=='\0'||input[2]=='a'))
//         solve(input+2);
//     else
//         return false;

// }


// bool checkAB(char input[]) {
//     // if(input[0]=='\0')
//     //     return true; 
//     // else if (input[0] != 'a')
//     //     return false;
//   solve(input);
// }