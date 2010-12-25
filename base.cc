#include "ttt.h"
#include <gtkmm/main.h>

int main(int argc, char *argv[]) {
  Gtk::Main kit(argc, argv);
  TTT h;
  Gtk::Main::run(h);

  return 0;
}
