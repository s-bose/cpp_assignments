#include <iostream>

namespace			        // raw string is defined in a namespace
{				        // outside main function body
  const char hello[] = 	        // define hello as a constant RSL
  R"str(
  ^\\s+Encryption key:(\\w+)
  ^\\s+Quality=(\\d+)
  ^\\s+E?SSID:\"([[:print:]]+)\"
  ^\\s+ssid=\"([[:print:]]+)\"

  )str";			         // str is used for identifying delimiters
}

int main()
{
  std::cout << hello << std::endl;  // using the variable hello defined earlier
}
