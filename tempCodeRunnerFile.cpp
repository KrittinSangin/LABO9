void printO(int column, int row){
	if(column < 0 || row < 0){
		cout << "Invalid input";
	}
	for(int i = 0; i < column; i++){
		for(int j = 0; j < row; j++){
			cout << "0";
		}
		cout << "\n";
	}