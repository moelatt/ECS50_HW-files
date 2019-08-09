#include <iostream>
using namespace std;
/*
// problem 4 --> 5-15
int binarySearch(int x[], int size, int searchValue){
	int low = 0;
	int high = size - 1;
	
	while(low <= high){
		int mid = (low + high) / 2;
		if(searchValue == x[mid]){
			return mid;
		}
		else if(searchValue > x[mid]){
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}*/

int main(){
	int x[] = {-345, -98, 109, 1555, 6332, 33194};
	int size = 6;

	int searchValue = 33194;

	int low = 0;
	int high = size - 1;
	bool found = false;
	int acc;

	while(low <= high){
		int mid = (low + high) / 2;
		if(searchValue == x[mid]){
			found = true;
			break;
		}
		else if(searchValue > x[mid]){
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if(found == true){
		 acc = 1;
		cout << acc << endl;
	}
	else{
		acc = 0;
		cout << acc << endl;
	}
}


/*

// problem 3 --> 5-12
int main(){
	int x[] = {100, 74, -144, 10022, 657, -33};
	int size = 6;
		for(int i = 0; i < size; i++){
		int value = x[i];
		int index = i;
		while(index > 0 && x[index -1 ] > value) {
			x[index] = x[index - 1];
			index = index - 1;
		}
		x[index] = value;
	}
	for(int i = 0; i < size; i++){
		cout << x[i] << " " << endl;
	}
	cout << endl;

}



*/




/*

// problem 2 --> 5-12 
int main(){
	int x[] = {100, 74, -144, 10022, 657, -33};
	int size = 6;

	for(int i = 0; i < size; i++){
		int min = i;
		for(int j = i + 1; j < size; j++){
			if(x[min] > x[j]){
				min = j;
			}
		}
		int temp = x[i];
			x[i] = x[min];
			x[min] = temp;
	}
	for(int i = 0; i < size; i++){
		cout << x[i] << " " << endl;
	}
}
*/

/*
// problem 1 --> 5-13
int main(){
	int x[] = {95, 1002, 233, -137, 6332, -33191};
	int y[] = {35, 102, 109, -1378, 6332, -33194};
	int size = 6;
	int acc;
	for(int i = 0; i < size; i++){
		if(x[i] > y[i]){
			 acc = 1;
			cout << acc << endl;
		}
		else{
			acc = 0;
			cout << acc << endl;
		}
	}

} 


*/













