const char* ControllerPatcher::ui_gp_btn_guide;
const char* ControllerPatcher::ui_window;
const char* ControllerPatcher::ui_pam;
const char* ControllerPatcher::ui_gp_trick;
const char* ControllerPatcher::ui_howto;
const char* ControllerPatcher::ui_btn_guide;
const char* ControllerPatcher::ui_gameplay;

void ControllerPatcher::Install()
{
	switch (Configuration::buttonType)
	{
		case Configuration::ButtonType::XSX:
			ui_gp_btn_guide = "ui_gp_btn_xboxs";
			ui_window = "ui_xbxdow";
			ui_pam = "ui_xbm";
			ui_gp_trick = "ui_gp_xboxs";
			ui_howto = "ui_howxb";
			ui_btn_guide = "ui_btn_xbide";
			ui_gameplay = "ui_gamexbay";
			break;

		case Configuration::ButtonType::PS3:
			ui_gp_btn_guide = "ui_gp_btn_pside";
			ui_window = "ui_psndow";
			ui_pam = "ui_psm";
			ui_gp_trick = "ui_gp_psick";
			ui_howto = "ui_howps";
			ui_btn_guide = "ui_btn_pside";
			ui_gameplay = "ui_gamepsay";
			break;

		case Configuration::ButtonType::Switch:
			ui_gp_btn_guide = "ui_gp_btn_nswit";
			ui_window = "ui_nswdow";
			ui_pam = "ui_nsm";
			ui_gp_trick = "ui_gp_nswit";
			ui_howto = "ui_howns";
			ui_btn_guide = "ui_btn_nside";
			ui_gameplay = "ui_gamensay";
			break;

		default:
			ui_gp_btn_guide = "ui_gp_btn_guide";
			ui_window = "ui_window";
			ui_pam = "ui_pam";
			ui_gp_trick = "ui_gp_trick";
			ui_howto = "ui_howto";
			ui_btn_guide = "ui_btn_guide";
			ui_gameplay = "ui_gameplay";
			break;
	}

	WRITE_STATIC_MEMORY(0x015E3D80, ui_gp_btn_guide, 15);
	WRITE_STATIC_MEMORY(0x016A6AA4, ui_gp_btn_guide, 15);

	WRITE_STATIC_MEMORY(0x0168C928, ui_window, 9);
	WRITE_STATIC_MEMORY(0x016A6B9C, ui_window, 9);

	WRITE_STATIC_MEMORY(0x016A93CC, ui_pam, 6);
	WRITE_STATIC_MEMORY(0x0168B294, ui_pam, 6);
	WRITE_STATIC_MEMORY(0x0168B3C8, ui_pam, 6);
	WRITE_STATIC_MEMORY(0x0168B780, ui_pam, 6);

	WRITE_STATIC_MEMORY(0x01579524, ui_gp_trick, 11);
	WRITE_STATIC_MEMORY(0x016D84F8, ui_gp_trick, 11);

	WRITE_STATIC_MEMORY(0x01688344, ui_howto, 8);
	WRITE_STATIC_MEMORY(0x016886A8, ui_howto, 8);
	WRITE_STATIC_MEMORY(0x01692BC4, ui_howto, 8);

	WRITE_STATIC_MEMORY(0x0154BCA4, ui_btn_guide, 12);
	WRITE_STATIC_MEMORY(0x0154CF74, ui_btn_guide, 12);
	WRITE_STATIC_MEMORY(0x0168BD44, ui_btn_guide, 12);

	WRITE_STATIC_MEMORY(0x0168E328, ui_gameplay, 11);
}