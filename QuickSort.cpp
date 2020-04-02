template<class T>
void quickSortR(T* a, long N)
{
//На вході - масив a[], a[N] - його останній елемент.


  long i = 0, j = N;// присвоїти вказівникам початкові значення
  T temp, p;

  p = a[ N>>1 ];// центральний елемент


  // процедура розділення	          
  do {	               
    while ( a[i] < p ) i++;	           
    while ( a[j] > p ) j--;	              

         
    if (i <= j) {	            
      temp = a[i]; a[i] = a[j]; a[j] = temp;	       
      i++; j--;	
    }	
  } while ( i<=j );	

  // рекурсивні виклики, якщо є щось, щоб сортувати	
  if ( j > 0 ) quickSortR(a, j);	
  if ( N > i ) quickSortR(a+i, N-i);	
}