for(int i = 0; i < N/2; i++){
	for(int j = 0; j < N-x-1;j++){
		int t = mat[x][y];
		//Move values from right to top
		mat[x][y] = mat[y][N-1-x];
		//Move elements from bottom to right
		mat[y][N-1-x] = mat[N-1-x][N-1-y];
		//Move elements from left to bottom
		mat[N-1-x][N-1-y] = mat[N-1-y][x];
		//Move elements from top to left
		mat[N-1-y][x] = t;
	}
}

/*Hi,
I'm an android enthusiast and have developed range of applications in Android. 
I have also developed many web apps using various frontend and backend technologies. This role interests me because I want
to grow more and would like to work and associate myself with the cutting edge tech like AI and ML I also have built
projects based on the concepts of NLP and AI.   I have about 2+ experience(internships) in building applications 
which includes technologies like Java, Android, J2EE, Php, Python, Flask, HTML, CSS, JS, JQuery, Arduino, IOT, R,
Bootstrap. I have deployed many web applications and have several android applications live with a total of 7 Lacs+ 
downloads.My last project in Android combined the power of android with IOT and Analytics to promote automation. 
I would be glad if you would allow me to share my work/CV with you.*/