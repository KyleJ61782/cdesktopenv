/*
 * CDE - Common Desktop Environment
 *
 * Copyright (c) 1993-2012, The Open Group. All rights reserved.
 *
 * These libraries and programs are free software; you can
 * redistribute them and/or modify them under the terms of the GNU
 * Lesser General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * These libraries and programs are distributed in the hope that
 * they will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with these libraries and programs; if not, write
 * to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301 USA
 */
/* 
 * (c) Copyright 1989, 1990, 1991, 1992, 1993 OPEN SOFTWARE FOUNDATION, INC. 
 * ALL RIGHTS RESERVED 
*/ 
/* 
 * Motif Release 1.2.3
*/ 
/*
 * (c) Copyright 1987, 1988, 1989, 1990 HEWLETT-PACKARD COMPANY */
#include "WmICCC.h"

extern SizeHints * GetNormalHints (ClientData *pCD);
extern void ProcessWmProtocols (ClientData *pCD);
extern void ProcessMwmMessages (ClientData *pCD);
extern void SetMwmInfo (Window propWindow, long flags, Window wmWindow);
void SetMwmSaveSessionInfo (Window wmWindow);
extern void GetDtWmRequest (WmScreenData *pSD, char **pszReq, Boolean *pmore);
extern void GetDtSessionHints (WmScreenData *pSD, int sNum);

extern PropWMState * GetWMState (Window window);
extern void SetWMState (Window window, int state, Window icon);
extern PropMwmHints * GetMwmHints (ClientData *pCD);
extern PropMwmInfo * GetMwmInfo (Window rootWindowOfScreen);
extern void ProcessWmColormapWindows (ClientData *pCD);
extern Colormap FindColormap (ClientData *pCD, Window window);
extern MenuItem * GetMwmMenuItems (ClientData *pCD);
extern void SetEmbeddedClientsProperty (Window propWindow, Window *pEmbeddedClients, unsigned long cEmbeddedClients);
extern void GetInitialPropertyList (ClientData *pCD);
extern Status GetWorkspaceHints (Display *display, Window window, Atom **ppWsAtoms, unsigned int *pCount, Boolean *pbAll);
extern void SetWorkspacePresence (Window propWindow, Atom *pWsPresence, unsigned long cPresence);
extern Boolean HasProperty(ClientData *pCD, Atom property);
extern void DiscardInitialPropertyList (ClientData *pCD);
extern void GetInitialPropertyList (ClientData *pCD);
extern void SetWorkspaceListProperty (WmScreenData *pSD);
extern void SetCurrentWorkspaceProperty (WmScreenData *pSD);
extern void SetWorkspaceInfoProperty (WmWorkspaceData *pWS);
extern void DeleteWorkspaceInfoProperty (WmWorkspaceData *pWS);
extern char *WorkspacePropertyName (WmWorkspaceData *pWS);
extern char *GetUtf8String (Display *display, Window w, Atom property);
extern void SetUtf8String (Display *display, Window w, Atom property,
			   const char *s);
extern void UpdateNetWmState (Window window, Atom *states,
			      unsigned long nstates, long action);
