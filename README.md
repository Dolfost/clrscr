# clrscr
C++ «header-only» library for cleaning the terminal window output.
## Usage
There is only one function `clrscr()` in the library.  

`int clrscr(short clearmode)`  
> `int return`: Function status.  
> `short clearmode`: Clearmode.
#### Clearmodes
Mode        |     Description
------------|------------------------------------------
`0`            |     Prints special ANSI Escape Sequence using `std::cout`. Works in most Terminals.
`1`          |      `system("clear")`. Suitable for Linux Systems.
`2`           |      `system("cls")`. Suitable for Windows.
#### Function return
Return | Description
-------|-----------------------------------------------
`0`      | The cleaning was successful.
`!0`     | An error occurred while cleaning.
### Example: [test.cpp](https://github.com/Dolfost/clrscr-cpp/blob/main/readme/run/test.cpp).

### Other libinfo: [libinfo.txt](https://github.com/Dolfost/clrscr-cpp/blob/main/readme/libinfo.txt). 
-------------------------------------------

## License: LGPL-3.0
[GNU General Public License v3.0](https://github.com/Dolfost/clrscr-cpp/blob/main/COPYING)  






##### *Coffe...?* [PayPal](https://www.paypal.com/donate?hosted_button_id=BZ6DNYKFPBWNA)  
