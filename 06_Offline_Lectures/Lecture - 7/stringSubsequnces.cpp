void subseq(string s, string ans, int i){
    if(i == s.size()){
        cout << ans << endl;
        return;
    }

    // include
    subseq(s, ans + s[i], i + 1);

    // exclude
    subseq(s, ans, i + 1);
}
// Call:

subseq("abc","",0);