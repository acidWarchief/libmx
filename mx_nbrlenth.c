int mx_nbrlenth(int nbr) {
    int size = 0;
	int temp = nbr;

	if (nbr <= 0)
		size = 1;
		 
	while (temp) {
        temp = temp / 10;
        size++;
    }
	return size;
}
