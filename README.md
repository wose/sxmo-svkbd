SVKBD
=====

This is a simple virtual keyboard, intended to be used in environments,
where no keyboard is available.

Installation
------------

	% make
	% make install

This will create by default `svkbd-sxmo`, which is svkbd using an versatile
layout with multiple layers and overlays, and optimised for mobile devices.
It was designed for [Simple X Mobile](https://sr.ht/~mil/Sxmo).

You can create svkbd for additional layouts by doing:

	% make svkbd-$layout

This will take the file `layout.$layout.h` and create `svkbd-$layout`.
`make install` will then pick up the new file and install it accordingly.

Usage
-----

	% svkbd-sxmo

This will open svkbd at the bottom of the screen, showing the default
English layout.

	% svkbd-sxmo -d

This tells svkbd-sxmo to announce itself being a dock window, which then
is managed differently between different window managers. If using dwm
and the dock patch, then this will make svkbd being managed by dwm and
some space of the screen being reserved for it.

	% svkbd-sxmo -g 400x200+1+1

This will start svkbd-en with a size of 400x200 and at the upper left
window corner.

You can enable layers on the fly through either the ``-l`` flag or through the ``SVKBD_LAYERS`` environment variable.
They both take a comma separated list of layer names (as defined in your ``layout.*.h``). Use the ``↺`` button in the
bottom-left to cycle through all the layers.

The virtual keyboard comes with overlays that will show when certain keys are hold pressed for a longer time. For
example, a long press on the ``a`` key will enable an overview showing all kinds of diacritic combinations for ``a``.

Overlay functionality interferes with the ability to hold a key and have it outputted repeatedly.  You can disable
overlay functionality with the ``-O`` flag or by setting the environment variable ``SVKBD_ENABLEOVERLAYS=0``. There is
also a key on the function layer of the keyboard itself to enable/disable this behaviour on the fly. Its label shows
``≅`` when the overlay functionality is enabled and ``≇`` when not.

Notes
---------

This virtual keyboard does not actually modify the X keyboard layout, it simply relies on a standard US QWERTY layout
(setxkbmap us) being activated. If you use another XKB layout you will get unpredictable output that does not match the
labels on the virtual keycaps.

Repository
----------

SXMO version:

	git clone https://git.sr.ht/~mil/sxmo-svkbd

Original upstream:

	git clone http://git.suckless.org/svkbd

