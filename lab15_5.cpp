#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *m,int *n,int *o,int *p) {
    int a[4];
    int b[4] = {0,0,0,0};
    
    for(int i = 0; i < 4; i++){
        a[i] = rand();
        for(int j = 0; j < i; j++){
            while(a[i] == a[j]) a[j] = rand();
    }}
        
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(a[j]>a[i]) b[i]++; 
        }
    }
    
    int buffer[4] = {*m,*n,*o,*p};
    *m = buffer[b[0]];
    *n = buffer[b[1]];
    *o = buffer[b[2]];
    *p = buffer[b[3]];

}
