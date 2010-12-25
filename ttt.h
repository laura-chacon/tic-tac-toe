#ifndef GTKMM_EXAMPLE_TTT_H
#define GTKMM_EXAMPLE_TTT_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class TTT : public Gtk::Window {
 public:
  TTT();
  virtual ~TTT();

 protected:
  void on_button_clicked();

  Gtk::Button m_button;
};

#endif
