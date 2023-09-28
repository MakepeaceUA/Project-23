#include <iostream>
using namespace std;

//Задание 1
/*void CopyList(int* m, int* n, int S) 
{
  for (int i = 0; i < S; i++) 
  {
    n[i] = m[i];
  }
}

int main()
{
   int size = 5;

   int F_list[] = {10,2,56,12,56};
   for (int i = 0; i < size;i++)
     cout << F_list[i] << " ";

   cout << "\n";

   int S_list[] = {1,5,90,45,14};
   for (int j = 0; j < size;j++)
     cout << S_list[j] << " ";

   CopyList(F_list,S_list,size);
   cout << "\n\n";

   for (int i = 0; i < size;i++)
      cout << F_list[i] << " ";

    cout << "\n";

    for (int j = 0; j < size;j++)
      cout << S_list[j] << " ";
}*/







//Задание 2
/*void Func(int* arr, int S) 
{
  for (int i = S - 1; i >= 0; i--) 
  {
    cout << arr[i] << " ";
  }
}

int main()
{
   int size = 5;

   int list[] = {10,2,56,12,56};
   for (int i = 0; i < size;i++)
     cout << list[i] << " ";

   cout << "\n";

   Func(list,size);
}*/









//Задание 3
/*void CopyList(int* m, int* n, int S) 
{ 
  int j = S - 1;
  for (int i = 0; i < S; i++,j--) 
  {
    *(n + i) = *(m + j);
  }
}

int main()
{
   int size = 5;

   int F_list[] = {10,2,56,12,56};
   for (int i = 0; i < size;i++)
     cout << F_list[i] << " ";

   cout << "\n";

   int S_list[] = {1,5,90,45,14};
   for (int j = 0; j < size;j++)
     cout << S_list[j] << " ";
   
   CopyList(F_list,S_list,size);
   cout << "\n\n";

   for (int i = 0; i < size;i++)
      cout << F_list[i] << " ";

   cout << "\n";

   for (int i = 0; i < size;i++)
      cout << S_list[i] << " ";
}*/





//Задание 4
/*void Func(int* arr, int* S, int* ps, int* pm) 
{ 
  for (int i = 0; i < *S; i++) 
  {
    *ps += arr[i];
    *pm *= arr[i];
  }
}

int main()
{
   int size = 5;
   int sum = 0, mult = 1;

   int list[] = {10,2,56,12,56};
   for (int i = 0; i < size;i++) 
   {
      cout << list[i] << " ";
   }
   cout << "\n";
   Func(list, &size, &sum, &mult);

   cout << sum << " " << mult;
}*/








//Задание 5
/*void Func(int* arr, int* S, int* pl, int* mi, int* nu) 
{ 
  for (int i = 0; i < *S; i++) 
  {
    if (arr[i] > 0) 
      *pl += 1;
    else if (arr[i] < 0)
      *mi += 1;
    else if (arr[i] == 0)
      *nu += 1;
  }
}

int main()
{
   int size = 5;
   int plus = 0,minus = 0,null = 0;

   int list[] = {10,-2,0,-20,56};
   for (int i = 0; i < size;i++) 
   {
      cout << list[i] << " ";
   }
   cout << "\n";
   
  Func(list, &size, &plus, &minus,&null);
  cout << plus << " " << minus << " " << null;
}*/








//Задание 6
/*void Func(int* arr, int S, int* max, int* Imax) 
{ 
  *max = arr[0];
  *Imax = 0;
  for (int i = 0; i < S; i++) 
  {
    if (arr[i] > *max) 
    {
      *Imax = i;
      *max = arr[i];
    }
  }
}

int main()
{
   int size = 5;
   int max,Imax;

   int list[] = {10,90,65,-20,78};
   for (int i = 0; i < size;i++) 
   {
      cout << list[i] << " ";
   }
   cout << "\n";
   
  Func(list, size, &max, &Imax);
  cout << max << " " << Imax;
}*/