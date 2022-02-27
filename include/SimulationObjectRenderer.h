#ifndef SimulationObjectRenderer_h
#define SimulationObjectRenderer_h

class AbstractSimulationObject;

class SimulationObjectRenderer
{
public:
	static void render(AbstractSimulationObject* object);

private:
	SimulationObjectRenderer() = default;

	SimulationObjectRenderer(const SimulationObjectRenderer& other) = delete;
	SimulationObjectRenderer(SimulationObjectRenderer&& other) = delete;
	SimulationObjectRenderer& operator=(const SimulationObjectRenderer& other) = delete;
	SimulationObjectRenderer& operator=(SimulationObjectRenderer&& other) = delete;
	~SimulationObjectRenderer() = delete;
};

#endif


