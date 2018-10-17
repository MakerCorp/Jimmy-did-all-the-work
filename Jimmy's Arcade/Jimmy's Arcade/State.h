#pragma once

namespace Makercorp
{
	class State
	{
	public:
		virtual void Init() = 0;

		virtual void HandleInput() = 0;
		virtual void update() = 0;
		virtual void Draw(float dt) = 0;

		virtual void Pause() {}
		virtual void Resume() {}



		State();
		~State();

	private:

	};

	State::State()
	{
	}

	State::~State()
	{
	};
}
