#include<iostream>
using namespace std;

class Array
{
    private:
      int *Arr;
      int iLength;


    public:
      Array(int Size)
      {
        iLength = Size;
        Arr = new int[iLength];
      }

    ~Array()
    {
        delete []Arr;
    }
      void Accept()
      {
        intiCnt = 0;
        cout<<"Enter the elements : "<<"\n";
        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
            cin>>Arr[iCnt];
        }
      }

     void Display()
      {
        intiCnt = 0;
        cout<<"Element of array are : "<<"\n";
        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
            cin>>Arr[iCnt];
        }
      }
};
int main()
{
    Array aobj(5);
    aobj.Accept();
    aobj.Dispaly();

    return 0;
}
