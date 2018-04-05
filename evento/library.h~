#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>

enum Type{
	None = 0,					//Not an event
	Timer = 1,					//Regular timer events
	MouseButtonPress = 2,				//Mouse press
	MouseButtonRelease = 3,				//Mouse release
	MouseButtonDblClick = 4,			//Mouse press again
	MouseMove = 5,					//Mouse move
	KeyPress = 6,					//Key press
	KeyRelease = 7,					//Key release
	FocusIn = 8,					//Widget or Window gains keyboard focus
	FocusOut = 9,					//Widget or Window loses keyboard focus
	Enter = 10,					//Mouse enters widget's boundaries
	Leave = 11,					//Mouse leaves widget's boundaries
	Paint = 12,					//Screen update necessary
	Move = 13,					//Widget's position changed
	Resize = 14,					//Widget's size changed
	
	Show = 17,					//Widget was shown on screen
	Hide = 18,					//Widget was hidden
	Close = 19,					//Widget was closed
	
	ParentChange = 21,				//The widget parent has changed
	ThreadChange = 22,				//The object is moved to another thread. This is the last event sent to this object in the previous thread
	FocusAboutToChange = 23,			//Widget or Window focus is about to change
	WindowActivate = 24,				//Window was activated
	WindowDeactivate = 25,				//Window was deactivated
	ShowToParent = 26,				//A child widget has been shown
	HideToParent = 27,				//A child widget has been hidden
	
	Wheel = 31,					//Mouse wheel rolled
	
	WindowTitleChange = 33,				//The window title has changed
	WindowIconChange = 34,				//The window's icon has changed
	ApplicationWindowIconChange = 35,		//The application's icon has changed
	ApplicationFontChange = 36,			//The default application font has changed
	ApplicationLayoutDirectionChange = 37,		//The default application layout direction has changed
	ApplicationPaletteChange = 38,			//The default application palette has changed
	PaletteChange = 39,				//Palette of the widget changed
	Clipboard = 40,					//The clipboard contents have changed

	MetaCall = 43,					//An asynchronous method invocation via QMetaObject::invokeMethod()

	SockAct = 50,					//Socket activated, used to implement QSocketNotifier
	ShortcutOverride = 51,				//Key press in child, for overriding shortcut key handling
	DeferredDelete = 52,				//The object will be deleted after it has cleaned up

	DragEnter = 60,					//The cursor enters a widget during a drag and drop operation
	DragMove = 61,					//A drag and drop operation is in progress
	DragLeave = 62,					//The cursor leaves a widget during a drag and drop operation
	Drop = 63,					//A drag and drop operation is completed

	ChildAdded = 68,				//An object gets a child
	ChildPolished = 69,				//A widget child gets polished

	ChildRemoved = 71,				//An object loses a child

	PolishRequested = 74,				//The widget should be polished
	Polish = 75,					//The widget is polished
	LayoutRequest = 76,				//Widget layout needs to be redone
	UpdateRequest = 77,				//The widget should be repainted
	UpdateLater = 78,				//The widget should be queued to be repainted at a later time

	ContextMenu = 82,				//Context popup menu
	InputMethod = 83,				//An input method is being used 

	TabletMove = 87,				//Wacom tablet move
	LocaleChange = 88,				//The system locale has changed
	LanguageChange = 89,				//The application translation changed
	LayoutDirectionChange = 90,			//The direction of layouts changed

	TabletPress = 92,				//Wacom tablet press
	TabletRelease = 93,				//Wacom tablet release

	IconDrag = 96,					//The main icon of a window has been dragged away
	FontChange = 97,				//Widget's font has changed
	EnabledChange = 98,				//Widget's enabled state has changed
	ActivationChange = 99,				//A widget's top-level window activation state has changed
	StyleChange = 100,				//Widget's style has been changed
	IconTextChange = 101,				//Widget's icon text has been changed
	ModifiedChange = 102,				//Widgets modification state has been changed
	WindowBlocked = 103,				//The window is blocked by a modal dialog
	WindowUnblocked = 104,				//The window is unblocked after a modal dialog exited
	WindowStateChange = 105,			//The window's state (minimized, maximized or full-screen) has changed
	ReadOnlyChange = 106,				//Widget's read-only state has changed 

	MouseTrackingChange = 109,			//The mouse tracking state has changed
	ToolTip = 110,					//A tooltip was requested
	WhatsThis = 111,				//The widget should reveal "What's This?" help
	StatusTip = 112,				//A status tip is requested
	ActionChanged = 113,				//An action has been changed
	ActionAdded = 114,				//A new action has been added
	ActionRemoved = 115,				//An action has been removed
	FileOpen = 116,					//File open request
	Shortcut = 117,					//Key press in child for shortcut key handling
	WhatsThisClicked = 118,				//A link in a widget's "What's This?" help was clicked

	ToolBarChange = 120,				//The toolbar button is toggled on macOS
	ApplicationActivate = 121,			//This enum has been deprecated. Use ApplicationStateChange instead
	ApplicationDeactivate = 122,			//This enum has been deprecated. Use ApplicationStateChange instead
	QueryWhatsThis = 123,				//The widget should accept the event if it has "What's This?" help.
	EnterWhatsThisMode = 124,			//Send to toplevel widgets when the application enters "What's This?" mode
	LeaveWhatsThisMode = 125,			//Send to toplevel widgets when the application leaves "What's This?" mode.

	ZOrderChange = 126,				//The widget's z-order has changed. This event is never sent to top level windows
	HoverEnter = 127,				//The mouse cursor enters a hover widget
	HoverLeave = 128,				//The mouse cursor leaves a hover widget 
	HoverMove = 129,				//The mouse cursor moves inside a hover widget

	ParentAboutToChange = 131,			//The widget parent is about to change
	WinEventAct = 132,				//A Windows-specific activation event has occurred

	EnterEditFocus = 150,				//An editor widget gains focus for editing. QT_KEYPAD_NAVIGATION must be defined
	LeaveEditFocus = 151,				//An editor widget loses focus for editing. QT_KEYPAD_NAVIGATION must be defined

	GraphicsSceneMouseMove = 155,			//Move mouse in a graphics scene
	GraphicsSceneMousePress = 156,			//Mouse press in a graphics scene
	GraphicsSceneMouseRelease = 157,		//Mouse release in a graphics scene
	GraphicsSceneMouseDoubleClick = 158,		//Mouse press again (double click) in a graphics scene
	GraphicsSceneContextMenu = 159,			//Context popup menu over a graphics scene
	GraphicsSceneHoverEnter = 160,			//The mouse cursor enters a hover item in a graphics scene
	GraphicsSceneHoverMove = 161,			//The mouse cursor moves inside a hover item in a graphics scene
	GraphicsSceneHoverLeave = 162,			//The mouse cursor leaves a hover item in a graphics scene
	GraphicsSceneHelp = 163,			//The user requests help for a graphics scene

	GraphicsSceneDragMove = 165,			//A drag and drop operation is in progress over a scene
	GraphicsSceneDragLeave = 166,			//The cursor leaves a graphics scene during a drag and drop operation
	GraphicsSceneDrop = 167,			//A drag and drop operation is completed over a scene
	GraphicsSceneWheel = 168,			//Mouse wheel rolled in a graphics scene
	KeyboardLayoutChange = 169,			//The keyboard layout has changed
	DynamicPropertyChange = 170,			//A dynamic property was added, changed, or removed from the object
	TabletEnterProximity = 171,			//Wacom tablet enter proximity event (QTabletEvent), sent to QApplication
	TabletLeaveProximity = 172,			//Wacom tablet leave proximity event (QTabletEvent), sent to QApplication.
	NonClientAreaMouseMove = 173,			//NonClientAreaMouseMove,
	NonClientAreaMouseButtonPress = 174,		//A mouse button press occurred outside the client area
	NonClientAreaMouseButtonRelease = 175,		//NonClientAreaMouseButtonRelease
	NonClientAreaMouseButtonDblClick = 176,		//A mouse double click occurred outside the client area
	MacSizeChange = 177,				//The user changed his widget sizes (macOS only)
	ContentsRectChange = 178,			//The margins of the widget's content rect changed

	GraphicsSceneResize = 181,			//Widget was resized
	GraphicsSceneMove = 182,			//Widget was moved
	CursorChange = 183,				//The widget's cursor has changed
	ToolTipChange = 184,				//The widget's tooltip has changed

	GrabMouse = 186,				//Item gains mouse grab
	UngrabMouse = 187,				//Item loses mouse grab
	GrabKeyboard = 188,				//Item gains keyboard grab (QGraphicsItem only)
	UngrabKeyboard = 189,				//Item loses keyboard grab (QGraphicsItem only)

	StateMachineSignal = 192,			//A signal delivered to a state machine
	StateMachineWrapped = 193,			//The event is a wrapper for, i.e., contains, another event
	TouchBegin = 194,				//Beginning of a sequence of touch-screen or track-pad events
	TouchUpdate = 195,				//Touch-screen event
	TouchEnd = 196,					//End of touch-event sequence
	NativeGesture = 197,				//The system has detected a gesture 
	Gesture = 198,					//A gesture was triggered
	RequestSoftwareInputPanel = 199,		//A widget wants to open a software input panel (SIP)
	CloseSoftwareInputPanel = 200,			//A widget wants to close the software input panel (SIP)

	GestureOverride = 202,				//A gesture override was triggered
	WinIdChange = 203,				//The window system identifer for this native widget has changed
	ScrollPrepare = 204,				//The object needs to fill in its geometry information
	Scroll = 205,					//The object needs to scroll to the supplied position
	Expose = 206,					//Sent to a window when its on-screen contents are invalidated and need to be flushed from the backing store
	InputMethodQuery = 207,				//A input method query event
	OrientationChange = 208,			//The screens orientation has changes (QScreenOrientationChangeEvent)
	TouchCancel = 209,				//Cancellation of touch-event sequence

	PlatformPanel = 212,				//A platform specific panel has been requested

	ApplicationStateChange = 214,			//The state of the application has changed

	PlatformSurface = 217,				//A native platform surface has been created or is about to be destroyed

	TabletTrackingChange = 219,			//The Wacom tablet tracking state has changed
	
};

class QEvent
{
	public:

		static int User;			//User-defined event
		static int MaxUser;			//Last user event ID

		
		QEvent(Type type)
		{
			this->tipo = type;
			this->flag = 1;
			this->origin = 1;
		}

		~QEvent();
		
		void setAccepted(bool accepted)
		{
			this->flag = accepted;
		}

		void accept()
		{
			this->setAccepted(1);
		}

		void ignore()
		{
			this->setAccepted(0);
		}

		bool isAccepted() const
		{
			return this->flag;
		}

		bool spontaneous() const
		{
			return this->origin;
		}

		Type type()
		{
			return this->tipo;
		}

		//static int registerEventType(int hint = -1)
		//{
			
	
	private:
		bool flag;
		bool origin;
		Type tipo;
};

int QEvent::User = 1000;
int QEvent::MaxUser = 65535;

#endif
