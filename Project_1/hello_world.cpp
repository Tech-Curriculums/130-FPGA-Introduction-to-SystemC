#include <systemc.h>

//here we create a module called hello_world
SC_MODULE(hello_world) {
  private int meaning_of_life; // easter egg

  //SC_CTOR -- systemC constructor
  SC_CTOR(hello_world) {
    meaning_of_life=42;
  }

  void say_hello() {
    cout << "Hello World sytemc-2.3.1.\n";
  }

  void open_magic_box() {
    cout << meaning_of_life << endl;
  }

};


int sc_main(int argc, char* argv[]) {
  hello_world hello("HELLO");
  hello.say_hello();
  hello.open_magic_box();
  return(0);
}
