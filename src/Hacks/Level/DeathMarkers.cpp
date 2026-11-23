#include "../../Client/Module.hpp"
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class DeathMarkers : public Module
{
public:
    MODULE_SETUP(DeathMarkers)
    {
        setName("Death Markers");
        setID("death-markers");
        setCategory("Level");
        setDescription("Shows visual markers at points where you have died in the level");
    }
};

SUBMIT_HACK(DeathMarkers)

class $modify (DeathMarkerPlayLayer, PlayLayer)
{
    struct Fields {
        std::vector<CCPoint> deathPoints = {};
        CCDrawNode* drawNode = nullptr;
    };

    bool init(GJGameLevel* level, bool dontCreateObjects)
    {
        if (!PlayLayer::init(level, dontCreateObjects))
            return false;

        m_fields->deathPoints.clear();
        m_fields->drawNode = CCDrawNode::create();
        if (m_objectLayer && m_fields->drawNode)
        {
            m_objectLayer->addChild(m_fields->drawNode, 100);
        }

        return true;
    }

    virtual void circleWaveWillBeRemoved(CCCircleWave*) {}
    virtual void dialogClosed(DialogLayer*) {}

    void destroyPlayer(PlayerObject* player, GameObject* object)
    {
        if (DeathMarkers::get()->getRealEnabled() && player && m_fields->drawNode)
        {
            CCPoint pos = player->getPosition();
            m_fields->deathPoints.push_back(pos);
            m_fields->drawNode->drawDot(pos, 6.0f, ccc4f(1.0f, 0.2f, 0.2f, 0.85f));
            m_fields->drawNode->drawCircle(pos, 10.0f, ccc4f(0.0f, 0.0f, 0.0f, 0.0f), 1.5f, ccc4f(1.0f, 0.8f, 0.2f, 0.9f), 16);
        }

        PlayLayer::destroyPlayer(player, object);
    }
};
