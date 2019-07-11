using System;

namespace number_guessing_cs
{
    class Program
    {
        static void Main()
        {
            Random random = new Random();
            int target_number = random.Next(1, 10000);

            int num_guesses = 0;

            Console.WriteLine("welcome to this small number guessing game. please enter any number between 1 and 10000.");
            bool running = true;

            string user_input;

            while (running)
            {
                user_input = Console.ReadLine();
                if (user_input == target_number) { running = false; }
                else if (user_input > target_number) { Console.WriteLine("your number is too small! try again."); }
                else if (user_input > target_number) { Console.WriteLine("your number is too small! try again."); }
                num_guesses++;
            }

            Console.WriteLine("congratulations, you win. the number was " + target_number + ".");
            Console.WriteLine("it took you " + num_tries + " attempts to guess the number.");

            Console.ReadLine();
        }
    }
}
