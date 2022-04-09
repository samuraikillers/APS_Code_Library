

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {

  //Write your code here.
  int sum=0,i=0,a=0,b,c,d;
  if(gender=='b')
  { for(int i=0;i<number_of_students;i++)
  {if(i%2==0)
  {
      sum+=marks[i];
  }
    
  }
  }
  else if(gender=='g')
  { for(int i=0;i<number_of_students;i++)
  {if(i%2!=0)
  {
      sum+=marks[i];
  }
    
  }
  }
  return sum;
}

