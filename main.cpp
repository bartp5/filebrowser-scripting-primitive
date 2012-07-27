/*
 * filebrowser scripting primitive for Onyx Boox M92
 *
 * Copyright (C) 2012 bartp
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <QtGui/QtGui>

#include "filebrowser.h"
#include "onyx/application.h"
#include "onyx/sys/sys_status.h"



#include "onyx/ui/toolbar.h"
#include "onyx/ui/status_bar.h"
#include "onyx/ui/onyx_dialog.h"


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	app.setApplicationName("filebrowser");
	QFile currentFile;

        Q_INIT_RESOURCE(onyx_ui_images);
        sys::SysStatus::instance().setSystemBusy(false);

    	FileBrowser fileBrowser(0);
	/*onyx::screen::watcher().addWatcher(&fileBrowser);*/
	
    	QString path = fileBrowser.showLoadFile(currentFile.fileName());
    	if (path.isEmpty()) {
        	return 1;
    	}

	printf("%s\n",path.toUtf8().data());
    	return 0;
}
