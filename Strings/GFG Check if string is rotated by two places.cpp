class Solution
{
    public:
   void RotateClockwise(string &str2){
       char ch = str2[str2.size()-1];
       int indx = str2.size()-2;
       while(indx>=0){
           str2[indx+1] = str2[indx];
           indx--;
       }
       str2[0] = ch;
    }
   void RotateAnticlockwise(string &str2){
        char ch = str2[0];
        int indx = 1;
        while(indx<str2.size()){
            str2[indx-1]= str2[indx];
            indx++;
        }
        str2[str2.size()-1]=ch;
   }
    
    bool isRotated(string str1, string str2) {
    if(str1.size() !=str2.size()) return false;
     string clockwise = str1;
     string anticlock = str1;
     RotateClockwise(clockwise);
     RotateClockwise(clockwise);
     if(str2==clockwise) return true;
     RotateAnticlockwise(anticlock);
     RotateAnticlockwise(anticlock);
     if(anticlock ==str2) return true;
     return false;
    }
};
