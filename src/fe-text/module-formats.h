#include <irssi/src/fe-common/core/formats.h>

enum {
	TXT_MODULE_NAME,

	TXT_FILL_1,

        TXT_LASTLOG_TOO_LONG,
        TXT_LASTLOG_COUNT,
	TXT_LASTLOG_START,
	TXT_LASTLOG_END,
	TXT_LASTLOG_SEPARATOR,
	TXT_LASTLOG_DATE,

	TXT_FILL_2,

        TXT_REFNUM_NOT_FOUND,
        TXT_WINDOW_TOO_SMALL,
        TXT_CANT_HIDE_LAST,
	TXT_CANT_HIDE_STICKY_WINDOWS,
        TXT_CANT_SHOW_STICKY_WINDOWS,
        TXT_WINDOW_NOT_STICKY,
        TXT_WINDOW_SET_STICKY,
	TXT_WINDOW_UNSET_STICKY,
	TXT_WINDOW_INFO_STICKY,
        TXT_WINDOW_INFO_SCROLL,
        TXT_WINDOW_SCROLL,
        TXT_WINDOW_SCROLL_UNKNOWN,
	TXT_WINDOW_HIDELEVEL,

	TXT_FILL_3,

	TXT_STATUSBAR_LIST_HEADER,
	TXT_STATUSBAR_LIST_FOOTER,
	TXT_STATUSBAR_LIST,
	TXT_STATUSBAR_INFO_NAME,
	TXT_STATUSBAR_INFO_TYPE,
	TXT_STATUSBAR_INFO_PLACEMENT,
	TXT_STATUSBAR_INFO_POSITION,
	TXT_STATUSBAR_INFO_VISIBLE,
	TXT_STATUSBAR_INFO_ITEM_HEADER,
	TXT_STATUSBAR_INFO_ITEM_FOOTER,
	TXT_STATUSBAR_INFO_ITEM_NAME,
	TXT_STATUSBAR_NOT_FOUND,
	TXT_STATUSBAR_NOT_ENABLED,
	TXT_STATUSBAR_ITEM_NOT_FOUND,
	TXT_STATUSBAR_UNKNOWN_COMMAND,
	TXT_STATUSBAR_UNKNOWN_TYPE,
	TXT_STATUSBAR_UNKNOWN_PLACEMENT,
	TXT_STATUSBAR_UNKNOWN_VISIBILITY,

	TXT_FILL_4,

	TXT_PASTE_WARNING,
	TXT_PASTE_PROMPT,

	TXT_FILL_5, /* Welcome */

	TXT_IRSSI_BANNER,
	TXT_WELCOME_FIRSTTIME,
	TXT_WELCOME_INIT_SETTINGS,

	TXT_COUNT
};

extern FORMAT_REC gui_text_formats[TXT_COUNT+1];
