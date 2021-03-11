#include <Arduino.h>
#include <configuration.h>
#include <messagestack.h>


void push(String call, String source, String time, String rssi, String snr, String mymsg)
{
  StackEntry* entry = new StackEntry();
  entry->call = call;
  // Hier gehts weiter...
  ///stack.push_back(entry)
}
