#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
	///------- Creation of the window -------///

	// The following line register all fullscreen modes are available for this computer
	std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes();

	// Using the following method make the window be in fullscreen mode at the start of the program
	//sf::RenderWindow window(modes[0], "Conway's Game of Life simulation", sf::Style::Fullscreen);

	// Initializes the window with a width of 512 pixels and a height of 256 pixels
	sf::RenderWindow window(sf::VideoMode(512, 256), "Window title", sf::Style::Default);

	// Sets the framerate limit of the window
	window.setFramerateLimit(60);

	///--------------------------------------///
	

	///------- Main loop -------///
	while (window.isOpen())
	{
		///--- Event handler ---///

		sf::Event event;
		while (window.pollEvent(event))
		{
			// If the user closes the window, the main loop ends
			if (event.type == sf::Event::Closed)
				window.close();
		}

		///---------------------///


		///--- Program logics ---///
		
		/// Here will go the logics of the program


		///----------------------///

		///--- Rendering the window ---///

		// This method fills the screen with white, acts as a refresh
		window.clear(sf::Color::White);

		/// Here will go the drawings (e.g. window.draw(someVertex); );

		// This method shows on the monitor all we have drawn on the window
		window.display();

		///----------------------------///
	}

	return 0;
}