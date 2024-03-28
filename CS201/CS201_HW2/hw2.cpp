        #include <iostream>
        using namespace std;


        int algorithm1( int a, int n, int p );
        int algorithm2( int a, int n, int p );
        int algorithm3(int A, int B, int C);

        int main()  {
        
        cout << "algorithm 1: " << endl;
        cout << "p = 101" << endl;

        
        double duration;
        clock_t startTime = clock();
        
            algorithm1( 3, 1000000, 101 );
          
        

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 3, 2000000, 101 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm1( 3, 3000000, 101 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 3, 4000000, 101 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 3, 5000000, 101 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 3, 6000000, 101 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm1( 3, 7000000, 101 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm1( 3, 8000000, 101 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm1( 3, 9000000, 101 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 3, 10000000, 101 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;


        cout << "p = 1009" << endl;

        startTime = clock();
        
            algorithm1( 15, 1000000, 1009 );
          
        

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 2000000, 1009 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm1( 15, 3000000, 1009 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 4000000, 1009 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 5000000, 1009 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 6000000, 1009 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm1( 15, 7000000, 1009 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm1( 15, 8000000, 1009 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm1( 15, 9000000, 1009 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 10000000, 1009 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;


        cout << "p = 10007" << endl;

        startTime = clock();
        
            algorithm1( 15, 1000000, 10007 );
          
        

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 2000000, 10007 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm1( 15, 3000000, 10007 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 4000000, 10007 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 5000000, 10007 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 6000000, 10007 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm1( 15, 7000000, 10007 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm1( 15, 8000000, 10007 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm1( 15, 9000000, 10007 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm1( 15, 10000000, 10007 );
          

        duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        cout << endl;
        cout << "algorithm 2: " << endl;
        cout << "p = 101 " << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 10000000, 101 );
            }
        

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 2000000, 101 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 3000000, 101 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 4000000, 101 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 5000000, 101 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 6000000, 101 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 7000000, 101 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 8000000, 101 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 9000000, 101 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 10000000, 101 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;


        cout << "p = 1009 " << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 10000000, 1009 );
            }
        

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 2000000, 1009 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 3000000, 1009 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 4000000, 1009 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 5000000, 1009 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 6000000, 1009 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 7000000, 1009 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 8000000, 1009 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 9000000, 1009 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 10000000, 1009 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        
        cout << "p = 10007 " << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 10000000, 10007 );
            }
        

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 2000000, 10007 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 3000000, 10007 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 4000000, 10007 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 5000000, 10007 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 6000000, 10007 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 7000000, 10007 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 8000000, 10007 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 9000000, 10007 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        for( int i = 0; i < 1000; i++)	{
            algorithm2( 15, 10000000, 10007 );
            }

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

         cout << endl;
        cout << "algorithm 3: " << endl;
        cout << "p = 101 " << endl;

        startTime = clock();
        
            algorithm3( 15, 1000000, 101 );
            
        

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 2000000, 101 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm3( 15, 3000000, 101 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 4000000, 101 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 5000000, 101 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 6000000, 101 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm3( 15, 7000000, 101 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm3( 15, 8000000, 101 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm3( 15, 9000000, 101 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 10000000, 101 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;


        cout << "p = 1009 " << endl;

        startTime = clock();
        
            algorithm3( 15, 1000000, 1009 );
            
        

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 2000000, 1009 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm3( 15, 3000000, 1009 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 4000000, 1009 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 5000000, 1009 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 6000000, 1009 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm3( 15, 7000000, 1009 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm3( 15, 8000000, 1009 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm3( 15, 9000000, 1009 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 10000000, 1009 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        
        cout << "p = 10007 " << endl;

        startTime = clock();
        
            algorithm3( 15, 1000000, 10007 );
            
        

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 2000000, 10007 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm3( 15, 3000000, 10007 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 4000000, 10007 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 5000000, 10007 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 6000000, 10007 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
            
        startTime = clock();
        
            algorithm3( 15, 7000000, 10007 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm3( 15, 8000000, 10007 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
        
        startTime = clock();
        
            algorithm3( 15, 9000000, 10007 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;

        startTime = clock();
        
            algorithm3( 15, 10000000, 10007 );
            

        duration = 10000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
        cout << "Execution took " << duration << " milliseconds." << endl;
   
            return 0;
        }

        int algorithm1( int a, int n, int p )   {
            int result = 1;

            for( int i = 0; i < n; i++ )    {
                result = ( result * a ) % p;
            }
            return result;

        }

        int algorithm2( int a, int n, int p )   {
            int result = 1;
            int  tempA = a;
            int i = 1;

            for( i; tempA % p != 1; i++ )  {
                tempA *= a;
            }
    
            for( int k = 0 ; k <  n % i; k++ )    {
                result = ( result * a ) % p;
            }
            return result;

        }

int algorithm3( int a, int n, int p )   {
    if ( n == 1 )
        return 1;

    long result;
    if ( n % 2 == 0 ) {
        result = algorithm3( a, n / 2, p ) * algorithm3( a, n / 2, p );
        
    }
 
    else {
        result = a * ( algorithm3( a, ( n - 1 ) / 2, p ) ) * ( algorithm3( a, ( n - 1 ) / 2, p ) );
      
    }
  
    return (int)( ( result ) % p );
}