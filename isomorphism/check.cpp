bool check_matrixes(int** G1, int** G2, int n) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (G1[i][j] != G2[i][j])
				return false;
		}
	}
	return true;
}