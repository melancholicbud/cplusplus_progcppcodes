#pragma once
enum class SignalColor { Red, Green, Yellow };

class Trafficlight {
private:
	SignalColor color; // the light's current color: Red, Green, or Yellow
public:

	Trafficlight(SignalColor, initial_color);
	void change();
	SignalColor get_color() const;
};