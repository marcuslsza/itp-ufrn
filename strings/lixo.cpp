





for (int i=0;i<s.length();i++) {
    //frase   de  teste
    s[0] = toupper(s[0]);
    int j = 0;
    if (s[i] == ' ') {
         j = i;   //i == 5
        while (s[i] == ' ') {
            i++;
        }
        // i == 7
        s[i+1] = toupper(s[i+1]);
        s = s.substr(0, j) + s.substr(i+1);
    }
}
    return s;