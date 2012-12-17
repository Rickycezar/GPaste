/*
 *      This file is part of GPaste.
 *
 *      Copyright 2012 Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
 *
 *      GPaste is free software: you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation, either version 3 of the License, or
 *      (at your option) any later version.
 *
 *      GPaste is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with GPaste.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined (__G_PASTE_H_INSIDE__) && !defined (G_PASTE_COMPILATION)
#error "Only <gpaste.h> can be included directly."
#endif

#ifndef __G_PASTE_PASTE_AND_POP_KEYBINDING_H__
#define __G_PASTE_PASTE_AND_POP_KEYBINDING_H__

#ifdef G_PASTE_COMPILATION
#include "config.h"
#endif

#include "gpaste-keybinding.h"
#include "gpaste-history.h"

G_BEGIN_DECLS

#define G_PASTE_TYPE_PASTE_AND_POP_KEYBINDING            (g_paste_paste_and_pop_keybinding_get_type ())
#define G_PASTE_PASTE_AND_POP_KEYBINDING(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_PASTE_TYPE_PASTE_AND_POP_KEYBINDING, GPastePasteAndPopKeybinding))
#define G_PASTE_IS_PASTE_AND_POP_KEYBINDING(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_PASTE_TYPE_PASTE_AND_POP_KEYBINDING))
#define G_PASTE_PASTE_AND_POP_KEYBINDING_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), G_PASTE_TYPE_PASTE_AND_POP_KEYBINDING, GPastePasteAndPopKeybindingClass))
#define G_PASTE_IS_PASTE_AND_POP_KEYBINDING_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_PASTE_TYPE_PASTE_AND_POP_KEYBINDING))
#define G_PASTE_PASTE_AND_POP_KEYBINDING_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), G_PASTE_TYPE_PASTE_AND_POP_KEYBINDING, GPastePasteAndPopKeybindingClass))

typedef struct _GPastePasteAndPopKeybinding GPastePasteAndPopKeybinding;
typedef struct _GPastePasteAndPopKeybindingClass GPastePasteAndPopKeybindingClass;

#ifdef G_PASTE_COMPILATION
G_PASTE_VISIBLE
#endif
GType g_paste_paste_and_pop_keybinding_get_type (void);

GPastePasteAndPopKeybinding *g_paste_paste_and_pop_keybinding_new (GPasteSettings *settings,
                                                                   GPasteHistory  *history);

G_END_DECLS

#endif /*__G_PASTE_PASTE_AND_POP_KEYBINDING_H__*/
