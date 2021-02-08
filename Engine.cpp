
//@include:using=stl

class Transform
{
	
};

template<typename>
class DLListNode
{
}


template<typename>
class DLList
{
	
	
};

class Reflection
{};

class MemoryObject : public Reflection
{};

class Actor : public MemoryObject
{
public:
	Transform*	transform;
	
	Actor*	parent;
	
	DLList<Actor*>	childs;
	DLList<Actor*>	components;
	
	bool addComponet(Actor* actor){}
	bool removeCompoennt(Actor* actor);
	Actor* findComponent(const char* key);
	
	bool addChild(Actor* child);
	bool removeChild(Actor* child);
	Actor* findChild(const char* key);
	
}；

class RenderPass
{
	//loop
	
	//Shader
	
	//
};

class RenderTech
{
	
}；

class RenderEffect
{};

class GraphicActor : public Actor
{};

class CameraActor : public GraphicActor
{
	
	
	
	RenderEffect*	renderEffect;
};

class LightActor : public GraphicActor
{
	
};

class ModelActor : public GraphicActor
{
	
};

class TerrainActor : public GraphicActor
{
	
};


class Engine
{};

class RenderEngine
{};

class MemoryEngine
{};

class AssetEgnine 
{};

class LuaEgnine : public Engine
{
	
};

class ActorEngine : public Engine
{
	
};

class Edior : public Engine
{};







