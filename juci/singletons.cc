#include "singletons.h"

std::unique_ptr<Source::Config> Singleton::Config::source_=std::unique_ptr<Source::Config>(new Source::Config());
std::unique_ptr<Terminal::Config> Singleton::Config::terminal_=std::unique_ptr<Terminal::Config>(new Terminal::Config());
std::unique_ptr<Directories::Config> Singleton::Config::directories_=std::unique_ptr<Directories::Config>(new Directories::Config());

std::unique_ptr<Terminal::Controller> Singleton::terminal_=std::unique_ptr<Terminal::Controller>();
std::unique_ptr<Notebook::Controller> Singleton::notebook_=std::unique_ptr<Notebook::Controller>();
std::unique_ptr<Menu> Singleton::menu_=std::unique_ptr<Menu>();
Terminal::Controller *Singleton::terminal() {
  if(!terminal_)
    terminal_=std::unique_ptr<Terminal::Controller>(new Terminal::Controller());
  return terminal_.get();
}
Notebook::Controller *Singleton::notebook() {
  if(!notebook_)
    notebook_=std::unique_ptr<Notebook::Controller>(new Notebook::Controller());
  return notebook_.get();
}
Menu *Singleton::menu() {
  if(!menu_)
    menu_=std::unique_ptr<Menu>(new Menu());
  return menu_.get();
}