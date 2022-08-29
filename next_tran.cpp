void next_tran(int* tran, int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (tran[i] == i) {
			tran[i] = 0;
			continue;
		}
		tran[i] += 1;
		break;
	}
}