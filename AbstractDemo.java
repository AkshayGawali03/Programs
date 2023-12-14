abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside Demo Constructor");
        this.A = 0;
        this.B = 0;
    }
    abstract void fun();    //virtual void fun()=0;  c++

    void gun()
    {
        System.out.println("Inside gun of Demo");
    }
}
class Hello extends Demo
{
    public Hello()
    {
        System.out.println("Inside Hello constructor");
    }
    public void fun()
    {
        System.out.println("Inside fun of Hello");
    }
}
class AbstractDemo
{
    public static void main(String arg[])
    {
        Hello hobj = new Hello();
        hobj.fun();
        hobj.gun();
    }
}