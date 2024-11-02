char* reverseVowels(char* s) {
    int n = strlen(s);
    char* vowels = (char*)malloc((n + 1) * sizeof(char));
    int k = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (strchr("aeiouAEIOU", s[i])) {
            vowels[k++] = s[i];
        }
    }
    vowels[k] = '\0';

    for (int i = 0; i < k / 2; i++) {
        char t = vowels[i];
        vowels[i] = vowels[k - i - 1];
        vowels[k - 1 - i] = t;
    }

    int idx = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (strchr("aeiouAEIOU", s[i])) {
            s[i] = vowels[idx++];
        }
    }
    
    return s;
}