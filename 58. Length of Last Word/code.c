int lengthOfLastWord(char* s) {
    int n = strlen(s), flag = 0, c = 0;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] != ' '){
            c ++;
            flag = 1;
        }
        else if(flag){
            break;
        } 
    }
    return c;
}