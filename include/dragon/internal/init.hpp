#pragma once 

DGAPI DgBool32 createEngine(Engine* engine, std::string name);
DGAPI void updateEngine(Engine* engine);
DGAPI DgBool32 canEngineBeTerminated(Engine* engine);
DGAPI void terminateEngine(Engine* engine);