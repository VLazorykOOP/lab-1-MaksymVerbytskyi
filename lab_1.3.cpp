#include <iostream>
#include <ctime> 


bool bCheck(int number, int* B) {
  for(int j=0;j<sizeof(B);j++){
    if(number==B[j]){
      return true;
    }
  }
  return false;
}

void bPrint(int *B){
  for(int i=0;i<sizeof(B); i++){
     for(int j=0;j<4;j++){
        std::cout<<B[j];
      }
    std::cout<<std::endl;
  }
}

int main() {
  std::srand(std::time(NULL));
  int n;
  do{
    std::cout<<"Введіть число менше 200"<<std::endl;
    std::cin>>n;
  }while((n <= 0 || n > 200));

  int *A = new int [n];
  int *B = new int [0];
  
  
  for(int i=0;i<n;i++){
    A[i] = std::rand() % 11; 
    std::cin>>A[i];
  }
  int counter;
  for(int j=0;j<n;j++){
    if(bCheck(A[j], B)) continue;
    for(int i=0;i<n-1;i++){
      if(A[j] == A[i+1]){
        ++counter;
        B[counter] = A[j];
      }
  } 
  }
  bPrint(B);
  delete [] A;
  delete [] B;
  
  return 0;
}