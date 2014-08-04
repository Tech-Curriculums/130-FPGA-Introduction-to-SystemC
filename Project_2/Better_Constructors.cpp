#include <systemc.h>

//here we create a module called hello_world
SC_MODULE(hello_world) {

  int meaning_of_life; // easter egg
  int magic_number;


  hello_world (sc_module_name _n, int _magic_number) : sc_module(_n), magic_number(_magic_number) {
    meaning_of_life=13;
  }

  hello_world (sc_module_name _n) : sc_module(_n) {
    meaning_of_life=42;
  }

  void say_hello() {
    cout << "Hello Systemc-2.3.1!.\n";
  }

  void open_magic_box() {
    cout << meaning_of_life << endl;
  }

  SC_HAS_PROCESS(hello_world);
  //SC_CTOR -- systemC constructor
};


int sc_main(int argc, char* argv[]) {

  hello_world hello("Hello_Module");
  hello.say_hello();
  hello.open_magic_box();

  hello_world hello_again("Hello_Again_Module", 35);
  hello_again.say_hello();
  hello_again.open_magic_box();
  cout << hello_again.magic_number << endl;
  return(0);
}
