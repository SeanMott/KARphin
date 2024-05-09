// Copyright 2015 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <algorithm>
#include <string>
#include <wx/frame.h>

class CGameListCtrl;
class wxCheckBox;
class wxChoice;
class wxListBox;
class wxNotebook;
class wxSpinCtrl;
class wxStaticText;
class wxTextCtrl;

class NetPlaySetupFrame final : public wxFrame
{
public:
	NetPlaySetupFrame(wxWindow* const parent, const CGameListCtrl* const game_list);
	~NetPlaySetupFrame();

private:
	static constexpr int CONNECT_TAB = 0;
	static constexpr int HOST_TAB = 1;

	//which Net Mode are we using
	static constexpr int NETMODE_CHOICE_DIRECT_IP = 0;
	static constexpr int NETMODE_CHOICE_FRIEND_CODE = 1;
	static constexpr int NETMODE_CHOICE_LAN = 2;
	static constexpr int NETMODE_CHOICE_MATCHMAKING = 3;

	//which STUN server and general net backend are we using
	static constexpr int NETWORK_BACKEND_CHOICE_DOLPHIN = 0;
	static constexpr int NETWORK_BACKEND_CHOICE_BTD = 0;

	void CreateGUI();
	wxNotebook* CreateNotebookGUI(wxWindow* parent);

	void OnJoin(wxCommandEvent& event);
	void OnHost(wxCommandEvent& event);
	void DoJoin();
	void DoHost();
	void OnQuit(wxCommandEvent& event);
	void OnDirectTraversalChoice(wxCommandEvent& event);
	void OnResetTraversal(wxCommandEvent& event);
	void OnTraversalListenPortChanged(wxCommandEvent& event);
	void OnKeyDown(wxKeyEvent& event);
	void OnTabChanged(wxCommandEvent& event);
	void DispatchFocus();

	wxStaticText* m_ip_lbl;
	wxStaticText* m_client_port_lbl;
	wxTextCtrl* m_nickname_text;
	wxStaticText* m_host_port_lbl;
	wxTextCtrl* m_host_port_text;
	wxTextCtrl* m_connect_port_text;
	wxTextCtrl* m_connect_ip_text;
	wxTextCtrl* m_connect_hashcode_text;
	wxStaticText * alert_lbl;
	wxChoice* m_netmode_choice_dropdown;
	wxStaticText* m_traversal_lbl;
	wxButton* m_trav_reset_btn;
	wxCheckBox* m_traversal_listen_port_enabled;
	wxSpinCtrl* m_traversal_listen_port;
	wxNotebook* m_notebook;

	wxListBox* m_game_lbox;
#ifdef USE_UPNP
	wxCheckBox* m_upnp_chk;
#endif

	wxString m_traversal_string;
	const CGameListCtrl* const m_game_list;
};
