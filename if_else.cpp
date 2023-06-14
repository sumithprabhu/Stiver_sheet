class Solution {
  public:
    string compareNM(int n, int m){
       if (n>m){
           cout<<"greater";
       }
       else if (n==m){
           cout<<"equal";
       }
       else{
           cout<<"lesser";
       }
    }
};