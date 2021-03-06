// variables, array, function, loop
#include <iostream> // cout
#include <cmath> // use pow & sqrt
#include <fstream> // file I/O
using namespace std; // std = standard

// void initialize(){
//   // Initialize variable phi
//   for(i = 0; i <= nx-1; i++){  
//     for(j = 0; j <= ny-1; j++){  
//       phi[i][j] = 0.0;
//     }
//   }
// }

// void visualize(){
//   for(i = 0; i <= nx-1; i++){  
//     for(j = 0; j <= ny-1; j++){  
//       cout << phi[i][j] << " ";
//     }
//     cout << "\n";
//   }
// }

// void set_phi(){
//   // Assign phi = 1 inside a circle around center of radius = 15
//   // letting dx = dy = 1
//   // as, e.g., x_spacing = dx*diff(index), not diff(index) itself
//   // phi[1][3] - phi[2][3] : spacing =  dx*(2-1) = dx*(1) = 1 

//   double radius = 10.;
//   i_c = (nx-1)/2;
//   j_c = (ny-1)/2;

//   for(i = 0; i <= nx-1; i++){  
//     for(j = 0; j <= ny-1; j++){  
      
//       if( sqrt( pow(i-i_c,2) + pow(j-j_c,2)  ) < radius ){
// 	phi[i][j] = 1.; } else { phi[i][j] = 0.;}
      
//     }
//   }

// }

// void save_restartfile(){
//   myfileO.open("file.dat");
//   for(i = 0; i <= nx-1; i++){  
//     for(j = 0; j <= ny-1; j++){  
//       myfileO << phi[i][j] << " ";
//     }
//     myfileO << "\n";
//   }
//   myfileO.close();  
// }

// void read_restartfile(){
//   myfileI.open("file.dat");
//   for(i = 0; i <= nx-1; i++){  
//     for(j = 0; j <= ny-1; j++){  
//       myfileI >> phi[i][j];
//     }
//   }
//   myfileI.close();  
// }

//                                            // Error
// void test(int nx, int ny, double phi[nx]){ //, double phi2D[nx][ny]){ 
//   phi[0] = phi[1] + phi[2];
//   nx = nx + 1;
// }

void test(int nx, double *p){ // double *
  for(int i = 0; i < nx; i++){
    cout << "p[" << i << "] = " << p[i] << "\n";
  }
}

// void test2D(int nx, int ny, double **p){
  
//   for(int i = 0; i < nx; i++){
//     for(int j = 0; j < ny; j++){
//       cout << p[i][j];
//     }
//   }

// }

int main(){


  const int nx = 10;
  // double phi[nx];
  // //phi is, in fact, a pointer that stores the address of phi[0];

  // Alternatively in declaring a 1D array
  double *phi;
  phi = (double *) malloc (nx * sizeof(double));

  for(int i = 0; i < nx; i++){
    phi[i] = double(i);
  }
  test(nx, phi);
  

  // //-------------------------------------------------//
  // const int nx = 10;
  // const int ny = 10;
  // //double phi[nx][ny];

  // double **phi; // pointer to pointer
  // phi = (double **) malloc (nx * sizeof(double)); //<= phi is a pointer to a 1D array of pointers, the array is nx long
  // for(int i = 0; i < nx; i++){
  //   phi[i] = (double *) malloc (ny * sizeof(double)); //<= phi[i] itself is a pointer to a 1D array of double variables
  // }

  // test2D(nx, ny, phi)







  



  
 //  RAM = 8 GB  \approx  8 x 10^9 Bytes * 8 bits/Byte = 64,000,000,000 bits

 //  00000100100010101010101000000000000000 .... 64,000,000,000 bit number
 //    |------------|  1 Mb = 1,000,000 bit

 //    address = 000101101011000101100111100110101100              address
 //  |-------------------------------- ----------------------------------.... |
 //   00000000000000000000000000001010     000000000000000000001010 00001010001001010100000000010 101101010101010101010101000000000000000010101010001

 //    int a; integer = 4 Bytes <= 4 * 8 = 32 bits
 // double b; double  = 8 Bytes <= 8 * 8 = 64 bits

 //   content a       00110011001100110011001100110011
 //   content b       0011001100110011001100110011001100110011001100110011001100110011

 //   address <= 1 Byte = 8 bits

  // int a = 10; // decimal
  // cout << "a = " << a << "\n";
  // cout << "&a = " << &a << "\n"; // referencing
  // cout << "\n";

  // int array[10];
  // for(int i=0; i< 10; i++){
  //   array[i] = i;
  //   cout << "array[" << i << "] = " << array[i] << ", stored at " << &array[i] <<"\n";
  // }

  // cout << "\n";

  // int *p;
  // p = &a;
  // cout << "p = " << p << "\n";
  // cout << "*p = " << *p << "\n";      // de-referencing

  // cout << "&p = " << &p << "\n";



  

  


  
  

  
  
  
  //                       &a = 0x16b1b79ac     0x <= hexadecimal
  
  // 10 <= 1010 
  // // binary decimal  hexadecimal
  //    0 0                  0
  //    1 1                  1
  //   10 2                  2
  //   11 3                  3
  //  100 4                  4
  //  101 5                  5
  //  110 6                  6
  //  111 7                  7
  // 1000 8                  8
  // 1001 9                  9
  // 1010 10                 a
  // 1011 11                 b
  // 1100 12                 c
  // 1101 13                 d
  // 1110 14                 e
  // 1111 15                 f    

  //                         1 6 b 1 b 7 9 a c
  //            000101101011000101100111100110101100   



  
				   

  


  // const int nx = 10;
  // const int ny = 10;
  // double phi[nx];
  // for(int i=0; i < nx; i++){
  //   phi[i] = double(i);
  //   cout << "phi[" << i << "] = " << phi[i] << "\n";
  // }
  // cout << "\n";
  // //test(nx, phi);
  // cout << "phi[0] = " << phi[0] << "\n";
  // cout << "\n";
  // cout << "nx = " << nx << "\n";

  // double phi2D[nx][ny];
  // test(nx, ny, phi, phi2D);
  
  


  
  // // declare variable named "myfileI", "myfileO"
  // ofstream myfileO; // output file stream
  // ifstream myfileI; // input file stream
  
  // MODULAR CODE <= module, module, module
  // PORTABLE CODE
  //initialize();
  // set_phi();
  // visualize();
  // save_restartfile(); // save phi
  //read_restartfile(); // read phi <= call routine named read_reastartfile();
  //visualize();

  
  
} // end main


 /// ctrl + x, ctrl + f
/// ctrl + x, 2
/// ctrl + x, 3
// ctrl + x, o
// ctrl + x, 0



















  // nx * ny * 8 bytes * 8 bits/byte = 64*nx*ny bits
  //   8,000,000 bytes = 8 MB
  //   nx ny nz (1000)    8000 MB = 8 GB

    
  // phi[nx] = 2.0;  // phi2[0]
  // phi[0] ---- phi[nx-1]    phi2[0] phi2[1] --- phi2[nx-1]
  
  
  // for(int i = 0; i <= nx-1; i++){
  //   cout << "phi[" << i << "] = " << phi[i] << "\n";
  // }



  // phi[0] = 1.0;
  // phi[1] = 1.0;
  // phi[2] = 1.0;  
  // phi[3] = 1.0;
  // phi[4] = 1.0;  
  // phi[5] = 1.0;
  // phi[6] = 1.0;  
  // phi[7] = 1.0;
  // phi[8] = 1.0;
  // phi[9] = 1.0;


  //            phi[0]    phi[1]                                phi[9]
  //            phi[0]    phi[1]                                phi[9]
  //            phi[0]    phi[1]                                phi[9]
  //              --------------------------------------------------




//          4 bytes = 4 * 8 = 32 bits
//          8 bytes = 8 * 8 = 64 bits 



