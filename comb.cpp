
#include <iostream>


using namespace std;

int createGap( int gap )
{
  gap = ( gap * 10 ) / 1.3;

  if ( gap == 9 || gap == 10 )
    gap = 11;

  if (gap < 1)
    gap = 1;

  return gap;
}


void combSort(int data[], int size)
{
  int gap = size;

  while(true) {
   	  gap = createGap( gap );
	  bool swapped = false;

	for (int i = 0; i < size - gap; i++) {
      int j = i + gap;

      if ( data[i] > data[j] ){
        swap(data[i], data[j]);
        swapped = true;
      }

	}

	if (gap == 1 && !swapped)
      break;
  }
}


int main()
{

	cout << "Combsort Algorithm"  <<endl;
  cout << "\nEnter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements:" << endl;
  for(int i = 0; i<n; i++) {
     cin >> arr[i];
  }

	combSort(data, size);
	cout << endl;


	cout << "Combsorted Data Set: " <<endl;
	for ( int i = 0; i < 5; i++ )
		cout << data[i] << " ";
	cout << endl <<endl;

  return 0;



}
