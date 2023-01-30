
///////////////////////////////           /problems on digits/               ///////////

#include<iostream>
using namespace std;

 //Input : 7985674
//Output : 4 Occures 1 Times
//Output : 5 Occures 1 Times
//Output : 6 Occures 1 Times
//Output : 7 Occures 2 Times
//Output : 8 Occures 1 Times
//Output : 9Occures 1 Times

class  DigitX
{
    public:
         int iNo;
        
     DigitX()
     {
        iNo = 0;
      }

     DigitX(int i)
     {
        iNo = i;
     }
   
   void DisplayFrequency()
    {
      int iTemp = iNo;
      int iDigit  = 0;
       int Frequency[10] = {0};  // sagale variables 0th la initialized zale

         while(iTemp != 0)
          {
              iDigit = iTemp % 10;
              Frequency[iDigit]++;
              iTemp = iTemp/10;    
              }

          for(int iCnt = 0;iCnt < 10 ;iCnt++)
            {
                    if(Frequency[iCnt]>0)
                    {
                      cout<<iCnt<<"occures at"<<Frequency[iCnt]<<"times"<<"\n";
                    }
 
             }
     }
    
};


int main()
{
   int iValue = 0;
   int iRet = 0;
   cout<<"Please enter a number :"<<"\n";
    cin>>iValue;

     DigitX obj(iValue);
     obj.DisplayFrequency();
   
 return 0;
}
