/* vi: set cindent:
 * $Id$
 *
 * ROX-Filer, filer for the ROX desktop project
 * By Thomas Leonard, <tal197@ecs.soton.ac.uk>.
 */

#include <gtk/gtk.h>

enum
{
	TYPE_ERROR,
	TYPE_UNKNOWN,
	TYPE_SYMLINK,
	TYPE_FILE,
	TYPE_DIRECTORY,
	TYPE_CHAR_DEVICE,
	TYPE_BLOCK_DEVICE,
	TYPE_PIPE,
	TYPE_SOCKET,
	TYPE_MULTIPLE,
	TYPE_APPDIR,
	LAST_DEFAULT_PIXMAP
};


typedef struct _MaskedPixmap MaskedPixmap;

struct _MaskedPixmap
{
	GdkPixmap	*pixmap;
	GdkBitmap	*mask;
};


extern MaskedPixmap default_pixmap[LAST_DEFAULT_PIXMAP];


void load_default_pixmaps(GdkWindow *window);
void load_pixmap(GdkWindow *window, char *name, MaskedPixmap *image);
