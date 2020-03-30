import java.util.Scanner;

/**
 * Qattack
 */
public class Qattack {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int side=sc.nextInt();
        int n_obstacles=sc.nextInt();
        int k=sc.nextInt();
        int h=sc.nextInt();
        System.out.println("Cordinate  "+h+" "+k);
        int min_S=1;
        int min_N=side;
        int min_E=side;
        int min_W=1;

        //corner point for NE
        int min_NE[]={0,0};//x,y
        int tx=side+h-k;
        int ty=side+k-h;
        System.out.println(tx+" "+side);
        System.out.println(side+" "+ty);
        if(tx<1 || tx>side){
            min_NE[0]=side;
            min_NE[1]=ty;
        }
        if(ty<1 || ty>side){
            min_NE[0]=tx;
            min_NE[1]=side;
        }
        if(h==k){//exception
            min_NE[0]=side;
            min_NE[1]=side;
        }
        

        //corner point for NW
        int min_NW[]={0,0};
        tx=h+k-side;
        ty=h+k-1;
        // System.out.println(tx+" "+side);
        // System.out.println(side+" "+ty);
        if(tx<1 || tx>side){
            min_NW[0]=1;
            min_NW[1]=ty;
        }
        if(ty<1 || ty>side){
            min_NW[0]=tx;
            min_NW[1]=side;
        }
        if(h==1 && k==side){//exception
            min_NW[0]=1;
            min_NW[1]=side;
        }
        if(h==side && k==1){//exception
            min_NW[0]=1;
            min_NW[1]=side;
        }
        if(h+k==side+1){
            min_NW[0]=1;
            min_NW[1]=side;
        }

        //corner point for SW
        int min_SW[]={0,0};
        tx=h-k+1;
        ty=1+k-h;
        //System.out.println(tx+" "+side);
        //System.out.println(side+" "+ty);
        if(tx<1 || tx>side){
            min_SW[0]=1;
            min_SW[1]=ty;
        }
        if(ty<1 || ty>side){
            min_SW[0]=tx;
            min_SW[1]=1;
        }
        if (h==k){//exception
            min_SW[0]=1;
            min_SW[1]=1;
        }
        

        //corner point for SE
        int min_SE[]={0,0};
        tx=h+k-1;
        ty=h+k-side;
        if(tx<1 || tx>side){
            min_SE[0]=side;
            min_SE[1]=ty;
        }
        if(ty<1 || ty>side){
            min_SE[0]=tx;
            min_SE[1]=1;
        }
        if(h==1 && k==side){//exception
            min_SE[0]=side;
            min_SE[1]=1;
        }
        if(h==side && k==1){//exception
            min_SE[0]=side;
            min_SE[1]=1;
        }
        if(h+k==9){//exception
            min_SE[0]=side;
            min_SE[1]=1;
        }
        

        if(n_obstacles>0){
            for (int i = 0; i < n_obstacles; i++) {//iteratively for each co-ordinate
                int y=sc.nextInt();
                int x=sc.nextInt();
                if(x==h){
                    if(y<k){
                        min_S=Math.max(min_S, y);
                        min_S=min_S+1;
                    }
                    if(y>k){
                        min_N=Math.min(min_N,y);
                        min_N=min_N-1;
                    }
                }
    
                if(y==k){
                    if(x<h){
                        min_W=Math.max(min_W, x);
                        min_W=min_W+1;
                    }
                    if(x>h){
                        min_E=Math.min(min_E,x);
                        min_E=min_E-1;
                    }
                }
                if((x-y+k-h)==0){//positive slope
                    if(x>h && y>k){//first quadrant
                        if(x<min_NE[0]){
                            min_NE[0]=x;
                            min_NE[1]=y;
                            min_NE[0]=min_NE[0]-1;
                            min_NE[1]=min_NE[1]-1;
                        }
                    }
                    if(x<h && y<k){
                        if(x>min_SW[0]){//third quadrant
                            min_SW[0]=x;
                            min_SW[1]=y;
                            min_SW[0]=min_SW[0]+1;
                            min_SW[1]=min_SW[1]+1;
                        }
                    }
                }
                if((x+y-k-h)==0){//negative slope
                    if(x<h && y>k){//second quadrant
                        if(x>min_NW[0]){
                            min_NW[0]=x;
                            min_NW[1]=y;
                            min_NW[0]=min_NW[0]+1;
                            min_NW[1]=min_NW[1]-1;
                        }
                    }
                    if(x>h && y<k){
                        System.out.println("fourth quad");
                        if(x<min_SE[0]){//fourth quadrant
                            min_SE[0]=x;
                            min_SE[1]=y;
                            min_SE[0]=min_SE[0]-1;
                            min_SE[1]=min_SE[1]+1;
                        }
                    }
                }
    
            }
        }
        System.out.println("  N   "+h+" "+min_N);
        System.out.println("  S   "+h+" "+min_S);
        System.out.println("  E   "+min_E+" "+k);
        System.out.println("  W   "+min_W+" "+k);

        System.out.println("  NE  "+min_NE[0]+" "+min_NE[1]);
        System.out.println("  NW  "+min_NW[0]+" "+min_NW[1]);
        System.out.println("  SW  "+min_SW[0]+" "+min_SW[1]);
        System.out.println("  SE  "+min_SE[0]+" "+min_SE[1]);
        int moveE=min_E-h;
        System.out.println(moveE+"  EAST");
        int moveW=h-min_W;
        System.out.println(moveW+"  WEST");
        int moveN=min_N-k;
        System.out.println(moveN+"  NORTH");
        int moveS=k-min_S;
        System.out.println(moveS+"  SOUTH");
        int moveNE=min_NE[0]-h;
        System.out.println(moveNE+"  NE");
        int moveNW=h-min_NW[0];
        System.out.println(moveNW+"  NW");
        int moveSW=h-min_SW[0];
        System.out.println(moveSW+"  SW");
        int moveSE=min_SE[0]-h;
        System.out.println(moveSE+"  SE");
        System.out.println("\n\n"+(moveE+moveW+moveN+moveS+moveNE+moveNW+moveSE+moveSW));
        sc.close();
    }
}