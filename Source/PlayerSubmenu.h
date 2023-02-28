#pragma once
#include "stdafx.h"

//namespace Mod_Hub_Base::UserInterface
//{
//	class PlayerSubmenu : public BaseSubmenu<PlayerSubmenu>
//	{
//	public:
//		explicit PlayerSubmenu() = default;
//		~PlayerSubmenu() noexcept = default;
//		explicit PlayerSubmenu(std::uint32_t* selectedPlayer, std::uint32_t id, std::function<void(PlayerSubmenu*)> action) :
//			m_SelectedPlayer(selectedPlayer)
//		{
//			SetId(id);
//			SetAction(std::move(action));
//		}
//
//		PlayerSubmenu(PlayerSubmenu const&) = default;
//		PlayerSubmenu& operator=(PlayerSubmenu const&) = default;
//		PlayerSubmenu(PlayerSubmenu&&) = default;
//		PlayerSubmenu& operator=(PlayerSubmenu&&) = default;
//
//		const char* GetName() override
//		{
//			return PLAYER::GET_PLAYER_NAME(g_SelectedPlayer);
//		}
//	private:
//		std::uint32_t* m_SelectedPlayer;
//	};
//}
