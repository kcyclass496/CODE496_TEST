// variables, array, function, loop
#include <iostream> // cout
#include <cmath> // use pow & sqrt
#include <fstream> // file I/O
using namespace std; // std = standard

// global variable
int i, j;
int i_c, j_c;
const int nx = 31;
const int ny = 31;
double phi[nx][ny];   

// declare variable named "myfileI", "myfileO"
ofstream myfileO; // output file stream
ifstream myfileI; // input file stream

void initialize(){
  // Initialize variable phi
  for(i = 0; i <= nx-1; i++){  
    for(j = 0; j <= ny-1; j++){  
      phi[i][j] = 0.0;
    }
  }
}

void visualize(){
  for(i = 0; i <= nx-1; i++){  
    for(j = 0; j <= ny-1; j++){  
      cout << phi[i][j] << " ";
    }
    cout << "\n";
  }
}

void set_phi(){
  // Assign phi = 1 inside a circle around center of radius = 15
  // letting dx = dy = 1
  // as, e.g., x_spacing = dx*diff(index), not diff(index) itself
  // phi[1][3] - phi[2][3] : spacing =  dx*(2-1) = dx*(1) = 1 

  double radius = 10.;
  i_c = (nx-1)/2;
  j_c = (ny-1)/2;

  for(i = 0; i <= nx-1; i++){  
    for(j = 0; j <= ny-1; j++){  
      
      if( sqrt( pow(i-i_c,2) + pow(j-j_c,2)  ) < radius ){
	phi[i][j] = 1.; } else { phi[i][j] = 0.;}
      
    }
  }

}

void save_restartfile(){
  myfileO.open("file.dat");
  for(i = 0; i <= nx-1; i++){  
    for(j = 0; j <= ny-1; j++){  
      myfileO << phi[i][j] << " ";
    }
    myfileO << "\n";
  }
  myfileO.close();  
}

void read_restartfile(){
  myfileI.open("file.dat");
  for(i = 0; i <= nx-1; i++){  
    for(j = 0; j <= ny-1; j++){  
      myfileI >> phi[i][j];
    }
  }
  myfileI.close();  
}


int main(){

  initialize();
  set_phi();
  visualize();
  save_restartfile(); // save phi
  //read_restartfile(); // read phi <= call routine named read_reastartfile();
  visualize();

  
  
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



