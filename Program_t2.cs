using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task2
{
    class Program
    {
        static void Main()
        {
            Class1 cl = new Class1();
            Class1 cl1 = new Class1(9);
            cl.Output();
            cl.Output("Hello");

            cl1.Output();
            cl1.Output("aaaaaa");
            Console.ReadKey();
        }
    }
}
