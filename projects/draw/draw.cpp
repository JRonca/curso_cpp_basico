#include <iostream>
#include <cstdlib>

void draw(int,int);
int main( int argc, char **argv  ){
	int max_i = {10}, max_kj = {20}, x={0};	
	std::string s = {};
	if(argc>1){
		s= argv[1];
		if( s == "-a" || s == "--animation" ){
			while( x < 20 ){
				x++;
				draw(x/2,x);
				system("sleep 0.03");
				system("clear");
			}
			draw(x/2,x);
		}
	}
	if(argc > 2){
		max_i = std::stoi(argv[1]);	
		max_kj = std::stoi(argv[2]);	
		draw(max_i,max_kj);
	}

	return 0;
}

void draw(int max_i, int max_kj){
	for(int i=0; i <= max_i; i++){
		if(i==0){
			std::cout << "\u250c";
			for(int k=0; k<=max_kj; k++){
				if(k==max_kj){
					std::cout << "\u2510\n";
				}else{
					std::cout << "\u2500";
				}
			}
		}else{
			if(i == max_i){
				std::cout << "\u2514";
			}else{
				std::cout << "\u2502";
			}
			for(int j=0; j<=max_kj; j++){
				if(j==max_kj){
					if(i==max_i){
						std::cout << "\u2518\n";
					}else{
						std::cout << "\u2502\n";
					}
				}else{
					if(i==max_i){
						std::cout << "\u2500";
					}else{
						std::cout << " ";
					}

				}
			}

		}
	}

}
