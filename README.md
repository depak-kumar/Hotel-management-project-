# Hotel-management-project-
HOTEL management project using c++


1. **Header and Libraries**: The code begins by including the necessary header file `iostream` for input and output operations. It also uses the `using namespace std` directive to simplify the use of standard C++ libraries.

2. **Class Definition (discount)**: The `discount` class is defined to handle the discount calculation based on the guest's age and a quiz question. It includes member variables such as `dis` (discount amount), `age` (guest's age), and `x` and `y` (temporary variables for calculations). The class also contains a constructor and a method called `get_data` to interact with the guest and calculate the discount.

3. **Main Function**: The `main` function serves as the entry point of the program. It initializes various variables to keep track of room and food quantities, as well as sales and collections. The `discount` class is instantiated as `d` for discount-related operations.

4. **Menu Interface**: The program presents a menu-driven interface using a `while` loop, allowing the user to interact with the system by choosing options. The available options include:
   - Reserving rooms
   - Ordering food
   - Viewing sales and collection details
   - Exploring Villa's Hotel
   - Checking for discounts
   - Exiting the program

5. **Switch Statement**: The user's choice is processed using a `switch` statement. Each case corresponds to a menu option, and the appropriate functionality is executed based on the user's selection.

6. **Room Reservation**: The code includes functionality for reserving rooms based on room type (Deluxe or Normal) and quantity. It calculates the total cost and updates room-related variables accordingly.

7. **Food Ordering**: The program allows users to order various food items (Pasta, Burger, Noodles, Shake, Veg Meal) by specifying the quantity. It calculates the total cost and updates food-related variables.

8. **Sales and Collection Details**: This option displays details about sales and collections, including the number of rooms available, rooms sold, remaining items, and the total collection for the day. A secret code is required to access this information.

9. **Exploring Villa's Hotel**: Users can explore the hotel by accessing information such as the hotel's address, amenities, area attractions, and contact details. This information is presented in a submenu with additional options.

10. **Discount Counter**: This option provides guests with a discount based on their age and a quiz question. If the total purchase amount is greater than zero, the user is eligible for a discount, which is calculated and displayed.

11. **Exiting the Program**: When the user chooses to exit, the program displays the total bill, including any applicable discounts, and terminates.

12. **Loop**: The program runs in an infinite loop until the user chooses to exit by selecting option 6. This allows users to perform multiple operations without restarting the program.

The code provides basic functionality for managing hotel rooms, food orders, and guest interactions. To improve user experience and robustness, you may consider adding input validation and error handling, enhancing the interface, and organizing the code into functions for better modularity.
