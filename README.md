# ImageDialogQt
Are you tired of developers using the gtk filepicker without image previews in the GNU/Linux releases of software?

Me too. Luckily, even I can dedicate a few minutes to write a better alternative. And it has previews alright.

# Usage

You need Qt4 for this.

  ~~~ sh
  $ git clone https://github.com/daedreth/ImageDialogQt.git
  $ cd ImageDialogQt
  $ qmake imagedialogQt.pro
  $ make
  $ sudo make install
  $ <run it wherever you want, just check the stdout for the file path>
  ~~~

Or you could just import it as a submodule to your own repository.

Upon file selection it prints the absolute path of the selected file to stdout, you can capture this in any other language.

It's also going to print out libpng warnings, this is an issue with your images, not ImageDialogQt (I'm not even kidding).
You probably want to parse its output to avoid issues.

# Image previews

It's hacky, it should work but I can't guarantee anything.

# License

    This file is part of ImageDialogQt.

    ImageDialogQt is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ImageDialogQt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with ImageDialogQt.  If not, see <http://www.gnu.org/licenses/>.



Do what you must.
