bool detectCapitalUse(char * word){
    bool capital = false;
        
    for(int i = 0; i < strlen(word); i++) {
        if(i > 0 && capital == false && isupper(word[i])) return false;
        if(i > 1 && capital == true && islower(word[i])) return false;
        if(isupper(word[i])) capital = true;
        if(islower(word[i])) capital = false;
    }
        
    return true;
}
