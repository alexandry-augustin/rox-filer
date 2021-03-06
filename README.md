ROX-Filer
=========
A RISC OS-like filer for X
by Thomas Leonard

Dependencies
---
`sudo apt-get install autoconf pkg-config libsm-dev gtk+2.0 libxml2-dev`
`sudo dnf install autoconf automake libSM-devel.x86_64 gtk2-devel libxml2-devel`

libsm-dev: X11 Session Management library (development headers)

Compilation
------------------

1. in `./ROX-Filer/src` run `autoconf` to generate the `configure` file
2. 

Quick start
-----------
If you downloaded a source or binary tarball directly, type this ($ is the
shell prompt):

	$ ./ROX-Filer/AppRun

This will compile the filer (if necessary) and then run it.

However, it is more common to use Zero Install or a distribution package. To
get the filer using Zero Install, do:

$ 0alias rox http://rox.sourceforge.net/2005/interfaces/ROX-Filer
$ rox


ROX-Filer
---------
Documentation for ROX-Filer can be found in the directory ROX-Filer/Help.


Conditions
----------
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA


Please report any bugs to the [rox-devel mailing list](http://rox.sourceforge.net/desktop/lists).
