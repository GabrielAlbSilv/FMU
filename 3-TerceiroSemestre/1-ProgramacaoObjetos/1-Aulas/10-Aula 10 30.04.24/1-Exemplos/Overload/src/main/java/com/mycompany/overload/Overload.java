package com.mycompany.overload;

class Overload
{
    void demo (int a)
    {
        System.out.println("a: "+a);
    }
    void demo (int a, int b)
    {
        System.out.println("a: "+a+",b: "+b);
    }
    double demo (double a)
    {
        System.out.println("double a: "+a);
        return a*a;
    }
}

class MethodOverloading
{
    public static void main (String args [])
    {
        Overload Obj = new Overload();
        double result;
        // void demo (int a)
        Obj.demo(10); 
        // void demo (int a)
        Obj.demo(10,20);
        //double demo (double a)
        result = Obj.demo(5.5);
        System.out.println("O/P: "+result);
    }
}
