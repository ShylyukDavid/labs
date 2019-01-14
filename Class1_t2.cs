using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task2
{
    class Class1
    {
        private int a;
        public Class1()
        {
            a = 10; 
        }
        public Class1(int i)
        {
            a = i;
        }
        public void Output()
        {
            Console.WriteLine("Void output");
        }

        public void Output(string arg)
        {
            Console.WriteLine("YOu wrote " + arg);
        }
    }
}
