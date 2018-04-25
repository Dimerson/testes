namespace Qt
{
	enum KeyboardModifier
	{
		NoModifier = 0x00000000,		//No modifier key is pressed
		ShiftModifier = 0x02000000,		//A Shift key on the keyboard is pressed
		ControlModifier = 0x04000000,		//A Ctrl key on the keyboard is pressed
		AltModifier = 0x08000000,		//An Alt key on the keyboard is pressed
		MetaModifier = 0x10000000,		//A Meta key on the keyboard is pressed
		KeypadModifier = 0x20000000,		//A keypad button is pressed
		GroupSwitchModifier = 0x40000000	//X11 only. A Mode_switch key on the keyboard is pressed
	};

	enum FocusReason
	{
		MouseFocusReason = 0,		//A mouse action occurred
		TabFocusReason = 1,		//The Tab key was pressed
		BacktabFocusReason = 2,		//A Backtab occurred. The input for this may include the Shift or Control keys; e.g. Shift+Tab
		ActiveWindowFocusReason = 3,	//The window system made this window either active or inactive
		PopupFocusReason = 4,		//The application opened/closed a pop-up that grabbed/released the keyboard focus
		ShortcutFocusReason = 5,	//The user typed a label's buddy shortcut
		MenuBarFocusReason = 6,		//The menu bar took focus
		OtherFocusReason = 7		//Another reason, usually application-specific
	};
};

