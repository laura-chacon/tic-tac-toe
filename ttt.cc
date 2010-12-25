#include "ttt.h"
#include <iostream>

TTT::TTT() {
  m_button.set_label("Hello World");
  set_border_width(10);

  m_button.signal_clicked().
    connect(sigc::mem_fun(*this,&TTT::on_button_clicked));
  add(m_button);						  
  m_button.show();
}

TTT::~TTT() {}

void TTT::on_button_clicked() {
  std::cout << "Hello World" << std::endl;
}
