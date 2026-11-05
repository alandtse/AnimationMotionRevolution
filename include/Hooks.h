#pragma once

namespace hooks
{
	[[nodiscard]] bool HasAnimMotionData(const RE::hkbCharacter* a_hkbCharacter) noexcept;
	void Install();
}
