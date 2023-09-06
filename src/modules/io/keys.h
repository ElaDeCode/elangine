#ifndef INPUT_H
#define INPUT_H

//! this header also contains mouse buttons

/* even though all the keys are defined in GLFW, I'm defining them here
  because I don't want to include GLFW in every file that needs to use
  the keys. This is also usefull if I ever decide change the glfw with
  another library */

#include <GLFW/glfw3.h>

#define MOUSE_BUTTON_LEFT GLFW_MOUSE_BUTTON_LEFT
#define MOUSE_BUTTON_RIGHT GLFW_MOUSE_BUTTON_RIGHT
#define MOUSE_BUTTON_MIDDLE GLFW_MOUSE_BUTTON_MIDDLE
#define MOUSE_BUTTON_1 GLFW_MOUSE_BUTTON_1
#define MOUSE_BUTTON_2 GLFW_MOUSE_BUTTON_2
#define MOUSE_BUTTON_3 GLFW_MOUSE_BUTTON_3
#define MOUSE_BUTTON_4 GLFW_MOUSE_BUTTON_4
#define MOUSE_BUTTON_5 GLFW_MOUSE_BUTTON_5
#define MOUSE_BUTTON_6 GLFW_MOUSE_BUTTON_6
#define MOUSE_BUTTON_7 GLFW_MOUSE_BUTTON_7
#define MOUSE_BUTTON_8 GLFW_MOUSE_BUTTON_8

#define MOUSE_BUTTON_LAST GLFW_MOUSE_BUTTON_LAST

#define KEY_0 GLFW_KEY_0
#define KEY_1 GLFW_KEY_1
#define KEY_2 GLFW_KEY_2
#define KEY_3 GLFW_KEY_3
#define KEY_4 GLFW_KEY_4
#define KEY_5 GLFW_KEY_5
#define KEY_6 GLFW_KEY_6
#define KEY_7 GLFW_KEY_7
#define KEY_8 GLFW_KEY_8
#define KEY_9 GLFW_KEY_9

#define KEY_A GLFW_KEY_A
#define KEY_B GLFW_KEY_B
#define KEY_C GLFW_KEY_C
#define KEY_D GLFW_KEY_D
#define KEY_E GLFW_KEY_E
#define KEY_F GLFW_KEY_F
#define KEY_G GLFW_KEY_G
#define KEY_H GLFW_KEY_H
#define KEY_I GLFW_KEY_I
#define KEY_J GLFW_KEY_J
#define KEY_K GLFW_KEY_K
#define KEY_L GLFW_KEY_L
#define KEY_M GLFW_KEY_M
#define KEY_N GLFW_KEY_N
#define KEY_O GLFW_KEY_O
#define KEY_P GLFW_KEY_P
#define KEY_Q GLFW_KEY_Q
#define KEY_R GLFW_KEY_R
#define KEY_S GLFW_KEY_S
#define KEY_T GLFW_KEY_T
#define KEY_U GLFW_KEY_U
#define KEY_V GLFW_KEY_V
#define KEY_W GLFW_KEY_W
#define KEY_X GLFW_KEY_X
#define KEY_Y GLFW_KEY_Y
#define KEY_Z GLFW_KEY_Z

#define KEY_SPACE GLFW_KEY_SPACE
#define KEY_ENTER GLFW_KEY_ENTER

#define KEY_UP GLFW_KEY_UP
#define KEY_DOWN GLFW_KEY_DOWN
#define KEY_LEFT GLFW_KEY_LEFT
#define KEY_RIGHT GLFW_KEY_RIGHT

#define KEY_ESCAPE GLFW_KEY_ESCAPE

#define KEY_F1 GLFW_KEY_F1
#define KEY_F2 GLFW_KEY_F2
#define KEY_F3 GLFW_KEY_F3
#define KEY_F4 GLFW_KEY_F4
#define KEY_F5 GLFW_KEY_F5
#define KEY_F6 GLFW_KEY_F6
#define KEY_F7 GLFW_KEY_F7
#define KEY_F8 GLFW_KEY_F8
#define KEY_F9 GLFW_KEY_F9
#define KEY_F10 GLFW_KEY_F10
#define KEY_F11 GLFW_KEY_F11
#define KEY_F12 GLFW_KEY_F12

#define KEY_LSHIFT GLFW_KEY_LEFT_SHIFT
#define KEY_RSHIFT GLFW_KEY_RIGHT_SHIFT
#define KEY_LCTRL GLFW_KEY_LEFT_CONTROL
#define KEY_RCTRL GLFW_KEY_RIGHT_CONTROL
#define KEY_LALT GLFW_KEY_LEFT_ALT
#define KEY_RALT GLFW_KEY_RIGHT_ALT

#define KEY_TAB GLFW_KEY_TAB
#define KEY_CAPSLOCK GLFW_KEY_CAPS_LOCK
#define KEY_BACKSPACE GLFW_KEY_BACKSPACE
#define KEY_INSERT GLFW_KEY_INSERT
#define KEY_DELETE GLFW_KEY_DELETE
#define KEY_PAGEUP GLFW_KEY_PAGE_UP
#define KEY_PAGEDOWN GLFW_KEY_PAGE_DOWN
#define KEY_HOME GLFW_KEY_HOME
#define KEY_END GLFW_KEY_END
#define KEY_SCROLLLOCK GLFW_KEY_SCROLL_LOCK
#define KEY_NUMLOCK GLFW_KEY_NUM_LOCK
#define KEY_PRINTSCREEN GLFW_KEY_PRINT_SCREEN
#define KEY_PAUSE GLFW_KEY_PAUSE

#define KEY_KP_0 GLFW_KEY_KP_0
#define KEY_KP_1 GLFW_KEY_KP_1
#define KEY_KP_2 GLFW_KEY_KP_2
#define KEY_KP_3 GLFW_KEY_KP_3
#define KEY_KP_4 GLFW_KEY_KP_4
#define KEY_KP_5 GLFW_KEY_KP_5
#define KEY_KP_6 GLFW_KEY_KP_6
#define KEY_KP_7 GLFW_KEY_KP_7
#define KEY_KP_8 GLFW_KEY_KP_8
#define KEY_KP_9 GLFW_KEY_KP_9
#define KEY_KP_DECIMAL GLFW_KEY_KP_DECIMAL
#define KEY_KP_DIVIDE GLFW_KEY_KP_DIVIDE
#define KEY_KP_MULTIPLY GLFW_KEY_KP_MULTIPLY
#define KEY_KP_SUBTRACT GLFW_KEY_KP_SUBTRACT
#define KEY_KP_ADD GLFW_KEY_KP_ADD
#define KEY_KP_ENTER GLFW_KEY_KP_ENTER
#define KEY_KP_EQUAL GLFW_KEY_KP_EQUAL

#define KEY_MENU GLFW_KEY_MENU

#define KEY_LEFT_SHIFT GLFW_KEY_LEFT_SHIFT
#define KEY_LEFT_CONTROL GLFW_KEY_LEFT_CONTROL
#define KEY_LEFT_ALT GLFW_KEY_LEFT_ALT
#define KEY_LEFT_SUPER GLFW_KEY_LEFT_SUPER
#define KEY_RIGHT_SHIFT GLFW_KEY_RIGHT_SHIFT
#define KEY_RIGHT_CONTROL GLFW_KEY_RIGHT_CONTROL
#define KEY_RIGHT_ALT GLFW_KEY_RIGHT_ALT
#define KEY_RIGHT_SUPER GLFW_KEY_RIGHT_SUPER

#define KEY_UNKNOWN GLFW_KEY_UNKNOWN
#define KEY_LAST GLFW_KEY_LAST

#endif // KEYS_H